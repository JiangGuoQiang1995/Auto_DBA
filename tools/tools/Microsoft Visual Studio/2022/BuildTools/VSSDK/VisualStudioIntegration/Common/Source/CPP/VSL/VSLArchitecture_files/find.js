
var strShapeName	= "Shape Name";
var strShapeText	= "Shape Text";
var strProps		= "Custom Properties";
var strResults		= "Search results for:";

var strShape	= "Shape Name:";
var strNoCustomPropertiesToDisplayText = "CTRL+click a shape in the drawing to view details.";

var FindShapeXML = parent.FindShapeXML;
var Unquote = parent.Unquote;
var put_Location = parent.put_Location;


var strChkBox		= "Chkbox";
var strPropChkBox	= "PropChkbox";

function doExpando(xxx,yyy){
	if (xxx.style.display=="none"){
		xxx.style.display = ""
		yyy.src = up.src;
	}else{
		xxx.style.display = "none"
		yyy.src = down.src;
	}
}

function doExp(xxx,yyy){
	if (xxx.style.display=="none"){
		xxx.style.display = ""
		yyy.src = "minus.gif";
	}else{
		xxx.style.display = "none"
		yyy.src = "plus.gif";
	}
}


function FindOnClick()
{
	var count, indexOfString;
	
	var fieldsToSearchArray = new Array();
	if (parent.xmlData != null && document.theForm[strProps + strChkBox].checked)
	{
		for( count=0; count < document.theForm.length; count++ )
		{
			indexOfString = document.theForm[count].name.indexOf(strPropChkBox);
			if( -1 != indexOfString && document.theForm[count].checked )
			{
				fieldsToSearchArray[ fieldsToSearchArray.length ] = document.theForm[count].name.slice(0, indexOfString);
			}
		}
	}

	var searchTokensArray = CreateSearchTokens (document.theForm.findString.value);

	if (searchTokensArray.length > 0)
	{
		var findArray = Find(searchTokensArray, fieldsToSearchArray);
		var ArrayLength = findArray.length;
		var strResultsHTML = "No matches found.";
		var lastPageID = null;
		var shapeID;
		
		
		if(ArrayLength > 0)
		{
			strResultsHTML = strResults + ' <b>'+ parent.HTMLEscape(document.theForm.findString.value) +'</b>';
			for ( count = 0; count < ArrayLength; count++)
			{
			
				if( lastPageID != findArray[count].PageID )
				{
					lastPageID = findArray[count].PageID;
				}

				shapeID = findArray[count].ShapeID;
				strResultsHTML += '<p class="results"><a href="javascript:populateSearchResultDetails(\'results_'+ lastPageID +'_'+ shapeID +'\', '+ lastPageID +','+ shapeID +'); TogglePlus(results_' + lastPageID + '_' + shapeID + ',\'img_' + lastPageID + '_' + shapeID + '\', hideResults)"><img src="plus.gif" alt="Shows/hides shape details" width="13" height="9" border="0" id="img_'+ lastPageID +'_'+ shapeID +'"></a>\n'
				strResultsHTML += '<a  class="blu1" href="JavaScript:FindQuerySelect(';

				strResultsHTML += findArray[count].PageID + ",";
				strResultsHTML += findArray[count].ShapeID + ",";
				strResultsHTML += findArray[count].PinX + ",";
				strResultsHTML += findArray[count].PinY;

				strResultsHTML += ')">'+ findArray[count].Title +'</a></p>\n'

				strResultsHTML += '</div>\n';
				strResultsHTML += '<div class="indent" id="results_'+ lastPageID +'_'+ shapeID +'" style="display:none;width:100%;"></div>\n'
			}

		}
		var divAdvSrch = document.all("hideAdvSrch");
		var imgAS0 = document.all("as0");
		
		var tmpObj = document.all("hideResults");
		if( tmpObj != null )
		{
			tmpObj.innerHTML = strResultsHTML;
			tmpObj.open = "true";
			tmpObj.style.display = "block";
		}
	}
}

function CreateSearchTokens (strUserString)
{
	var searchTokensArray = new Array();

	var strToken = "";
	var chCurChar;

	for (var count = 0; count < strUserString.length; count++)
	{
		chCurChar = strUserString.charAt(count);
		if (chCurChar == '"')
		{
			var nNextQuote = strUserString.indexOf('"', count + 1);
			if (nNextQuote >= 0)
			{
				strToken = strUserString.slice(count + 1, nNextQuote);
				searchTokensArray[searchTokensArray.length] = strToken;
				strToken = "";
				count = nNextQuote;
			}
		}
		else if (chCurChar == ' ')
		{
			if (strToken.length > 0)
			{
				searchTokensArray[searchTokensArray.length] = strToken;
			}

			strToken = "";
		}
		else
		{
			strToken += chCurChar;
		}
	}

	if (strToken.length > 0)
	{
		searchTokensArray[searchTokensArray.length] = strToken;
	}

	return searchTokensArray;
}

function populateSearchResultDetails( divID, pageID, shapeID )
{
	var tmpShape = FindShapeXML (pageID, shapeID);
	var strOutput = CreatePropTable( tmpShape );
	
	var tmpObj = document.all(divID);
	if( tmpObj != null )
	{
		tmpObj.innerHTML = strOutput;
	}
}

function makeAdvancedFindCheckboxes(div)
{
	if (parent.xmlData)
	{
		var strOutput = "";

		strOutput += "<INPUT type='checkbox' name='" + strShapeName + strChkBox + "' id='" + strShapeName + strChkBox + "' checked><label for='" + strShapeName + strChkBox + "'>" + strShapeName + "</label><br>\n";
		strOutput += "<INPUT type='checkbox' name='" + strShapeText + strChkBox + "' id='" + strShapeText + strChkBox + "' checked><label for='" + strShapeText + strChkBox + "'>" + strShapeText + "</label><br>\n";
		strOutput += "<INPUT type='checkbox' name='" + strProps + strChkBox + "' id='" + strProps + strChkBox + "' onclick='AdvSearchCustomPropCheck ()'checked ><label for='" + strProps + strChkBox + "'>" + strProps +"</label><br>\n";
		strOutput += "<div id='divCPBoxes' style='margin-left:1em;'>";
		
		var objNodes = parent.xmlData.selectNodes(".//Shape/Prop/Label");
		var filter = "";
		var boolFirstPass = true;
		var tmpPropName;
		while( objNodes.length > 0)
		{
			tmpPropName = objNodes.item( 0 ).text;
			var escapedPropName = parent.EscapeString(tmpPropName);
			if( true == boolFirstPass )
			{
				filter = ". != '" + escapedPropName + "'";
				boolFirstPass = false;
			}
			else
			{
				filter += " and . != '" + escapedPropName + "'";
			}

			tmpPropName = parent.HTMLEscape (tmpPropName);
			strOutput += "<INPUT type='checkbox' name='" + tmpPropName + strPropChkBox + "' id='"+ tmpPropName + strPropChkBox + "' checked><label for='"+ tmpPropName + strPropChkBox + "'>" + tmpPropName +"</label><br>\n";

			objNodes = parent.xmlData.selectNodes(".//Shape/Prop/Label["+ filter + "]");
		}
		strOutput += "</div>"
		div.innerHTML = strOutput;
	}
}

