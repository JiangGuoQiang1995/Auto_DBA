//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

// services.debug.trace("Translating");

///////////////////////////////////////////////////////////////////////////////
//
// Helper functions 
//
///////////////////////////////////////////////////////////////////////////////
function getCameraElement() {
    var camera = document.elements.findElementByTypeId("Microsoft.VisualStudio.3D.PerspectiveCamera");
    return camera;
}

function getWorldMatrix(element) {
    return element.getTrait("WorldTransform").value;
}

function getFrustumHeightAtDepth(zDepth, fovy) {
    var angle = (fovy * 0.5) * 3.14 / 180.0;
    return 2.0 * zDepth * Math.tan(angle);
}

function getParentToLocal(element) {
    var localToWorldMatrix = getWorldMatrix(element);
    var worldToLocal = math.getInverse(localToWorldMatrix);

    var parent = element.parent;
    if (parent != null) {
        var parentToWorld = getWorldMatrix(parent);

        return math.multiplyMatrix(worldToLocal, parentToWorld);
    }
    else {
        return worldToLocal;
    }
}

function getFirstSelectedWithoutAncestorInSelection() {
    var count = services.selection.count;
    for (var i = 0; i < count; i++) {
        var currSelected = services.selection.getElement(i);

        //
        // don't operate on items whose parents (in scene) are ancestors
        // since this will double the amount of translation applied to those
        //
        var hasAncestor = false;
        for (var otherIndex = 0; otherIndex < count; otherIndex++) {
            if (otherIndex != i) {
                var ancestor = services.selection.getElement(otherIndex);
                if (currSelected.behavior.isAncestor(ancestor)) {
                    hasAncestor = true;
                    break;
                }
            }
        }

        if (!hasAncestor) {
            return currSelected;
        }
    }
    return null;
}

///////////////////////////////////////////////////////////////////////////////
//
// heper to get a designer property as a bool
//
///////////////////////////////////////////////////////////////////////////////
function getDesignerPropAsBool(tname) {
    if (document.designerProps.hasTrait(tname))
        return document.designerProps.getTrait(tname).value;

    return false;
}

function getSelectionMode() {
    if (getDesignerPropAsBool("usePivot"))
        return 0; // default to object mode when using pivot
    if (document.designerProps.hasTrait("SelectionMode"))
        return document.designerProps.getTrait("SelectionMode").value;
    return 0;
}