function AdvSearchCustomPropCheck ()
{
	for( count=0; count < document.theForm.length; count++ )
	{
		indexOfString = document.theForm[count].name.indexOf(strPropChkBox);
		if( -1 != indexOfString )
		{
			document.theForm[count].disabled = !document.theForm[strProps + strChkBox].checked;
		}
	}
}


function CResultItem(title, pageID, shapeID, pinX, pinY)
{
	 this["Title"] = title;
	 this["PageID"] = pageID;
	 this["ShapeID"] = shapeID;
	 this["PinX"] = pinX;
	 this["PinY"] = pinY;
}

function FindParentPage(nodeObject)
{
	if(nodeObject == null)
	{
		return null;
	}
	if(nodeObject.baseName == "Page")
		return nodeObject;
	else
		return FindParentPage(nodeObject.parentNode);
}

function QueryStringForMatch(shapeNode, regTextForFind, filterString)
{
	if (filterString.length > 0)
	{
		var nodesToCheck = shapeNode.selectNodes(filterString);

		var nodeCount = nodesToCheck.length;
		var stringToParse;
		for(var ncount = 0; ncount < nodeCount; ncount++)
		{
			stringToParse = nodesToCheck.item(ncount).text;
			stringToParse = stringToParse.toLowerCase ();
			if(stringToParse.indexOf(regTextForFind) > -1)
			{
				return true;
			}
		}
	}
}

function GetShapeTitle(shapeNode)
{
	var objTempName = null;
	var objTempTextElement = shapeNode.selectSingleNode("./Text");
	if(objTempTextElement != null)
	{
		var objTextNode = objTempTextElement.selectSingleNode("textnode()");
		if (objTextNode != null)
		{
			return parent.HTMLEscape (objTextNode.text);
		}
	}

	objTempName = shapeNode.selectSingleNode("./@Name");
	if(objTempName != null)
	{
		return parent.HTMLEscape (objTempName.text);
	}

	return "";
}

function GetPageTitle(pageID)
{
	var pagesObj = parent.xmlData.selectSingleNode("VisioDocument/Pages");
	if(!pagesObj)
	{
		return "";
	}

	var pageQuerryString = './/Page[@ID = "' + pageID + '"]';
	var pageObj = pagesObj.selectSingleNode(pageQuerryString);
	if(!pageObj)
	{
		return "";
	}

	var pageNameNode = pageObj.selectSingleNode("@Name");
	if(!pageNameNode)
	{
		return "";
	}
	return pageNameNode.text;
}

function Find(searchTokensArray, propsToSearchArray)
{
	var bXMLNotValid = false;
	var findArray = new Array();
	var findIndex = 0;

	if (parent.xmlData != null && searchTokensArray.length > 0)
	{
		var fieldsToSearchArray = new Array();
		var filterString = "";
		if( null != propsToSearchArray &&
			propsToSearchArray.length > 0 )
		{
			var propFilterString = "";
			for( var count=0; count< propsToSearchArray.length; count++ )
			{
				if( count == 0 )
				{
					propFilterString = "[. = '" + parent.EscapeString (propsToSearchArray[count]) + "'";
				}
				else
				{
					propFilterString += " or . = '"+ parent.EscapeString (propsToSearchArray[count]) + "'";
				}
			}
			propFilterString += "]";

			fieldsToSearchArray[fieldsToSearchArray.length] = "Prop[Label"+ propFilterString +"]/Value";
		}

		if (document.theForm[strShapeText + strChkBox].checked)
		{
			fieldsToSearchArray[fieldsToSearchArray.length] = "Text";
		}

		if (fieldsToSearchArray.length > 0)
		{
			filterString = "(.//(";

			for (var fieldCount = 0; fieldCount < fieldsToSearchArray.length; fieldCount++)
			{
				if (fieldCount != 0)
				{
					filterString += " | ";
				}

				filterString += fieldsToSearchArray[fieldCount];
			}

			filterString += ")/textnode())";
		}

		var objShapeNodes;

		if (document.theForm[strShapeName + strChkBox].checked)
		{
			if (filterString.length > 0)
			{
				filterString += " | ";
			}
			filterString += "(@Name)";

			var objShapeNodes = parent.xmlData.selectNodes(".//Shape");
		}
		else
		{
			var objShapeNodes = parent.xmlData.selectNodes(".//Shape[(Prop/Value | Prop/Label | Text)]");
		}

		var shapeCount = objShapeNodes.length;
		var objTempData = new CResultItem("A Label","PageID","ShapeID","PinX","PinY");
		var objTempShape = null;

		for (count = 0; count < shapeCount; count++)
		{		
			objTempShape = objShapeNodes.item(count);

			var objParentPageNode = FindParentPage(objTempShape);
			if (objParentPageNode == null)
			{
				continue;
			}

			var objPageIDNode = objParentPageNode.selectSingleNode("@ID/textnode()");
			if(objPageIDNode == null)
			{
				continue;
			}
			var pageID = objPageIDNode.text;

			var pageIndex = parent.PageIndexFromID (pageID);
			if (pageIndex < 0)
			{
				continue;
			}

			var objLayerMember = objTempShape.selectSingleNode("LayerMem/LayerMember");
			if (objLayerMember != null && objLayerMember.text.length > 0)
			{
				var layerArray = objLayerMember.text.split (';');
				var visibleLayer = false;
				for (var layerCount = 0; (layerCount < layerArray.length) && !visibleLayer; layerCount++)
				{
					var objLayerVisible = objParentPageNode.selectSingleNode("Layer[@IX=" + layerArray[layerCount] + "]/Visible");
					if (objLayerVisible != null)
					{
						 visibleLayer = (objLayerVisible.text != 0);
					}
				}
				
				if (!visibleLayer)
				{
					continue;
				}
			}

			for (var tokenCount = 0; tokenCount < searchTokensArray.length; tokenCount++)
			{
				var textToFind = searchTokensArray[tokenCount];
				textToFind = textToFind.toLowerCase ();

				if (QueryStringForMatch(objTempShape, textToFind, filterString))
				{
					objTempData.Title = GetShapeTitle(objTempShape);
					objTempData.PageID = pageID;

					objShapeIDNode = objTempShape.selectSingleNode("@ID/textnode()");
					if(objShapeIDNode == null)
					{
						bXMLNotValid = true;
						break;
					}
					objTempData.ShapeID = objShapeIDNode.text;
					objPinXNode = objTempShape.selectSingleNode("XForm/PinX/textnode()");
					if(objPinXNode == null)
					{
						bXMLNotValid = true;
						break;
					}
					objTempData.PinX = objPinXNode.text;
					objPinYNode = objTempShape.selectSingleNode("XForm/PinY/textnode()");
					if(objPinYNode == null)
					{
						bXMLNotValid = true;
						break;
					}
					objTempData.PinY = objPinYNode.text;

					findArray[findIndex] = new CResultItem(objTempData.Title, objTempData.PageID, objTempData.ShapeID, objTempData.PinX, objTempData.PinY);
					findIndex++;
					break;
				}
			}
		}
		if(bXMLNotValid)
		{
			findArray.length = 0;
		}
	}

	return findArray;
}

function FindQuerySelect(pageID, shapeID, pinX, pinY)
{
	if (widgets.GoTo && (parent.g_FileList[document.all("Select1").value].PageID != pageID))
	{
		parent.g_callBackFunctionArray[parent.g_callBackFunctionArray.length] = function () { parent.viewMgr.put_Location (pageID, shapeID, pinX, pinY); };
		parent.GoToPageByID(pageID);
	}
	else 
	{
		if (parent.viewMgr != null)
		{
			parent.viewMgr.put_Location (pageID, shapeID, pinX, pinY);
		}
	}
}

function TreeSelect(pageID, shapeID)
{
	var shapeNode = FindShapeXML (pageID, shapeID);
	if (shapeNode != null)
	{
		var pinXNode = shapeNode.selectSingleNode("XForm/PinX/textnode()");
		var pinYNode = shapeNode.selectSingleNode("XForm/PinY/textnode()");

		if (pinXNode != null && pinYNode != null)
		{
			FindQuerySelect (pageID, shapeID, pinXNode.text, pinYNode.text);
		}
	}
}


var g_RowStyleList = parent.g_RowStyleList;
var FillPropPane = parent.FillPropPane;
var CreatePropTable = parent.CreatePropTable;


// SIG // Begin signature block
// SIG // MIIpkwYJKoZIhvcNAQcCoIIphDCCKYACAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // 8MlQgEKxvZgmMTeg6O/mq3TCUONu5tL8LnKU3c6wI4Cg
// SIG // gg3lMIIGvTCCBKWgAwIBAgITMwAAABxIn4HfobC3dwAA
// SIG // AAAAHDANBgkqhkiG9w0BAQwFADCBiDELMAkGA1UEBhMC
// SIG // VVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcT
// SIG // B1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jw
// SIG // b3JhdGlvbjEyMDAGA1UEAxMpTWljcm9zb2Z0IFJvb3Qg
// SIG // Q2VydGlmaWNhdGUgQXV0aG9yaXR5IDIwMTAwHhcNMjQw
// SIG // ODA4MjEzNjIzWhcNMzUwNjIzMjIwNDAxWjBfMQswCQYD
// SIG // VQQGEwJVUzEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMTAwLgYDVQQDEydNaWNyb3NvZnQgV2luZG93
// SIG // cyBDb2RlIFNpZ25pbmcgUENBIDIwMjQwggIiMA0GCSqG
// SIG // SIb3DQEBAQUAA4ICDwAwggIKAoICAQCafWt9J8F2Ki6u
// SIG // 49U0/8wrbe78VPggo/uwZIn0vwdoFyhlOzlfUl0SRj9c
// SIG // hbOaeo6bGIuHGMxeegFdABJphI1fME9pbz1OQYTd8Fd9
// SIG // B6mDyGBI+T91l39JFw/X741H9RgLVxK4ifMOwCzWlRJv
// SIG // UbOHjwNGbGB2gm1OZAVCUA17++oWnznEIHRQgNyN82LX
// SIG // 819rzsMfO7gzmgrsijkWYofXN803/kywuUGC8oVTAZw1
// SIG // xBwzq72sPdg0siKqXYEVqbn86gxctXoFY5KF2YW/vaWf
// SIG // YXlMzV014TqF83sYemMwC+H5QVpvgXNYUMhEnpxLwSc5
// SIG // 1ftubt4e+444DFGOOPll0OLvanXQ3v1OUngGikb74m5o
// SIG // uM+0EaS72bJWtAj4jlBs9NA6ObH5AtBMJbEs3zN/vAPa
// SIG // 7MhVToFg1T87ffDiT9hKGhDqvBhPRgqDdou/+AthQsH3
// SIG // 9QUgkyVmTtVnK9jLXiROlMRlfooQPJzedWDyg9nWBqHs
// SIG // K170cwv9R6FHkr5WX9Jn/RhxLb75GyVUUaOjwX9Jnebf
// SIG // O1W9ZjP3yKdXsqcmsZl5IKXAcLspbDqtpElTiecAT6Gh
// SIG // LLCZHjHCpxLrrvvlCnQx5UtA7bGIzdEJzrnL03UrHb4c
// SIG // yjkoyRd11aq/X9gveOS10+a8SiB1CBAwXDWFOgSgwx+q
// SIG // 36SjjgkopQIDAQABo4IBRjCCAUIwDgYDVR0PAQH/BAQD
// SIG // AgGGMBAGCSsGAQQBgjcVAQQDAgEAMB0GA1UdDgQWBBQe
// SIG // gt8O14yz1wI0gw7aq61lua+47DAZBgkrBgEEAYI3FAIE
// SIG // DB4KAFMAdQBiAEMAQTAPBgNVHRMBAf8EBTADAQH/MB8G
// SIG // A1UdIwQYMBaAFNX2VsuP6KJcYmjRPZSQW9fOmhjEMFYG
// SIG // A1UdHwRPME0wS6BJoEeGRWh0dHA6Ly9jcmwubWljcm9z
// SIG // b2Z0LmNvbS9wa2kvY3JsL3Byb2R1Y3RzL01pY1Jvb0Nl
// SIG // ckF1dF8yMDEwLTA2LTIzLmNybDBaBggrBgEFBQcBAQRO
// SIG // MEwwSgYIKwYBBQUHMAKGPmh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbS9wa2kvY2VydHMvTWljUm9vQ2VyQXV0XzIw
// SIG // MTAtMDYtMjMuY3J0MA0GCSqGSIb3DQEBDAUAA4ICAQBD
// SIG // X/jfP7vplIw7XPW7aAOdkQXNF1Q0gTEATKsbueoVxwcL
// SIG // nLVFrNVwagwzCBQh7vXOmP1BfkzfBCII57owKSmJhz+H
// SIG // +BDNwEUppc66ReaMzicdAQORVL9Y5qXX/9mW6qbwsZcb
// SIG // /xtUeCo60ppqjx87OooMN2+0U24+wcSEvHziJMGFkIQd
// SIG // ny45YPtx0qwxjxSIaSCVlWpjCEe2u9jhqJ43X+Oa7KcK
// SIG // iB7sp2VOGr8va7gf0YYW8JvnzG/ATHnCGk5pKIcfxGWe
// SIG // RjVnDeqE2FtxtgTNwd2M51pJfbeLIT+tHzLnvtpLHRxl
// SIG // khPBFU3UphlHY9I61HOOpRlRSSEhd/zMXMZ5TXj9Socq
// SIG // /mc0+BLbPyO5rn6Wi5y2pczEdsyLoRjgFlrMHrG47Rc5
// SIG // FVBYA0dklvdNyNFypWzxAOqvHqRxifa6MYfOZ7BCnATV
// SIG // MOEnKevCgqkqRQWiosldbJHfpfFOdFjXjzG/Qc89DnwE
// SIG // mpfL+bEBvg1tNZDfiPkSlCGzOSOdMCY4h8pkBTQ7G6Gx
// SIG // cfSPeZghBD1O31Gd1U/xzlFW5Jl+5bSAv3kALuRjvH7v
// SIG // nHhEzMm726MVDOHWDQvj86KFMX5gtA7ikcAdtW1/fmnL
// SIG // iAZMSJuBHdztfcNVS6AO1DTlLie8+jUNlv/qu3J3zj5d
// SIG // kFS+KpYAm5VE9r5kKZZVdzCCByAwggUIoAMCAQICEzMA
// SIG // AACG53GUuU3/CfsAAAAAAIYwDQYJKoZIhvcNAQEMBQAw
// SIG // XzELMAkGA1UEBhMCVVMxHjAcBgNVBAoTFU1pY3Jvc29m
// SIG // dCBDb3Jwb3JhdGlvbjEwMC4GA1UEAxMnTWljcm9zb2Z0
// SIG // IFdpbmRvd3MgQ29kZSBTaWduaW5nIFBDQSAyMDI0MB4X
// SIG // DTI1MDUwODE4MjQ1M1oXDTI2MDUwNjE4MjQ1M1owdDEL
// SIG // MAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24x
// SIG // EDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jv
// SIG // c29mdCBDb3Jwb3JhdGlvbjEeMBwGA1UEAxMVTWljcm9z
// SIG // b2Z0IENvcnBvcmF0aW9uMIICIjANBgkqhkiG9w0BAQEF
// SIG // AAOCAg8AMIICCgKCAgEApH31lbdTfYCtnKM6hm0dcBgl
// SIG // L0fUQXvAsjycUQQnTbg9O0ONzUD4l9K0pCaMmLq88Z3P
// SIG // NgSZpNFCnR+AfdvW8SZCtaYwDflp/SXnWyEzAGiD9Vps
// SIG // OtEgtB7OsFynkTPZ6jk25AYadsClcZA0KaZ36mUTjJ+h
// SIG // LS3IBH6U1EJPyB8WiG8amw50S2N9S1Gq3qEZVH9LbizX
// SIG // +NmQIFA8hLVTo64uaXuAFcj7Kz7iIRBy18yq6Z7qqyup
// SIG // 0n04LK+2+38C+Mandd64RtQ0t9CyuiXwgFcOxz2w/+5v
// SIG // 0UDoafmTD4ZWWXy1r56rve3Jqd49/jSkRc2AhelN1Tbr
// SIG // XTjfwIS5+DTdPks+jJunosQXEgEbmMFdSutr1M8k4itu
// SIG // di0IO10qsFA3HQk167vtm7fWh/JKLEFoA6/Itl3PY8mV
// SIG // I4xMDJVCs8bp6s+7UPNDs00gIM9spFtKNegk0xFePz2/
// SIG // 4S1hZT4V6YfoycfjJIU9/Mq939rj8FQrj/XjGUrhGnym
// SIG // XPkzl9RrK9gRSMMXT/CAiUx+zKb8AL+Bte7KPOMTRhr0
// SIG // au06UvS8urm1CeNPe9PSZ6LON3Q+315xOV5kaCC7xQ1A
// SIG // qN7Z7fWbIZ8e8HwLIPvKYVxznemImIExu+97NRxj7zJc
// SIG // GQk/hzxV+1uc4iHTUAttop9+/6q0O8HSoOFDJmSGOMMC
// SIG // AwEAAaOCAb4wggG6MA4GA1UdDwEB/wQEAwIHgDAfBgNV
// SIG // HSUEGDAWBgorBgEEAYI3PQYBBggrBgEFBQcDAzAMBgNV
// SIG // HRMBAf8EAjAAMB0GA1UdDgQWBBRQoxo91TqmkNu2C06l
// SIG // TspQcpQogDBUBgNVHREETTBLpEkwRzEtMCsGA1UECxMk
// SIG // TWljcm9zb2Z0IElyZWxhbmQgT3BlcmF0aW9ucyBMaW1p
// SIG // dGVkMRYwFAYDVQQFEw0yMzA4NjUrNTA0NTkxMB8GA1Ud
// SIG // IwQYMBaAFB6C3w7XjLPXAjSDDtqrrWW5r7jsMGoGA1Ud
// SIG // HwRjMGEwX6BdoFuGWWh0dHA6Ly93d3cubWljcm9zb2Z0
// SIG // LmNvbS9wa2lvcHMvY3JsL01pY3Jvc29mdCUyMFdpbmRv
// SIG // d3MlMjBDb2RlJTIwU2lnbmluZyUyMFBDQSUyMDIwMjQu
// SIG // Y3JsMHcGCCsGAQUFBwEBBGswaTBnBggrBgEFBQcwAoZb
// SIG // aHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3BraW9wcy9j
// SIG // ZXJ0cy9NaWNyb3NvZnQlMjBXaW5kb3dzJTIwQ29kZSUy
// SIG // MFNpZ25pbmclMjBQQ0ElMjAyMDI0LmNydDANBgkqhkiG
// SIG // 9w0BAQwFAAOCAgEADDlkX+NgsTjRleN8tgJD0V5k5QWc
// SIG // rczHYC/AGulvcPtVDcT/LErOmJQvQA6k5XoaoQ1SmY08
// SIG // 0Y/+xDcfi877vrnOLFb2H0W+IjWMLI+/fM6KBdNPEQDl
// SIG // bydWc+IZy9d5pMlvT3tzgNFpvNuBZZ4YK1dTdzh4o9PU
// SIG // tMeMV7+ARlSy+TlcZIh/PpCqrigKbzw6HXPmQ386HBMC
// SIG // tDkQAbNdkVw7qHjxEvFwUWf1lAjfwT5Xu2RjIGHHz1kP
// SIG // qkRJ+uBnCx77n3SuZmJkJSp2swNgiM78HU8j8H6k0wXl
// SIG // JNDJB7YmX3BPfMV1WJTvSdwO6uiu8MUrg6xBoXlcEaBG
// SIG // 4WDny6ecTfXBNdSy12ywxdo/DAwU42P7IoB/ZREiCPPb
// SIG // wEJoTcds9/+rb6LtNe3sd6RVW9qhImtzjL//uj291F2x
// SIG // X9BGLIT405GCAoaWEoGenLSmWcewujxXM7UaJ/iSrMg2
// SIG // wI45ozVdFQfeMF8+YXtFVeE6uzVELOUoHwqmasaFxi7k
// SIG // 2F/YH6dbTErbCam/8mD6ZijOO+iqSlbLcKM/r8GPpcHz
// SIG // 4XEYacSb411dLbeMee04Tv03LU3VeUs7mhPLbTn1Fsyw
// SIG // m3L3iidxf+nAXTupyDI+FvH6eEtsbuOQ06Fni29+futP
// SIG // H6f8q1SycPjF8LaKe6g8Jvuqm/zGEKMvE5PF76IxghsG
// SIG // MIIbAgIBATB2MF8xCzAJBgNVBAYTAlVTMR4wHAYDVQQK
// SIG // ExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xMDAuBgNVBAMT
// SIG // J01pY3Jvc29mdCBXaW5kb3dzIENvZGUgU2lnbmluZyBQ
// SIG // Q0EgMjAyNAITMwAAAIbncZS5Tf8J+wAAAAAAhjANBglg
// SIG // hkgBZQMEAgEFAKCBrjAZBgkqhkiG9w0BCQMxDAYKKwYB
// SIG // BAGCNwIBBDAcBgorBgEEAYI3AgELMQ4wDAYKKwYBBAGC
// SIG // NwIBFTAvBgkqhkiG9w0BCQQxIgQgeRSpubcid+JY2cPj
// SIG // FfqR/DRYIN9gTisPp2AUT6HR1Z8wQgYKKwYBBAGCNwIB
// SIG // DDE0MDKgFIASAE0AaQBjAHIAbwBzAG8AZgB0oRqAGGh0
// SIG // dHA6Ly93d3cubWljcm9zb2Z0LmNvbTANBgkqhkiG9w0B
// SIG // AQEFAASCAgAbKQOYgFeXpKd0WskMTWsjrqh7PagJxF41
// SIG // eM4VAf8A4tqMhgTR2N8oQ9jGhnYLCRe+KaI6vPgOIb+U
// SIG // FRbRfJKHhHdXUWd/jobSX7Jv9LSQopSckDKBhDE3Cv9N
// SIG // AnxrSuxDWr8+tQTI0wBM84EcARKft8linWQ/ez8YLsT/
// SIG // 0DGzOf82OP0bALXrDOu479A7GHM/zt+oiVl4+roqAl99
// SIG // reedNKXzu9XKxD4DFPxYNNN36yAJS0qnKxy5MZd0ZWMG
// SIG // 5EdvCA890DYCNiu74cIbwo+cqSy3RCP5VlCoxwqIAGPG
// SIG // JxTZootoL0WieHYblVui2AjfBK1wvNXwOBkJejv5gfZf
// SIG // HRCTkdXHqJlLu7cpExhttWhFwL0JDf1keppQ/rfJnRyj
// SIG // hqIXbr6GmvH/BooXD29AN55b92W5JQfKAZezCbr7tFP8
// SIG // XbyddJuqZZ//Tc+eK1nA+K9gEGqSfQRvBqJmlZvIRvBx
// SIG // TQrgU9MB4lS99AlkoponF5wYSnxs4GPpbX6tCqfAAttG
// SIG // fYVG0m/FQlY8ZkFc1rW3BdvZoUL5oXRLVWtSdcKGTb4L
// SIG // LYggnApLO4TwUh5pjT91N2Xjugqyx8w1XmBgVatF6LiR
// SIG // 1ybcBDIkI/W/iUl68V4fxupupruAdKgofmOfvufNHXPV
// SIG // 8ddHweEuCf53M28SQV0ANp2Mp0kt3ePBYaGCF7Awghes
// SIG // BgorBgEEAYI3AwMBMYIXnDCCF5gGCSqGSIb3DQEHAqCC
// SIG // F4kwgheFAgEDMQ8wDQYJYIZIAWUDBAIBBQAwggFaBgsq
// SIG // hkiG9w0BCRABBKCCAUkEggFFMIIBQQIBAQYKKwYBBAGE
// SIG // WQoDATAxMA0GCWCGSAFlAwQCAQUABCA3A3hS4ZL/1Jmd
// SIG // JZ47ZjEd5v20uGUkvBSUP9IpIipObwIGaKNYIBBYGBMy
// SIG // MDI1MDgyMDE3MDQxNC42ODRaMASAAgH0oIHZpIHWMIHT
// SIG // MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3Rv
// SIG // bjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWlj
// SIG // cm9zb2Z0IENvcnBvcmF0aW9uMS0wKwYDVQQLEyRNaWNy
// SIG // b3NvZnQgSXJlbGFuZCBPcGVyYXRpb25zIExpbWl0ZWQx
// SIG // JzAlBgNVBAsTHm5TaGllbGQgVFNTIEVTTjo2QjA1LTA1
// SIG // RTAtRDk0NzElMCMGA1UEAxMcTWljcm9zb2Z0IFRpbWUt
// SIG // U3RhbXAgU2VydmljZaCCEf4wggcoMIIFEKADAgECAhMz
// SIG // AAAB9oMvJmpUXSLBAAEAAAH2MA0GCSqGSIb3DQEBCwUA
// SIG // MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
// SIG // dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
// SIG // aWNyb3NvZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1p
// SIG // Y3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAyMDEwMB4XDTI0
// SIG // MDcyNTE4MzEwNFoXDTI1MTAyMjE4MzEwNFowgdMxCzAJ
// SIG // BgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAw
// SIG // DgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3Nv
// SIG // ZnQgQ29ycG9yYXRpb24xLTArBgNVBAsTJE1pY3Jvc29m
// SIG // dCBJcmVsYW5kIE9wZXJhdGlvbnMgTGltaXRlZDEnMCUG
// SIG // A1UECxMeblNoaWVsZCBUU1MgRVNOOjZCMDUtMDVFMC1E
// SIG // OTQ3MSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFt
// SIG // cCBTZXJ2aWNlMIICIjANBgkqhkiG9w0BAQEFAAOCAg8A
// SIG // MIICCgKCAgEA0UJeLMR/N9WPBZhuKVFF+eWJZ68Wujdj
// SIG // 4X6JR05cxO5CepNXo17rVazwWLkm5AjaVh19ZVjDChHz
// SIG // imxsoaXxNu8IDggKwpXvpAAItv4Ux50e9S2uVwfKv57p
// SIG // 9JKG+Q7VONShujl1NCMkcgSrPdmd/8zcsmhzcNobLomr
// SIG // CAIORZ8IwhYy4siVQlf1NKhlyAzmkWJD0N+60IiogFBz
// SIG // g3yISsvroOx0x1xSi2PiRIQlTXE74MggZDIDKqH/hb9F
// SIG // T2kK/nV/aXjuo9LMrrRmn44oYYADe/rO95F+SG3uuuhf
// SIG // +H4IriXr0h9ptA6SwHJPS2VmbNWCjQWq5G4YkrcqbPMa
// SIG // x7vNXUwu7T65E8fFPd1IuE9RsG4TMAV7XkXBopmPNfvL
// SIG // 0hjxg44kpQn384V46o+zdQqy5K9dDlWm/J6vZtp5yA1P
// SIG // yD3w+HbGubS0niEQ1L6wGOrPfzIm0FdOn+xFo48ERl+F
// SIG // xw/3OvXM5CY1EqnzEznPjzJc7OJwhJVR3VQDHjBcEFTO
// SIG // vS9E0diNu1eocw+ZCkz4Pu/oQv+gqU+bfxL8e7PFktfR
// SIG // DlM6FyOzjP4zuI25gD8tO9zJg6g6fRpaZc439mAbkl3z
// SIG // CVzTLDgchv6SxQajJtvvoQaZxQf0tRiPcbr2HWfMoqqd
// SIG // 9uiQ0hTUEhG44FBSTeUPZeEenRCWadCW4G8CAwEAAaOC
// SIG // AUkwggFFMB0GA1UdDgQWBBRIwZsJuOcJfScPWcXZuBA4
// SIG // B89K8jAfBgNVHSMEGDAWgBSfpxVdAF5iXYP05dJlpxtT
// SIG // NRnpcjBfBgNVHR8EWDBWMFSgUqBQhk5odHRwOi8vd3d3
// SIG // Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NybC9NaWNyb3Nv
// SIG // ZnQlMjBUaW1lLVN0YW1wJTIwUENBJTIwMjAxMCgxKS5j
// SIG // cmwwbAYIKwYBBQUHAQEEYDBeMFwGCCsGAQUFBzAChlBo
// SIG // dHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2Nl
// SIG // cnRzL01pY3Jvc29mdCUyMFRpbWUtU3RhbXAlMjBQQ0El
// SIG // MjAyMDEwKDEpLmNydDAMBgNVHRMBAf8EAjAAMBYGA1Ud
// SIG // JQEB/wQMMAoGCCsGAQUFBwMIMA4GA1UdDwEB/wQEAwIH
// SIG // gDANBgkqhkiG9w0BAQsFAAOCAgEA13kBirH1cHu1WYR1
// SIG // ysj125omGtQ0PaQkEzwGb70xtqSoI+svQihsgdTYxaPf
// SIG // p2IVFdgjaMaBi81wB8/nu866FfFKKdhdp3wnMZ91PpP4
// SIG // Ooe7Ncf6qICkgSuwgdIdQvqE0h8VQ5QW5sDV4Q0Jnj4f
// SIG // 7KHYx4NiM8C4jTw8SQtsuxWiTH2Hikf3QYB71a7dB9zg
// SIG // HOkW0hgUEeWO9mh2wWqYS/Q48ASjOqYw/ha54oVOff22
// SIG // WaoH+/Hxd9NTEU/4vlvsRIMWT0jsnNI71jVArT4Q9Bt6
// SIG // VShWzyqraE6SKUoZrEwBpVsI0LMg2X3hOLblC1vxM3+w
// SIG // MyOh97aFOs7sFnuemtI2Mfj8qg16BZTJxXlpPurWrG+O
// SIG // Bj4BoTDkC9AxXYB3yEtuwMs7pRWLyxIxw/wV9THKUGm+
// SIG // x+VE0POLwkrSMgjulSXkpfELHWWiCVslJbFIIB/4Alv+
// SIG // jQJSKAJuo9CErbm2qeDk/zjJYlYaVGMyKuYZ+uSRVKB2
// SIG // qkEPcEzG1dO9zIa1Mp32J+zzW3P7suJfjw62s3hDOLk+
// SIG // 6lMQOR04x+2o17G3LceLkkxJm41ErdiTjAmdClen9yl6
// SIG // HgMpGS4okjFCJX+CpOFX7gBA3PVxQWubisAQbL5HgTFB
// SIG // tQNEzcCdh1GYw/6nzzNNt+0GQnnobBddfOAiqkzvItqX
// SIG // jvGyK1QwggdxMIIFWaADAgECAhMzAAAAFcXna54Cm0mZ
// SIG // AAAAAAAVMA0GCSqGSIb3DQEBCwUAMIGIMQswCQYDVQQG
// SIG // EwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UE
// SIG // BxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENv
// SIG // cnBvcmF0aW9uMTIwMAYDVQQDEylNaWNyb3NvZnQgUm9v
// SIG // dCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgMjAxMDAeFw0y
// SIG // MTA5MzAxODIyMjVaFw0zMDA5MzAxODMyMjVaMHwxCzAJ
// SIG // BgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAw
// SIG // DgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3Nv
// SIG // ZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29m
// SIG // dCBUaW1lLVN0YW1wIFBDQSAyMDEwMIICIjANBgkqhkiG
// SIG // 9w0BAQEFAAOCAg8AMIICCgKCAgEA5OGmTOe0ciELeaLL
// SIG // 1yR5vQ7VgtP97pwHB9KpbE51yMo1V/YBf2xK4OK9uT4X
// SIG // YDP/XE/HZveVU3Fa4n5KWv64NmeFRiMMtY0Tz3cywBAY
// SIG // 6GB9alKDRLemjkZrBxTzxXb1hlDcwUTIcVxRMTegCjhu
// SIG // je3XD9gmU3w5YQJ6xKr9cmmvHaus9ja+NSZk2pg7uhp7
// SIG // M62AW36MEBydUv626GIl3GoPz130/o5Tz9bshVZN7928
// SIG // jaTjkY+yOSxRnOlwaQ3KNi1wjjHINSi947SHJMPgyY9+
// SIG // tVSP3PoFVZhtaDuaRr3tpK56KTesy+uDRedGbsoy1cCG
// SIG // MFxPLOJiss254o2I5JasAUq7vnGpF1tnYN74kpEeHT39
// SIG // IM9zfUGaRnXNxF803RKJ1v2lIH1+/NmeRd+2ci/bfV+A
// SIG // utuqfjbsNkz2K26oElHovwUDo9Fzpk03dJQcNIIP8BDy
// SIG // t0cY7afomXw/TNuvXsLz1dhzPUNOwTM5TI4CvEJoLhDq
// SIG // hFFG4tG9ahhaYQFzymeiXtcodgLiMxhy16cg8ML6EgrX
// SIG // Y28MyTZki1ugpoMhXV8wdJGUlNi5UPkLiWHzNgY1GIRH
// SIG // 29wb0f2y1BzFa/ZcUlFdEtsluq9QBXpsxREdcu+N+VLE
// SIG // hReTwDwV2xo3xwgVGD94q0W29R6HXtqPnhZyacaue7e3
// SIG // PmriLq0CAwEAAaOCAd0wggHZMBIGCSsGAQQBgjcVAQQF
// SIG // AgMBAAEwIwYJKwYBBAGCNxUCBBYEFCqnUv5kxJq+gpE8
// SIG // RjUpzxD/LwTuMB0GA1UdDgQWBBSfpxVdAF5iXYP05dJl
// SIG // pxtTNRnpcjBcBgNVHSAEVTBTMFEGDCsGAQQBgjdMg30B
// SIG // ATBBMD8GCCsGAQUFBwIBFjNodHRwOi8vd3d3Lm1pY3Jv
// SIG // c29mdC5jb20vcGtpb3BzL0RvY3MvUmVwb3NpdG9yeS5o
// SIG // dG0wEwYDVR0lBAwwCgYIKwYBBQUHAwgwGQYJKwYBBAGC
// SIG // NxQCBAweCgBTAHUAYgBDAEEwCwYDVR0PBAQDAgGGMA8G
// SIG // A1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAU1fZWy4/o
// SIG // olxiaNE9lJBb186aGMQwVgYDVR0fBE8wTTBLoEmgR4ZF
// SIG // aHR0cDovL2NybC5taWNyb3NvZnQuY29tL3BraS9jcmwv
// SIG // cHJvZHVjdHMvTWljUm9vQ2VyQXV0XzIwMTAtMDYtMjMu
// SIG // Y3JsMFoGCCsGAQUFBwEBBE4wTDBKBggrBgEFBQcwAoY+
// SIG // aHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3BraS9jZXJ0
// SIG // cy9NaWNSb29DZXJBdXRfMjAxMC0wNi0yMy5jcnQwDQYJ
// SIG // KoZIhvcNAQELBQADggIBAJ1VffwqreEsH2cBMSRb4Z5y
// SIG // S/ypb+pcFLY+TkdkeLEGk5c9MTO1OdfCcTY/2mRsfNB1
// SIG // OW27DzHkwo/7bNGhlBgi7ulmZzpTTd2YurYeeNg2Lpyp
// SIG // glYAA7AFvonoaeC6Ce5732pvvinLbtg/SHUB2RjebYIM
// SIG // 9W0jVOR4U3UkV7ndn/OOPcbzaN9l9qRWqveVtihVJ9Ak
// SIG // vUCgvxm2EhIRXT0n4ECWOKz3+SmJw7wXsFSFQrP8DJ6L
// SIG // GYnn8AtqgcKBGUIZUnWKNsIdw2FzLixre24/LAl4FOmR
// SIG // sqlb30mjdAy87JGA0j3mSj5mO0+7hvoyGtmW9I/2kQH2
// SIG // zsZ0/fZMcm8Qq3UwxTSwethQ/gpY3UA8x1RtnWN0SCyx
// SIG // TkctwRQEcb9k+SS+c23Kjgm9swFXSVRk2XPXfx5bRAGO
// SIG // WhmRaw2fpCjcZxkoJLo4S5pu+yFUa2pFEUep8beuyOiJ
// SIG // Xk+d0tBMdrVXVAmxaQFEfnyhYWxz/gq77EFmPWn9y8FB
// SIG // SX5+k77L+DvktxW/tM4+pTFRhLy/AsGConsXHRWJjXD+
// SIG // 57XQKBqJC4822rpM+Zv/Cuk0+CQ1ZyvgDbjmjJnW4SLq
// SIG // 8CdCPSWU5nR0W2rRnj7tfqAxM328y+l7vzhwRNGQ8cir
// SIG // Ooo6CGJ/2XBjU02N7oJtpQUQwXEGahC0HVUzWLOhcGby
// SIG // oYIDWTCCAkECAQEwggEBoYHZpIHWMIHTMQswCQYDVQQG
// SIG // EwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UE
// SIG // BxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENv
// SIG // cnBvcmF0aW9uMS0wKwYDVQQLEyRNaWNyb3NvZnQgSXJl
// SIG // bGFuZCBPcGVyYXRpb25zIExpbWl0ZWQxJzAlBgNVBAsT
// SIG // Hm5TaGllbGQgVFNTIEVTTjo2QjA1LTA1RTAtRDk0NzEl
// SIG // MCMGA1UEAxMcTWljcm9zb2Z0IFRpbWUtU3RhbXAgU2Vy
// SIG // dmljZaIjCgEBMAcGBSsOAwIaAxUAFU9eSpdxs0a06JFI
// SIG // uGFHIj/I+36ggYMwgYCkfjB8MQswCQYDVQQGEwJVUzET
// SIG // MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
// SIG // bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
// SIG // aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFt
// SIG // cCBQQ0EgMjAxMDANBgkqhkiG9w0BAQsFAAIFAOxQeWow
// SIG // IhgPMjAyNTA4MjAxNjQyMThaGA8yMDI1MDgyMTE2NDIx
// SIG // OFowdzA9BgorBgEEAYRZCgQBMS8wLTAKAgUA7FB5agIB
// SIG // ADAKAgEAAgIr5gIB/zAHAgEAAgIXqjAKAgUA7FHK6gIB
// SIG // ADA2BgorBgEEAYRZCgQCMSgwJjAMBgorBgEEAYRZCgMC
// SIG // oAowCAIBAAIDB6EgoQowCAIBAAIDAYagMA0GCSqGSIb3
// SIG // DQEBCwUAA4IBAQBFCsTiQ82t2kGQHMDJWxQLu9Wo2aqb
// SIG // m9TOAZX67Bar5EQJFRLxn0KE+D6L4LLGM4gPm1f8qbuU
// SIG // sWL3tIuBYI+//OyYB0PcLZeEkXpGvv3Mn8eFn47sz87J
// SIG // qiTBdb0UFDKGM1duWu2UR7JakZ+Ps/pUNtVDDHndsMfa
// SIG // IaJaEw6ZPhk38JM7lE4m/RblDa+On/8EQdeJtJ5fxmNB
// SIG // 64TpQYalldb/sv5BhA2UtlxV+Eb9TNirYSYy3uhG1ofo
// SIG // Vq5/aE/BgpnUl38vOdLUyvm/uEU0lCnofl0S6D1dX+V1
// SIG // DJtkLCpA4LoKHVhT3GJbwhgCZgjxoxGE3DI6HSWYIhzY
// SIG // oxskMYIEDTCCBAkCAQEwgZMwfDELMAkGA1UEBhMCVVMx
// SIG // EzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1Jl
// SIG // ZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
// SIG // dGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3Rh
// SIG // bXAgUENBIDIwMTACEzMAAAH2gy8malRdIsEAAQAAAfYw
// SIG // DQYJYIZIAWUDBAIBBQCgggFKMBoGCSqGSIb3DQEJAzEN
// SIG // BgsqhkiG9w0BCRABBDAvBgkqhkiG9w0BCQQxIgQgJ21s
// SIG // y8elMGepvqyQ3dTzlMnmO3Ek7QJdHnN8x/7e1WQwgfoG
// SIG // CyqGSIb3DQEJEAIvMYHqMIHnMIHkMIG9BCArYUzxlF6m
// SIG // 5USLS4f8NXL/8aoNEVdsCZRmF+LlQjG2ojCBmDCBgKR+
// SIG // MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
// SIG // dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
// SIG // aWNyb3NvZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1p
// SIG // Y3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAyMDEwAhMzAAAB
// SIG // 9oMvJmpUXSLBAAEAAAH2MCIEIHhrh6vEL1JAiGfiJpw1
// SIG // Xdy0mGahfUitiPtp9g8dYpIEMA0GCSqGSIb3DQEBCwUA
// SIG // BIICABDTJvAXxrIIGJcKGPmEzfXYphGSk88UNEzJqmMg
// SIG // irrNpeqpeS5Qybie4ibLLO/d7M3YjPATODN8tXKM2TkO
// SIG // KMwdGWru/dXs2Blpx+BtKoJy5eJt63zRFeyqALZdA9DB
// SIG // xsNXr1KKZclqfGpk5mBb78WBBMiYo/CbGup/QaSG71Fv
// SIG // QUDwc7lTg1/nlaJPuK+oRqt+loA/GxCuniu/exlHBm5P
// SIG // JTaFxSWTRRlhteh6Au0ceZmAO3Wbsr4B1YlhxPS52pIS
// SIG // GGPXQiH1JrT2tzCWfEuJgqEa67qjT1j9ALT5djr7XGeD
// SIG // y6zum72opArMR1LtdKIWhFYnz92ildYNFrm6DPmLu/Rj
// SIG // wjj2BLVODZDtBeJHtcROxjh8Wk6YDAaFSI8bwj1BF2RM
// SIG // 2AOQjAucLBp8RggLeZLnNTs0ozOzUW02+yEvp+WbXsmt
// SIG // niQIxpkRyvdy962by/dob7OSUzlYwWBR9qf+rPQjRltk
// SIG // lYql8p+hEM0DdaD22lwUHGreYpyoiQtF30gPh8FuxBZF
// SIG // smwzAekWLmQ4axcTXHhVxTC8mG5lSrpOW9pXeblNJRzh
// SIG // aG/Nwsml+z/7/BL0UlM6z3TXAG2MXScPA4/F5TkHUheB
// SIG // 6meAFTwY+PiBe99pj5303fNfEcVhox7ImuWbDczdkV4r
// SIG // 2O2aqeIq5XU8mfiVootpt1YhJC2b
// SIG // End signature block