function getCommandState(commandName) {
    var commandData = services.commands.getCommandData(commandName);
    if (commandData != null) {
        var trait = commandData.getTrait("state");
        if (trait != null) {
            return trait.value;
        }
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////////
//
// Button state trait
//
///////////////////////////////////////////////////////////////////////////////

var state = command.getTrait("state");

///////////////////////////////////////////////////////////////////////////////
//
// Property window and tool settings 
//
///////////////////////////////////////////////////////////////////////////////
var enablePropertyWindow = 8;

var stepAmount = 5.0;

function StepAmountChanged(sender, args) {
    stepAmount = document.toolProps.getTrait("StepAmount").value;
}


var toolProps;
var toolPropCookie;
var snapCookie;
function createOptions() {

    var snapTrait = document.designerProps.getOrCreateTrait("snap", "bool", 0);
    snapCookie = snapTrait.addHandler("OnDataChanged", OnSnapEnabledTraitChanged);

    toolProps = document.createElement("toolProps", "type", "toolProps");
    toolProps.getOrCreateTrait("StepAmount", "float", enablePropertyWindow);
    document.toolProps = toolProps;

    toolProps.getTrait("StepAmount").value = stepAmount;

    // Set up the callback when the option traits are changed
    toolPropCookie = toolProps.getTrait("StepAmount").addHandler("OnDataChanged", StepAmountChanged);

    OnSnapEnabledTraitChanged(null, null);
}

function OnSnapEnabledTraitChanged(sender, args) {
    var snapTrait = document.designerProps.getOrCreateTrait("snap", "bool", 0);
    if (toolProps != null) {
        var stepAmountTrait = toolProps.getTrait("StepAmount");
        if (stepAmountTrait != null) {
            var newFlags = stepAmountTrait.flags;
            if (snapTrait.value) {
                newFlags |= enablePropertyWindow;
            }
            else {
                newFlags &= ~enablePropertyWindow;
            }
            stepAmountTrait.flags = newFlags;

            document.refreshPropertyWindow();
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
//
// Manipulator registration and event handling
//
///////////////////////////////////////////////////////////////////////////////
var manipulatorData = services.manipulators.getManipulatorData("TranslationManipulator");
var manipulator = services.manipulators.getManipulator("TranslationManipulator");
var undoableItem;

function getTranslationTraitId() {
    var translationTraitId;
    if (getDesignerPropAsBool("usePivot")) {
        translationTraitId = "PivotTranslation";
    }
    else {
        translationTraitId = "Translation";
    }
    return translationTraitId;
}

// find the mesh child
function findFirstChildMesh(parent)
{
    // find the mesh child
    for (var i = 0; i < parent.childCount; i++) {

        // get child and its materials
        var child = parent.getChild(i);
        if (child.typeId == "Microsoft.VisualStudio.3D.Mesh") {
            return child;
        }
    }
    return null;
}

///////////////////////////////////////////////////////////////////////////////
//
// Translation logic
//
///////////////////////////////////////////////////////////////////////////////
function coreTranslate(dx, dy, dz) {

    var selectionMode = getSelectionMode();

    var selectedElement = getFirstSelectedWithoutAncestorInSelection();

    if (selectedElement == null) {
        return;
    }

    if (selectionMode == 0) {

        // object selection mode
        var translationTraitId = getTranslationTraitId();

        var t = selectedElement.getTrait(translationTraitId).value;

        var isSnapMode = getDesignerPropAsBool("snap");

        if (isSnapMode && stepAmount != 0) {
        
            var newX = t[0] + dx;
            var newY = t[1] + dy;
            var newZ = t[2] + dz;

            var tmpX = Math.round(newX / stepAmount) * stepAmount;
            var tmpY = Math.round(newY / stepAmount) * stepAmount;
            var tmpZ = Math.round(newZ / stepAmount) * stepAmount;

            var halfStep = stepAmount * 0.5;
            var stepPct = halfStep * 0.9;

            if (Math.abs(tmpX - newX) < stepPct) {
                t[0] = tmpX;
            }

            if (Math.abs(tmpY - newY) < stepPct) {
                t[1] = tmpY;
            }

            if (Math.abs(tmpZ - newZ) < stepPct) {
                t[2] = tmpZ;
            }
        }
        else {
            t[0] = t[0] + dx;
            t[1] = t[1] + dy;
            t[2] = t[2] + dz;
        }

        undoableItem._lastValue = t;
        undoableItem.onDo();
    }
    else if (selectionMode == 1 || selectionMode == 2 || selectionMode == 3) {

        // polygon or edge selection mode

        var pToL = getParentToLocal(selectedElement);
        var v = [dx, dy, dz];

        v = math.transformNormal(pToL, v);

        undoableItem._currentDelta[0] = v[0];
        undoableItem._currentDelta[1] = v[1];
        undoableItem._currentDelta[2] = v[2];

        undoableItem.onDo();
    }
}

///////////////////////////////////////////////////////////////////////////////
//
// Listens to manipulator position changes
//
///////////////////////////////////////////////////////////////////////////////
function onManipulatorXYZChangedHandler(sender, args) {

    var xyzDelta = manipulatorData.getTrait("ManipulatorTraitXYZ").value;
    var dx = xyzDelta[0];
    var dy = xyzDelta[1];
    var dz = xyzDelta[2];

    coreTranslate(dx, dy, dz);
}

///////////////////////////////////////////////////////////////////////////////
//
// Called when manipulator begins modifying the object (i.e. mouse down and begin drag)
// Begins the undoable block / marks the restore point
//
///////////////////////////////////////////////////////////////////////////////
function onBeginManipulation() {

    // services.debug.trace("Translate: onBeginManipulation()");    

    undoableItem = null;

    //
    // Check the selection mode
    //
    var selectionMode = getSelectionMode();
    if (selectionMode == 0) {
        //
        // object selection
        //

        // services.debug.trace("onBeginManipulation - object selection");

        var translationTraitId = getTranslationTraitId();

        function UndoableTranslation(trait, traitValues, initialValue) {
            this._traitArray = traitArray;
            this._traitValues = traitValues;
            this._initialValues = initialValue;
        }

        var traitArray = new Array();
        var traitValues = new Array();
        var initialValues = new Array();

        //
        // add the traits of selected items to the collections that we'll be operating on
        //
        var count = services.selection.count;
        for (i = 0; i < count; i++) {
            var currSelected = services.selection.getElement(i);

            //
            // don't operate on items whose parents (in scene) are ancestors
            // since this will double the amount of translation applied to those
            //
            var hasAncestor = false;
            for (var otherIndex = 0; otherIndex < count; otherIndex++) {
                if (otherIndex != i) {
                    var ancestor = services.selection.getElement(otherIndex);
                    if (currSelected.behavior.isAncestor(ancestor)) {
                        hasAncestor = true;
                        break;
                    }
                }
            }

            if (!hasAncestor) {

                var currTrait = currSelected.getTrait(translationTraitId);

                traitArray.push(currTrait);
                traitValues.push(currTrait.value);
                initialValues.push(currTrait.value);
            }
        }


        // create the undoable item
        undoableItem = new UndoableTranslation(traitArray, traitValues, initialValues);

        undoableItem.onDo = function () {

            var count = this._traitArray.length;

            // movement delta of all the selected is determined by delta of the first selected
            var delta = [0, 0, 0];
            if (count > 0) {
                delta[0] = this._lastValue[0] - this._initialValues[0][0];
                delta[1] = this._lastValue[1] - this._initialValues[0][1];
                delta[2] = this._lastValue[2] - this._initialValues[0][2];
            }

            for (i = 0; i < count; i++) {
                var currTrait = this._traitArray[i];
                this._traitValues[i][0] = this._initialValues[i][0] + delta[0];
                this._traitValues[i][1] = this._initialValues[i][1] + delta[1];
                this._traitValues[i][2] = this._initialValues[i][2] + delta[2];

                var theVal = this._traitArray[i].value;
                theVal[0] = this._traitValues[i][0];
                theVal[1] = this._traitValues[i][1];
                theVal[2] = this._traitValues[i][2];
                this._traitArray[i].value = theVal;
            }
        }

        undoableItem.onUndo = function () {
            var count = this._traitArray.length;
            for (i = 0; i < count; i++) {
                this._traitArray[i].value = this._initialValues[i];
            }
        }
    }
    else if (selectionMode == 1) {
        //
        // polygon selection mode
        //

        // services.debug.trace("onBeginManipulation - polygon selection");

        function UndoablePolyTranslation(elem) {
            // services.debug.trace("UndoablePolyTranslation construct");

            this._totalDelta = [0, 0, 0];
            this._currentDelta = [0, 0, 0];

            // find the mesh child
            this._meshElem = findFirstChildMesh(elem);
            if (this._meshElem == null) {
                return;
            }
            // services.debug.trace("UndoablePolyTranslation found mesh element");

            this._mesh = this._meshElem.behavior;

            // loop over the elements in the polygon collection
            var collElem = this._mesh.selectedObjects;
            if (collElem == null) {
                return;
            }

            this._polyCollectionElem = collElem.clone();

            // services.debug.trace("UndoablePolyTranslation found _polyCollectionElem element");

            // get the actual collection we can operate on
            this._polyCollection = this._polyCollectionElem.behavior;
            // services.debug.trace("assigned _polyCollection");

            this._geom = this._meshElem.getTrait("Geometry").value
        }

        //
        // do
        //
        UndoablePolyTranslation.prototype.onDo = function () {

            // array we will store indices in
            var polygonPoints = new Object();

            // loop over the point indices in the poly collection
            var polyCount = this._polyCollection.getPolygonCount();
            for (var i = 0; i < polyCount; i++) {
                var polyIndex = this._polyCollection.getPolygon(i);

                // get the point count and loop over polygon points
                var polygonPointCount = this._geom.getPolygonPointCount(polyIndex);
                for (var j = 0; j < polygonPointCount; j++) {

                    // get the point index
                    var pointIndex = this._geom.getPolygonPoint(polyIndex, j);
                    polygonPoints[pointIndex] = pointIndex;
                }
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in polygonPoints) {
                var ptIdx = polygonPoints[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] += this._currentDelta[0];
                pt[1] += this._currentDelta[1];
                pt[2] += this._currentDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._totalDelta[0] += this._currentDelta[0];
            this._totalDelta[1] += this._currentDelta[1];
            this._totalDelta[2] += this._currentDelta[2];

            // invalidate the mesh collision
            this._mesh.recomputeCachedGeometry();
        }

        //
        // undo
        //
        UndoablePolyTranslation.prototype.onUndo = function () {

            // array we will store indices in
            var polygonPoints = new Object();

            // loop over the point indices in the poly collection
            var polyCount = this._polyCollection.getPolygonCount();
            for (var i = 0; i < polyCount; i++) {
                var polyIndex = this._polyCollection.getPolygon(i);

                // get the point count and loop over polygon points
                var polygonPointCount = this._geom.getPolygonPointCount(polyIndex);
                for (var j = 0; j < polygonPointCount; j++) {

                    // get the point index
                    var pointIndex = this._geom.getPolygonPoint(polyIndex, j);
                    polygonPoints[pointIndex] = pointIndex;
                }
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in polygonPoints) {
                var ptIdx = polygonPoints[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] -= this._totalDelta[0];
                pt[1] -= this._totalDelta[1];
                pt[2] -= this._totalDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._currentDelta[0] = this._totalDelta[0];
            this._currentDelta[1] = this._totalDelta[1];
            this._currentDelta[2] = this._totalDelta[2];

            this._totalDelta[0] = 0;
            this._totalDelta[1] = 0;
            this._totalDelta[2] = 0;

            this._mesh.recomputeCachedGeometry();
        }

        // create the undoable item
        undoableItem = new UndoablePolyTranslation(document.selectedElement);
    }
    else if (selectionMode == 2) {
        //
        // edge selection
        //
        // services.debug.trace("onBeginManipulation - edge selection");

        function UndoableEdgeTranslation(elem) {
            // services.debug.trace("UndoableEdgeTranslation construct");

            this._totalDelta = [0, 0, 0];
            this._currentDelta = [0, 0, 0];

            // find the mesh child
            this._meshElem = findFirstChildMesh(elem);
            if (this._meshElem == null) {
                return;
            }
            // services.debug.trace("UndoableEdgeTranslation found mesh element");

            this._mesh = this._meshElem.behavior;

            // loop over the elements in the polygon collection
            var collElem = this._mesh.selectedObjects;
            if (collElem == null) {
                return;
            }

            this._collectionElem = collElem.clone();

            // services.debug.trace("UndoableEdgeTranslation found _collectionElem element");

            // get the actual collection we can operate on
            this._edgeCollection = this._collectionElem.behavior;
            // services.debug.trace("assigned _edgeCollection");

            this._geom = this._meshElem.getTrait("Geometry").value
        }

        //
        // do
        //
        UndoableEdgeTranslation.prototype.onDo = function () {

            // array we will store indices in
            var points = new Object();

            // loop over the edges
            var edgeCount = this._edgeCollection.getEdgeCount();
            for (var i = 0; i < edgeCount; i++) {
                var edge = this._edgeCollection.getEdge(i);

                points[edge[0]] = edge[0];
                points[edge[1]] = edge[1];
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in points) {
                var ptIdx = points[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] += this._currentDelta[0];
                pt[1] += this._currentDelta[1];
                pt[2] += this._currentDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._totalDelta[0] += this._currentDelta[0];
            this._totalDelta[1] += this._currentDelta[1];
            this._totalDelta[2] += this._currentDelta[2];

            // invalidate the mesh collision
            this._mesh.recomputeCachedGeometry();
        }

        //
        // undo
        //
        UndoableEdgeTranslation.prototype.onUndo = function () {

            // array we will store indices in
            var points = new Object();

            // loop over the edges
            var edgeCount = this._edgeCollection.getEdgeCount();
            for (var i = 0; i < edgeCount; i++) {
                var edge = this._edgeCollection.getEdge(i);

                points[edge[0]] = edge[0];
                points[edge[1]] = edge[1];
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in points) {
                var ptIdx = points[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] -= this._totalDelta[0];
                pt[1] -= this._totalDelta[1];
                pt[2] -= this._totalDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._currentDelta[0] = this._totalDelta[0];
            this._currentDelta[1] = this._totalDelta[1];
            this._currentDelta[2] = this._totalDelta[2];

            this._totalDelta[0] = 0;
            this._totalDelta[1] = 0;
            this._totalDelta[2] = 0;

            this._mesh.recomputeCachedGeometry();
        }

        // create the undoable item
        undoableItem = new UndoableEdgeTranslation(document.selectedElement);
    }
    else if (selectionMode == 3) {
        //
        // point selection
        //
        // services.debug.trace("onBeginManipulation - point selection");

        function UndoablePointTranslation(elem) {
            // services.debug.trace("UndoablePointTranslation construct");

            this._totalDelta = [0, 0, 0];
            this._currentDelta = [0, 0, 0];

            // find the mesh child
            this._meshElem = findFirstChildMesh(elem);
            if (this._meshElem == null) {
                return;
            }
            // services.debug.trace("UndoablePointTranslation found mesh element");

            this._mesh = this._meshElem.behavior;

            // loop over the elements in the polygon collection
            var collElem = this._mesh.selectedObjects;
            if (collElem == null) {
                return;
            }

            this._collectionElem = collElem.clone();

            // services.debug.trace("UndoablePointTranslation found _collectionElem element");

            // get the actual collection we can operate on
            this._pointCollection = this._collectionElem.behavior;
            // services.debug.trace("assigned _pointCollection");

            this._geom = this._meshElem.getTrait("Geometry").value
        }

        //
        // do
        //
        UndoablePointTranslation.prototype.onDo = function () {

            // array we will store indices in
            var points = new Object();

            // loop over the points
            var pointCount = this._pointCollection.getPointCount();
            for (var i = 0; i < pointCount; i++) {
                var pointIndex = this._pointCollection.getPoint(i);

                points[pointIndex] = pointIndex;
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in points) {
                var ptIdx = points[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] += this._currentDelta[0];
                pt[1] += this._currentDelta[1];
                pt[2] += this._currentDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._totalDelta[0] += this._currentDelta[0];
            this._totalDelta[1] += this._currentDelta[1];
            this._totalDelta[2] += this._currentDelta[2];

            // invalidate the mesh collision
            this._mesh.recomputeCachedGeometry();
        }

        //
        // undo
        //
        UndoablePointTranslation.prototype.onUndo = function () {

            // array we will store indices in
            var points = new Object();

            // loop over the points
            var pointCount = this._pointCollection.getPointCount();
            for (var i = 0; i < pointCount; i++) {
                var pointIndex = this._pointCollection.getPoint(i);

                points[pointIndex] = pointIndex;
            }

            // loop over the unique set of indices and transform the associated point
            for (var key in points) {
                var ptIdx = points[key];
                var pt = this._geom.getPointAt(ptIdx);
                pt[0] -= this._totalDelta[0];
                pt[1] -= this._totalDelta[1];
                pt[2] -= this._totalDelta[2];
                this._geom.setPointAt(ptIdx, pt);
            }

            this._currentDelta[0] = this._totalDelta[0];
            this._currentDelta[1] = this._totalDelta[1];
            this._currentDelta[2] = this._totalDelta[2];

            this._totalDelta[0] = 0;
            this._totalDelta[1] = 0;
            this._totalDelta[2] = 0;

            this._mesh.recomputeCachedGeometry();
        }

        // create the undoable item
        undoableItem = new UndoablePointTranslation(document.selectedElement);
    }

    if (undoableItem != null) {
        undoableItem.getName = function () {
            var IDS_MreUndoTranslate = 143;
            return services.strings.getStringFromId(IDS_MreUndoTranslate);
        }
        services.undoService.addUndoableItem(undoableItem);
    }
}

///////////////////////////////////////////////////////////////////////////////
//
// onEndManipulation
//
///////////////////////////////////////////////////////////////////////////////
function onEndManipulation() {
}


///////////////////////////////////////////////////////////////////////////////
//
// Tool
//
///////////////////////////////////////////////////////////////////////////////
var tool = new Object();
// services.debug.trace("Translate: tool = new Object()");    

var onBeginManipulationHandler;
var onEndManipulationHandler;


///////////////////////////////////////////////////////////////////////////////
//
// Tool activate
//
///////////////////////////////////////////////////////////////////////////////
tool.activate = function () {
    // services.debug.trace("Translate: tool.activate()");    

    state.value = 2;

    createOptions();

    services.manipulators.activate("TranslationManipulator");

    onBeginManipulationHandler = manipulator.addHandler("OnBeginManipulation", onBeginManipulation);
    onEndManipulationHandler = manipulator.addHandler("OnEndManipulation", onEndManipulation);
    
    var mxyz = manipulatorData.getTrait("ManipulatorTraitXYZ");
    var ct = manipulatorData.getOrCreateTrait("cookie", "int", 0);
    ct.value = mxyz.addHandler("OnDataChanged", onManipulatorXYZChangedHandler);
}

///////////////////////////////////////////////////////////////////////////////
//
// Tool Deactive
//
///////////////////////////////////////////////////////////////////////////////
tool.deactivate = function () {
    // services.debug.trace("Translate: tool.deactivate()");    

    state.value = 0;

    var ct = manipulatorData.getTrait("cookie");
    manipulatorData.getTrait("ManipulatorTraitXYZ").removeHandler("OnDataChanged", ct.value);

    manipulator.removeHandler("OnBeginManipulation", onBeginManipulationHandler);
    manipulator.removeHandler("OnEndManipulation" , onEndManipulationHandler);

    services.manipulators.deactivate("TranslationManipulator");

    toolProps.getTrait("StepAmount").removeHandler("OnDataChanged", toolPropCookie);
    var snapTrait = document.designerProps.getOrCreateTrait("snap", "bool", 0);
    snapTrait.removeHandler("OnDataChanged", snapCookie);
}

///////////////////////////////////////////////////////////////////////////////
// Global code
///////////////////////////////////////////////////////////////////////////////

if (state.value != 2) {
    // services.debug.trace("Translate: setTool()");    
    document.setTool(tool);
}
// SIG // Begin signature block
// SIG // MIIoKgYJKoZIhvcNAQcCoIIoGzCCKBcCAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // 0eYuOxb6M7D6xewduFYfjBObsRakPS0tQ0eppdN49vOg
// SIG // gg12MIIF9DCCA9ygAwIBAgITMwAABIVemewOWS/N1wAA
// SIG // AAAEhTANBgkqhkiG9w0BAQsFADB+MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
// SIG // aWduaW5nIFBDQSAyMDExMB4XDTI1MDYxOTE4MjEzN1oX
// SIG // DTI2MDYxNzE4MjEzN1owdDELMAkGA1UEBhMCVVMxEzAR
// SIG // BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
// SIG // bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
// SIG // bjEeMBwGA1UEAxMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
// SIG // MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA
// SIG // wEpIdXKb7lKn26sXpXuywkhxGplTQXxROLmNRZBrAHVB
// SIG // f7546RNXZwA/bzDqsuWTuPSC4T+I4j/z9j5/WqPuUw7S
// SIG // pnEPqWXc2xu7eN8kVyQt5170xkK6KHT4vVEkIvayPtIM
// SIG // Ll0SgSCOy/pN5DJCi5ha7FlI84F1Qi2GumR+wQgCwHCV
// SIG // mU8Fj6Ik+B6akISXGCwe6X3rQFQngRFWQ/IrSkOkAOfy
// SIG // 0EfvV+nZUo+FcbWuCZ6cb4Eq5I1ws/rZSeuwAWeedZcN
// SIG // t0VlNbsn4AnxBYQX4sj0dlko7JD5fWqeqq3/HzUNbBmL
// SIG // p9qeCXV8XlACn9YVWv900F47z04kVwpyTwIDAQABo4IB
// SIG // czCCAW8wHwYDVR0lBBgwFgYKKwYBBAGCN0wIAQYIKwYB
// SIG // BQUHAwMwHQYDVR0OBBYEFLgmchogri2BNGlO4+UxamNO
// SIG // ZJKNMEUGA1UdEQQ+MDykOjA4MR4wHAYDVQQLExVNaWNy
// SIG // b3NvZnQgQ29ycG9yYXRpb24xFjAUBgNVBAUTDTIzMDAx
// SIG // Mis1MDUzNTkwHwYDVR0jBBgwFoAUSG5k5VAF04KqFzc3
// SIG // IrVtqMp1ApUwVAYDVR0fBE0wSzBJoEegRYZDaHR0cDov
// SIG // L3d3dy5taWNyb3NvZnQuY29tL3BraW9wcy9jcmwvTWlj
// SIG // Q29kU2lnUENBMjAxMV8yMDExLTA3LTA4LmNybDBhBggr
// SIG // BgEFBQcBAQRVMFMwUQYIKwYBBQUHMAKGRWh0dHA6Ly93
// SIG // d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY2VydHMvTWlj
// SIG // Q29kU2lnUENBMjAxMV8yMDExLTA3LTA4LmNydDAMBgNV
// SIG // HRMBAf8EAjAAMA0GCSqGSIb3DQEBCwUAA4ICAQAo5qgK
// SIG // dgouLEx2XIvqpLRACrBZORzVRislkdqxRl7He3IIGdOB
// SIG // +VOEldHwC+nzhPXS77eCOxwRy4aRnROVIy8uDcS0xtmw
// SIG // wJHgFZsZndrillRisptWmqw8V379xgjeJkV/j5+HPqct
// SIG // 0v+ipLeXkgwCCLK8ysNyodkltYQsF1/5Nb+G/jR9RY5f
// SIG // ov8TybKVwhbmQeGguRS0+X4G0Sqp7FngHZ/A7K2EIU90
// SIG // Fy7ejb9/3TM7+xvwnaW3XKLpfBWJfrd3ZlzPkiApQt5d
// SIG // mntMDpTa0ONskBMnLj1OTqKi0/OY7Ge/uAmknHxSDZTu
// SIG // 5e2O6/8Wrqh20j0Na96CAvnu9ebNhtwpWWt8vfWmMdpZ
// SIG // 12HtbK3KyMfDQF01YosqV1Z/WRphJHzXHw4qhkMJJpec
// SIG // /Z5t6VogWevWnWgQWwBRI8iRuMtGu+m3pf+LAwlb2mcy
// SIG // zN0xW8VTvQUK42UbWyWW5At1wK6S6mUn8ed0rmHXXcT1
// SIG // /Kb3KhbhLvMHFHg9ObfcTWyeE7XQBAiZRItL7wcZZjOb
// SIG // cxV8tqmXqjzFx0kGKj4GfY70nGejcM5xQ9Pt95G88oTk
// SIG // s/1rhmwLuHB2RvICp5UFU+LgNg4nsfQzLNlh4qJDZJ2J
// SIG // S6FHll1tUKyS6ajvNky8ik2wTP6GRwHSHNJM6Ek66PW9
// SIG // /r459vNPQ9PkjjglWTCCB3owggVioAMCAQICCmEOkNIA
// SIG // AAAAAAMwDQYJKoZIhvcNAQELBQAwgYgxCzAJBgNVBAYT
// SIG // AlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
// SIG // EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
// SIG // cG9yYXRpb24xMjAwBgNVBAMTKU1pY3Jvc29mdCBSb290
// SIG // IENlcnRpZmljYXRlIEF1dGhvcml0eSAyMDExMB4XDTEx
// SIG // MDcwODIwNTkwOVoXDTI2MDcwODIxMDkwOVowfjELMAkG
// SIG // A1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAO
// SIG // BgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29m
// SIG // dCBDb3Jwb3JhdGlvbjEoMCYGA1UEAxMfTWljcm9zb2Z0
// SIG // IENvZGUgU2lnbmluZyBQQ0EgMjAxMTCCAiIwDQYJKoZI
// SIG // hvcNAQEBBQADggIPADCCAgoCggIBAKvw+nIQHC6t2G6q
// SIG // ghBNNLrytlghn0IbKmvpWlCquAY4GgRJun/DDB7dN2vG
// SIG // EtgL8DjCmQawyDnVARQxQtOJDXlkh36UYCRsr55JnOlo
// SIG // XtLfm1OyCizDr9mpK656Ca/XllnKYBoF6WZ26DJSJhIv
// SIG // 56sIUM+zRLdd2MQuA3WraPPLbfM6XKEW9Ea64DhkrG5k
// SIG // NXimoGMPLdNAk/jj3gcN1Vx5pUkp5w2+oBN3vpQ97/vj
// SIG // K1oQH01WKKJ6cuASOrdJXtjt7UORg9l7snuGG9k+sYxd
// SIG // 6IlPhBryoS9Z5JA7La4zWMW3Pv4y07MDPbGyr5I4ftKd
// SIG // gCz1TlaRITUlwzluZH9TupwPrRkjhMv0ugOGjfdf8NBS
// SIG // v4yUh7zAIXQlXxgotswnKDglmDlKNs98sZKuHCOnqWbs
// SIG // YR9q4ShJnV+I4iVd0yFLPlLEtVc/JAPw0XpbL9Uj43Bd
// SIG // D1FGd7P4AOG8rAKCX9vAFbO9G9RVS+c5oQ/pI0m8GLhE
// SIG // fEXkwcNyeuBy5yTfv0aZxe/CHFfbg43sTUkwp6uO3+xb
// SIG // n6/83bBm4sGXgXvt1u1L50kppxMopqd9Z4DmimJ4X7Iv
// SIG // hNdXnFy/dygo8e1twyiPLI9AN0/B4YVEicQJTMXUpUMv
// SIG // dJX3bvh4IFgsE11glZo+TzOE2rCIF96eTvSWsLxGoGyY
// SIG // 0uDWiIwLAgMBAAGjggHtMIIB6TAQBgkrBgEEAYI3FQEE
// SIG // AwIBADAdBgNVHQ4EFgQUSG5k5VAF04KqFzc3IrVtqMp1
// SIG // ApUwGQYJKwYBBAGCNxQCBAweCgBTAHUAYgBDAEEwCwYD
// SIG // VR0PBAQDAgGGMA8GA1UdEwEB/wQFMAMBAf8wHwYDVR0j
// SIG // BBgwFoAUci06AjGQQ7kUBU7h6qfHMdEjiTQwWgYDVR0f
// SIG // BFMwUTBPoE2gS4ZJaHR0cDovL2NybC5taWNyb3NvZnQu
// SIG // Y29tL3BraS9jcmwvcHJvZHVjdHMvTWljUm9vQ2VyQXV0
// SIG // MjAxMV8yMDExXzAzXzIyLmNybDBeBggrBgEFBQcBAQRS
// SIG // MFAwTgYIKwYBBQUHMAKGQmh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbS9wa2kvY2VydHMvTWljUm9vQ2VyQXV0MjAx
// SIG // MV8yMDExXzAzXzIyLmNydDCBnwYDVR0gBIGXMIGUMIGR
// SIG // BgkrBgEEAYI3LgMwgYMwPwYIKwYBBQUHAgEWM2h0dHA6
// SIG // Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvZG9jcy9w
// SIG // cmltYXJ5Y3BzLmh0bTBABggrBgEFBQcCAjA0HjIgHQBM
// SIG // AGUAZwBhAGwAXwBwAG8AbABpAGMAeQBfAHMAdABhAHQA
// SIG // ZQBtAGUAbgB0AC4gHTANBgkqhkiG9w0BAQsFAAOCAgEA
// SIG // Z/KGpZjgVHkaLtPYdGcimwuWEeFjkplCln3SeQyQwWVf
// SIG // Liw++MNy0W2D/r4/6ArKO79HqaPzadtjvyI1pZddZYSQ
// SIG // fYtGUFXYDJJ80hpLHPM8QotS0LD9a+M+By4pm+Y9G6XU
// SIG // tR13lDni6WTJRD14eiPzE32mkHSDjfTLJgJGKsKKELuk
// SIG // qQUMm+1o+mgulaAqPyprWEljHwlpblqYluSD9MCP80Yr
// SIG // 3vw70L01724lruWvJ+3Q3fMOr5kol5hNDj0L8giJ1h/D
// SIG // Mhji8MUtzluetEk5CsYKwsatruWy2dsViFFFWDgycSca
// SIG // f7H0J/jeLDogaZiyWYlobm+nt3TDQAUGpgEqKD6CPxNN
// SIG // ZgvAs0314Y9/HG8VfUWnduVAKmWjw11SYobDHWM2l4bf
// SIG // 2vP48hahmifhzaWX0O5dY0HjWwechz4GdwbRBrF1HxS+
// SIG // YWG18NzGGwS+30HHDiju3mUv7Jf2oVyW2ADWoUa9WfOX
// SIG // pQlLSBCZgB/QACnFsZulP0V3HjXG0qKin3p6IvpIlR+r
// SIG // +0cjgPWe+L9rt0uX4ut1eBrs6jeZeRhL/9azI2h15q/6
// SIG // /IvrC4DqaTuv/DDtBEyO3991bWORPdGdVk5Pv4BXIqF4
// SIG // ETIheu9BCrE/+6jMpF3BoYibV3FWTkhFwELJm3ZbCoBI
// SIG // a/15n8G9bW1qyVJzEw16UM0xghoMMIIaCAIBATCBlTB+
// SIG // MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3Rv
// SIG // bjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWlj
// SIG // cm9zb2Z0IENvcnBvcmF0aW9uMSgwJgYDVQQDEx9NaWNy
// SIG // b3NvZnQgQ29kZSBTaWduaW5nIFBDQSAyMDExAhMzAAAE
// SIG // hV6Z7A5ZL83XAAAAAASFMA0GCWCGSAFlAwQCAQUAoIGu
// SIG // MBkGCSqGSIb3DQEJAzEMBgorBgEEAYI3AgEEMBwGCisG
// SIG // AQQBgjcCAQsxDjAMBgorBgEEAYI3AgEVMC8GCSqGSIb3
// SIG // DQEJBDEiBCD0DnWrsryU9PZPc8gvUSDj2VDSVGZZ6Jrn
// SIG // 137Mrc/CBjBCBgorBgEEAYI3AgEMMTQwMqAUgBIATQBp
// SIG // AGMAcgBvAHMAbwBmAHShGoAYaHR0cDovL3d3dy5taWNy
// SIG // b3NvZnQuY29tMA0GCSqGSIb3DQEBAQUABIIBAA5mVRGW
// SIG // q4wYyLwgtdmtsdf20ZAAuYMqq5iEL3hSVx73mw0/y3f8
// SIG // TYJlqDr506zi9hT67JdZrME/KUVFILvUCrwUN38/WXwF
// SIG // XqZS3ohPds80Kp/m/xoE1uGt8VxUgxownlaGuxivHudb
// SIG // SVHe+Qfr3RAZnik5INcJ0e3pRYxaDLIltZ9L8FDJLkc1
// SIG // Oj+HOqf8W32BVlDuMrh3DOFw0Kfaeq0hVTm7S64PLwUZ
// SIG // V/mueheTbRwD6sBKZN59ju0mz8+I3WRhW8ToaleI9uOW
// SIG // MPLxdceSzKKOfgOmTGfUvB5qzghQQwHp/rT8SGkUns/1
// SIG // AhyU6Nay2BLXbyANcIPhBkDO7luhgheWMIIXkgYKKwYB
// SIG // BAGCNwMDATGCF4Iwghd+BgkqhkiG9w0BBwKgghdvMIIX
// SIG // awIBAzEPMA0GCWCGSAFlAwQCAQUAMIIBUQYLKoZIhvcN
// SIG // AQkQAQSgggFABIIBPDCCATgCAQEGCisGAQQBhFkKAwEw
// SIG // MTANBglghkgBZQMEAgEFAAQg28oCVR8uZCGseta1ypef
// SIG // 67IoEkG0vFw07gk788dNeTACBmhK4zba5RgSMjAyNTA4
// SIG // MTQxODMzMTcuOTZaMASAAgH0oIHRpIHOMIHLMQswCQYD
// SIG // VQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4G
// SIG // A1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0
// SIG // IENvcnBvcmF0aW9uMSUwIwYDVQQLExxNaWNyb3NvZnQg
// SIG // QW1lcmljYSBPcGVyYXRpb25zMScwJQYDVQQLEx5uU2hp
// SIG // ZWxkIFRTUyBFU046QTAwMC0wNUUwLUQ5NDcxJTAjBgNV
// SIG // BAMTHE1pY3Jvc29mdCBUaW1lLVN0YW1wIFNlcnZpY2Wg
// SIG // ghHtMIIHIDCCBQigAwIBAgITMwAAAgh4nVhdksfZUgAB
// SIG // AAACCDANBgkqhkiG9w0BAQsFADB8MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1T
// SIG // dGFtcCBQQ0EgMjAxMDAeFw0yNTAxMzAxOTQyNTNaFw0y
// SIG // NjA0MjIxOTQyNTNaMIHLMQswCQYDVQQGEwJVUzETMBEG
// SIG // A1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
// SIG // ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
// SIG // MSUwIwYDVQQLExxNaWNyb3NvZnQgQW1lcmljYSBPcGVy
// SIG // YXRpb25zMScwJQYDVQQLEx5uU2hpZWxkIFRTUyBFU046
// SIG // QTAwMC0wNUUwLUQ5NDcxJTAjBgNVBAMTHE1pY3Jvc29m
// SIG // dCBUaW1lLVN0YW1wIFNlcnZpY2UwggIiMA0GCSqGSIb3
// SIG // DQEBAQUAA4ICDwAwggIKAoICAQC1y3AI5lIz3Ip1nK5B
// SIG // MUUbGRsjSnCz/VGs33zvY0NeshsPgfld3/Z3/3dS8WKB
// SIG // LlDlosmXJOZlFSiNXUd6DTJxA9ik/ZbCdWJ78LKjbN3t
// SIG // FkX2c6RRpRMpA8sq/oBbRryP3c8Q/gxpJAKHHz8cuSn7
// SIG // ewfCLznNmxqliTk3Q5LHqz2PjeYKD/dbKMBT2TAAWAvu
// SIG // m4z/HXIJ6tFdGoNV4WURZswCSt6ROwaqQ1oAYGvEndH+
// SIG // DXZq1+bHsgvcPNCdTSIpWobQiJS/UKLiR02KNCqB4I9y
// SIG // ajFTSlnMIEMz/Ni538oGI64phcvNpUe2+qaKWHZ8d4T1
// SIG // KghvRmSSF4YF5DNEJbxaCUwsy7nULmsFnTaOjVOoTFWW
// SIG // fWXvBuOKkBcQKWGKvrki976j4x+5ezAP36fq3u6dHRJT
// SIG // LZAu4dEuOooU3+kMZr+RBYWjTHQCKV+yZ1ST0eGkbHXo
// SIG // A2lyyRDlNjBQcoeZIxWCZts/d3+nf1jiSLN6f6wdHaUz
// SIG // 0ADwOTQ/aEo1IC85eFePvyIKaxFJkGU2Mqa6Xzq3qCq5
// SIG // tokIHtjhogsrEgfDKTeFXTtdhl1IPtLcCfMcWOGGAXos
// SIG // VUU7G948F6W96424f2VHD8L3FoyAI9+r4zyIQUmqiESz
// SIG // uQWeWpTTjFYwCmgXaGOuSDV8cNOVQB6IPzPneZhVTjwx
// SIG // bAZlaQIDAQABo4IBSTCCAUUwHQYDVR0OBBYEFKMx4vfO
// SIG // qcUTgYOVB9f18/mhegFNMB8GA1UdIwQYMBaAFJ+nFV0A
// SIG // XmJdg/Tl0mWnG1M1GelyMF8GA1UdHwRYMFYwVKBSoFCG
// SIG // Tmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMv
// SIG // Y3JsL01pY3Jvc29mdCUyMFRpbWUtU3RhbXAlMjBQQ0El
// SIG // MjAyMDEwKDEpLmNybDBsBggrBgEFBQcBAQRgMF4wXAYI
// SIG // KwYBBQUHMAKGUGh0dHA6Ly93d3cubWljcm9zb2Z0LmNv
// SIG // bS9wa2lvcHMvY2VydHMvTWljcm9zb2Z0JTIwVGltZS1T
// SIG // dGFtcCUyMFBDQSUyMDIwMTAoMSkuY3J0MAwGA1UdEwEB
// SIG // /wQCMAAwFgYDVR0lAQH/BAwwCgYIKwYBBQUHAwgwDgYD
// SIG // VR0PAQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4ICAQBR
// SIG // szKJKwAfswqdaQPFiaYB/ZNAYWDa040XTcQsCaCua5ns
// SIG // G1IslYaSpH7miTLr6eQEqXczZoqeOa/xvDnMGifGNda0
// SIG // CHbQwtpnIhsutrKO2jhjEaGwlJgOMql21r7Ik6XnBza0
// SIG // e3hBOu4UBkMl/LEX+AURt7i7+RTNsGN0cXPwPSbTFE+9
// SIG // z7WagGbY9pwUo/NxkGJseqGCQ/9K2VMU74bw5e7+8IGU
// SIG // hM2xspJPqnSeHPhYmcB0WclOxcVIfj/ZuQvworPbTEEY
// SIG // DVCzSN37c0yChPMY7FJ+HGFBNJxwd5lKIr7GYfq8a0gO
// SIG // iC2ljGYlc4rt4cCed1XKg83f0l9aUVimWBYXtfNebhpf
// SIG // r6Lc3jD8NgsrDhzt0WgnIdnTZCi7jxjsIBilH99pY5/h
// SIG // 6bQcLKK/E6KCP9E1YN78fLaOXkXMyO6xLrvQZ+uCSi1h
// SIG // dTufFC7oSB/CU5RbfIVHXG0j1o2n1tne4eCbNfKqUPTE
// SIG // 31tNbWBR23Yiy0r3kQmHeYE1GLbL4pwknqaip1BRn6WI
// SIG // UMJtgncawEN33f8AYGZ4a3NnHopzGVV6neffGVag4Tdu
// SIG // y+oy1YF+shChoXdMqfhPWFpHe3uJGT4GJEiNs4+28a/w
// SIG // HUuF+aRaR0cN5P7XlOwU1360iUCJtQdvKQaNAwGI29KO
// SIG // wS3QGriR9F2jOGPUAlpeEzCCB3EwggVZoAMCAQICEzMA
// SIG // AAAVxedrngKbSZkAAAAAABUwDQYJKoZIhvcNAQELBQAw
// SIG // gYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
// SIG // dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
// SIG // aWNyb3NvZnQgQ29ycG9yYXRpb24xMjAwBgNVBAMTKU1p
// SIG // Y3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1dGhvcml0
// SIG // eSAyMDEwMB4XDTIxMDkzMDE4MjIyNVoXDTMwMDkzMDE4
// SIG // MzIyNVowfDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh
// SIG // c2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNV
// SIG // BAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UE
// SIG // AxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAw
// SIG // ggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDk
// SIG // 4aZM57RyIQt5osvXJHm9DtWC0/3unAcH0qlsTnXIyjVX
// SIG // 9gF/bErg4r25PhdgM/9cT8dm95VTcVrifkpa/rg2Z4VG
// SIG // Iwy1jRPPdzLAEBjoYH1qUoNEt6aORmsHFPPFdvWGUNzB
// SIG // RMhxXFExN6AKOG6N7dcP2CZTfDlhAnrEqv1yaa8dq6z2
// SIG // Nr41JmTamDu6GnszrYBbfowQHJ1S/rboYiXcag/PXfT+
// SIG // jlPP1uyFVk3v3byNpOORj7I5LFGc6XBpDco2LXCOMcg1
// SIG // KL3jtIckw+DJj361VI/c+gVVmG1oO5pGve2krnopN6zL
// SIG // 64NF50ZuyjLVwIYwXE8s4mKyzbnijYjklqwBSru+cakX
// SIG // W2dg3viSkR4dPf0gz3N9QZpGdc3EXzTdEonW/aUgfX78
// SIG // 2Z5F37ZyL9t9X4C626p+Nuw2TPYrbqgSUei/BQOj0XOm
// SIG // TTd0lBw0gg/wEPK3Rxjtp+iZfD9M269ewvPV2HM9Q07B
// SIG // MzlMjgK8QmguEOqEUUbi0b1qGFphAXPKZ6Je1yh2AuIz
// SIG // GHLXpyDwwvoSCtdjbwzJNmSLW6CmgyFdXzB0kZSU2LlQ
// SIG // +QuJYfM2BjUYhEfb3BvR/bLUHMVr9lxSUV0S2yW6r1AF
// SIG // emzFER1y7435UsSFF5PAPBXbGjfHCBUYP3irRbb1Hode
// SIG // 2o+eFnJpxq57t7c+auIurQIDAQABo4IB3TCCAdkwEgYJ
// SIG // KwYBBAGCNxUBBAUCAwEAATAjBgkrBgEEAYI3FQIEFgQU
// SIG // KqdS/mTEmr6CkTxGNSnPEP8vBO4wHQYDVR0OBBYEFJ+n
// SIG // FV0AXmJdg/Tl0mWnG1M1GelyMFwGA1UdIARVMFMwUQYM
// SIG // KwYBBAGCN0yDfQEBMEEwPwYIKwYBBQUHAgEWM2h0dHA6
// SIG // Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvRG9jcy9S
// SIG // ZXBvc2l0b3J5Lmh0bTATBgNVHSUEDDAKBggrBgEFBQcD
// SIG // CDAZBgkrBgEEAYI3FAIEDB4KAFMAdQBiAEMAQTALBgNV
// SIG // HQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAfBgNVHSME
// SIG // GDAWgBTV9lbLj+iiXGJo0T2UkFvXzpoYxDBWBgNVHR8E
// SIG // TzBNMEugSaBHhkVodHRwOi8vY3JsLm1pY3Jvc29mdC5j
// SIG // b20vcGtpL2NybC9wcm9kdWN0cy9NaWNSb29DZXJBdXRf
// SIG // MjAxMC0wNi0yMy5jcmwwWgYIKwYBBQUHAQEETjBMMEoG
// SIG // CCsGAQUFBzAChj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5j
// SIG // b20vcGtpL2NlcnRzL01pY1Jvb0NlckF1dF8yMDEwLTA2
// SIG // LTIzLmNydDANBgkqhkiG9w0BAQsFAAOCAgEAnVV9/Cqt
// SIG // 4SwfZwExJFvhnnJL/Klv6lwUtj5OR2R4sQaTlz0xM7U5
// SIG // 18JxNj/aZGx80HU5bbsPMeTCj/ts0aGUGCLu6WZnOlNN
// SIG // 3Zi6th542DYunKmCVgADsAW+iehp4LoJ7nvfam++Kctu
// SIG // 2D9IdQHZGN5tggz1bSNU5HhTdSRXud2f8449xvNo32X2
// SIG // pFaq95W2KFUn0CS9QKC/GbYSEhFdPSfgQJY4rPf5KYnD
// SIG // vBewVIVCs/wMnosZiefwC2qBwoEZQhlSdYo2wh3DYXMu
// SIG // LGt7bj8sCXgU6ZGyqVvfSaN0DLzskYDSPeZKPmY7T7uG
// SIG // +jIa2Zb0j/aRAfbOxnT99kxybxCrdTDFNLB62FD+Cljd
// SIG // QDzHVG2dY3RILLFORy3BFARxv2T5JL5zbcqOCb2zAVdJ
// SIG // VGTZc9d/HltEAY5aGZFrDZ+kKNxnGSgkujhLmm77IVRr
// SIG // akURR6nxt67I6IleT53S0Ex2tVdUCbFpAUR+fKFhbHP+
// SIG // CrvsQWY9af3LwUFJfn6Tvsv4O+S3Fb+0zj6lMVGEvL8C
// SIG // wYKiexcdFYmNcP7ntdAoGokLjzbaukz5m/8K6TT4JDVn
// SIG // K+ANuOaMmdbhIurwJ0I9JZTmdHRbatGePu1+oDEzfbzL
// SIG // 6Xu/OHBE0ZDxyKs6ijoIYn/ZcGNTTY3ugm2lBRDBcQZq
// SIG // ELQdVTNYs6FwZvKhggNQMIICOAIBATCB+aGB0aSBzjCB
// SIG // yzELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0
// SIG // b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1p
// SIG // Y3Jvc29mdCBDb3Jwb3JhdGlvbjElMCMGA1UECxMcTWlj
// SIG // cm9zb2Z0IEFtZXJpY2EgT3BlcmF0aW9uczEnMCUGA1UE
// SIG // CxMeblNoaWVsZCBUU1MgRVNOOkEwMDAtMDVFMC1EOTQ3
// SIG // MSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFtcCBT
// SIG // ZXJ2aWNloiMKAQEwBwYFKw4DAhoDFQCNkvu0NKcSjdYK
// SIG // yrhJZcsyXOUTNKCBgzCBgKR+MHwxCzAJBgNVBAYTAlVT
// SIG // MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
// SIG // ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9y
// SIG // YXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0
// SIG // YW1wIFBDQSAyMDEwMA0GCSqGSIb3DQEBCwUAAgUA7Ehq
// SIG // iDAiGA8yMDI1MDgxNDE0MDA0MFoYDzIwMjUwODE1MTQw
// SIG // MDQwWjB3MD0GCisGAQQBhFkKBAExLzAtMAoCBQDsSGqI
// SIG // AgEAMAoCAQACAgarAgH/MAcCAQACAhQOMAoCBQDsSbwI
// SIG // AgEAMDYGCisGAQQBhFkKBAIxKDAmMAwGCisGAQQBhFkK
// SIG // AwKgCjAIAgEAAgMHoSChCjAIAgEAAgMBhqAwDQYJKoZI
// SIG // hvcNAQELBQADggEBACdy73k9R6GvuzLRDEIlmyAVk/Tq
// SIG // dO1Av/RGwm8ViMDxJ0Lm0BIXjdlAy9TooL42+mWfjBeJ
// SIG // N/qgTG+bHAOBTTiaOBLkJRgPisVeLDd/+donHdthGabD
// SIG // go5oCo2xisHu19ScLeYXyWBu1gqAGZMvaUAm1FNiIw7+
// SIG // MmZ9QArshZRzA+Omq/Z0/zAPVl8rd5H1iTxVvI9MlmZR
// SIG // 4Xqn+KdSqVIKaan0hcyxFJ4iMzdIqBOSEKB7gBFSge9h
// SIG // 8dxYoKpALIEWhOlGShOrRfMzbBqrTgNbIav4gNNOC+eN
// SIG // S6IoY0W54OEq4/bcw1hy/GL9Lpz5aG+FgiJXA7djx1xZ
// SIG // 4mO+M/kxggQNMIIECQIBATCBkzB8MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1T
// SIG // dGFtcCBQQ0EgMjAxMAITMwAAAgh4nVhdksfZUgABAAAC
// SIG // CDANBglghkgBZQMEAgEFAKCCAUowGgYJKoZIhvcNAQkD
// SIG // MQ0GCyqGSIb3DQEJEAEEMC8GCSqGSIb3DQEJBDEiBCCu
// SIG // Ga1K+d/7bbivwSYLSgNX6DfjAGjusMwLwkhWheMX4TCB
// SIG // +gYLKoZIhvcNAQkQAi8xgeowgecwgeQwgb0EII//jm8J
// SIG // Ha2W1O9778t9+Ft2Z5NmKqttPk6Q+9RRpmepMIGYMIGA
// SIG // pH4wfDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hp
// SIG // bmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoT
// SIG // FU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMd
// SIG // TWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTACEzMA
// SIG // AAIIeJ1YXZLH2VIAAQAAAggwIgQgYYxmkoGfN10j9OUj
// SIG // 9pZUX6mhBeofpRblMTr2lsYkf5gwDQYJKoZIhvcNAQEL
// SIG // BQAEggIAT6Ts4P+5FbXh7RotGgClIbiqDhRb0MnMx7kD
// SIG // dAu+mnTvy6DaGgSFfNUqUqJXZAjkNp9J4v581B7IkE2i
// SIG // qTyhcLUbi6CgaBCTJ+DTPqc8E6Yg1xbBXWCW7QLbr4h0
// SIG // gyLlA52wT70azT/vnlEIYhMDYR+qAR8ILz/hkVZ9kNOB
// SIG // eCgJdr8nDcbku0XnLrJ8j14szHhDixTDFO27UHF5i/DR
// SIG // tyJ8YDGt6lxv1rZSk8TbQEf4XHoBNXCgvXSgSiZIRmgj
// SIG // 0HrrhRpY4tgOwu6LwE8aoI4J0gLs2fPU7Kd2FR+VbtaG
// SIG // hRYiPrwjEBQ+kqkIeJ/RUNqAWE8ayD+13qRv1GvZVP51
// SIG // B5jFtFcG5aaYQiZfdimSXM6VO7ZYOcWH21ue2kUhmNdM
// SIG // /FuRowpxmPp8e5C7fGXjdCoHk5EK/XQcl/IjeoDAOYEP
// SIG // rUr85T2jauU5t7OIErWP1VVPU9e4s3ne54PKS8b1IQ7y
// SIG // 2ojU9LCD3W/jWo/4Ffx3McQKJYQw2IgMYeUOI88CNojQ
// SIG // uJCbcbX8nNiL+b4Zy7Qjby2n+hA14sAwV+J0lqCXYlyE
// SIG // WMB7vhJXZ0uPvzm8czT013B0wD11KxpOL1YSXrj7L5o+
// SIG // K2KYXOwAGM6S4mtz1oz7ycVt8gr/RrkpQ1JPBRXlPBRd
// SIG // LgjvLBGqgLEXKFJyXo/TLs+moWXFWEM=
// SIG // End signature block
