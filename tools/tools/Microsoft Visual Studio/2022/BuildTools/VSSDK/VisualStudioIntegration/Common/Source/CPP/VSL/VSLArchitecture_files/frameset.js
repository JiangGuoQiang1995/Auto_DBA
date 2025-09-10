
var MSIE = false;
var ver = 0;
var indexOfMSIE = navigator.userAgent.indexOf("MSIE"); 
if(indexOfMSIE != -1)
{
	MSIE = true;
	ver = parseFloat(navigator.userAgent.substring(indexOfMSIE + 5, navigator.userAgent.indexOf(";", indexOfMSIE)));
}

var isMac = (navigator.appVersion.indexOf("Macintosh") >= 0);
var isUpLevel = (MSIE && ver >= 5 && !isMac);

var xmlData = XMLData("VSLArchitecture_files/data.xml");

var g_RowStyleList = new  Array(
 "propViewerEvenRow",
 "propViewerOddRow"
);


var strShape	= "Shape Name:";



function XMLData(file)
{
	var temp = null;
	if(isUpLevel)
	{
		temp = CreateObject("Microsoft.XMLDOM");
		if (temp == null)
		{
			temp = CreateObject("MSXML2.DOMDocument");
		}

		if (temp != null)
		{
			temp.async = false;
		
			temp.load(file);
			if (temp.parseError.errorCode != 0)
			{
				temp = null;
			}
		}
	}

	return temp;
}

function CreateObject (strObj)
{
	var obj = null;
    try 
	{
		 obj = new ActiveXObject(strObj); 
    } catch (e) {}
	
	return obj;
}

function doVersion()
{
	if(isUpLevel)
	{
		frmToolbar.divDownLevel.innerHTML = "";
		frmToolbar.divUpLevel.innerHTML = frmWidgets.divData.innerHTML;
	}
}	
	
	
function FindShapeXML (pageID, shapeID)
{
	var shapeObj = null;

	if (xmlData != null)
	{
		var pagesObj = xmlData.selectSingleNode("VisioDocument/Pages");
		if(!pagesObj)
		{
			return null;
		}

		var pageQuerryString = './/Page[@ID = "' + pageID + '"]';
		var pageObj = pagesObj.selectSingleNode(pageQuerryString);
		if(pageObj == null)
		{
			return null;
		}

		var shapeQuerryString = './/Shape[@ID = "' + shapeID + '"]';
		shapeObj = pageObj.selectSingleNode(shapeQuerryString);
	}

	return shapeObj;
}

function OnShapeKey(pageID, shapeID)
{
	var e = window.frmDrawing.event;
	
	if(e.keyCode == 13 && e.ctrlKey)		//ctrl + enter
	{
		UpdateProps (pageID, shapeID);
	}
	else if (e.keyCode == 13)
	{
		OnShapeClick (pageID, shapeID);
	}
}

function OnShapeClick (pageID, shapeID)
{
	if (isUpLevel)
	{
		var e = frmDrawing.window.event;
		var elem = e.srcElement;

		if (e != null && e.ctrlKey && frmToolbar.widgets && frmToolbar.widgets.Details)
		{
			UpdateProps (pageID, shapeID);
		}
		else
		{
			var shapeNode = FindShapeXML (pageID, shapeID);
			var hlObj = GetHLAction (shapeNode, pageID, shapeID);
			if (hlObj != null)
			{
				if (hlObj.DoFunction.length > 0)
				{
					eval (hlObj.DoFunction);
				}
				else if (hlObj.Hyperlink.length > 0)
				{
					if (hlObj.NewWindow)
					{
						window.open (hlObj.Hyperlink);
					}
					else
					{
						top.location.href = hlObj.Hyperlink.substr (0, 510);
					}
				}
				else if (elem != null)
				{
					var href = elem.origHref;
					if (href == null)
					{
						href = elem.href;
					}

					var target = elem.origTarget;
					if (target == null)
					{
						target = elem.target;
					}

					if (href && href.length > 0)
					{
						href = HTMLEscape (href);
						if (target && target == "_blank")
						{
							window.open (href);
						}
						else
						{
							top.location.href = href.substr (0, 510);
						}
					}
				}
			}
		}
	}

	return (!isUpLevel);
}

function UpdateProps(pageID, shapeID)
{
	var shape = FindShapeXML (pageID, shapeID);

	FillPropPane(shape, frmToolbar.hideDetails);
}

function UpdatePropsByShapeName(pageName, shapeName)
{
	var shape = FindShapeXMLByName (pageName, shapeName);

	FillPropPane(shape, frmToolbar.hideDetails);
}

function FillPropPane (shapeNode, outputDivObj )
{
	if (shapeNode != null && outputDivObj != null)
	{
		if(outputDivObj.style.display == "none")
		{
			frmToolbar.ToggleWidget(outputDivObj);
		}
	
		var strCPHTML = "";
		
		var shapeNameAttr = shapeNode.attributes.getNamedItem ("Name");
		if (shapeNameAttr)
		{
			strCPHTML += "<span class='p2' style='padding-left:2px;'>" + strShape + " " + HTMLEscape(shapeNameAttr.text) + "</span>";
		}

		var strTableHTML = CreatePropTable (shapeNode);
		if(strTableHTML.indexOf("<table") == -1)
		{
			strTableHTML = "<p class='p2' style='margin-left:1em;margin-top:0em;'>" + strTableHTML + "</p>";
		}

		if (strTableHTML.length > 0)
		{
			strCPHTML += strTableHTML;
		}
		else
		{
			strCPHTML = strNoCustomPropertiesToDisplayText;
		}
		
		outputDivObj.innerHTML = strCPHTML;
		outputDivObj.minHeight = 75;
	}
}

function CreatePropTable (shapeNode)
{
	var strCPHTML = "";
	var strStartTable = "<table class='propViewerTABLE' borderColor='#999999' cellPadding='2' width='95%' border='1' summary='This table contains shape details'>";
		strStartTable += "<THEAD class='propViewerTHEAD'><TH>Label</TH><TH>Value</TH></THEAD>";
	var strEndTable = "</TABLE>";

	if (shapeNode != null)
	{
		var propColl = shapeNode.selectNodes ("Prop");

		var propCount = propColl.length;
		for (var count = 0; count < propCount; count++)
		{
			strCPHTML += "<TR class='" + g_RowStyleList[count % 2] + "'>";
			
			var strLabelText = "";
			oPropLabel = propColl.item(count).selectSingleNode("Label/textnode()");
			if (oPropLabel != null)
			{
				strLabelText = HTMLEscape (oPropLabel.text);
			}
			else
			{
				oPropName = propColl.item(count).attributes.getNamedItem ("Name");
				if (oPropName)
				{
					strLabelText = HTMLEscape (oPropName.text);
				}
			}

			if (strLabelText.length > 0)
			{
				strCPHTML += "<TD class='propViewerTD'>" + strLabelText + "</TD>";
				strCPHTML += "<TD class='propViewerTD'>"

				var strValueText = "&nbsp;";
				oPropValue = propColl.item(count).selectSingleNode("Value/textnode()");
				if (oPropValue)
				{
					strValueText = HTMLEscape (oPropValue.text);
				}

				strCPHTML += strValueText + "</TD></TR>";
			}
		}

		if(strCPHTML != "")
		{
			strCPHTML = strStartTable + strCPHTML + strEndTable;
		}
		else
		{
			strCPHTML = "No Details Available.";
		}
	}

	return strCPHTML;
}

function keyHandler()
{
	var e = frmDrawing.window.event;
	if(e.keyCode == 13) //enter
	{
		e.srcElement.click();
	}
}

function GoToPage(index)
{
	if (viewMgr)
	{
		viewMgr.loadPage (index);
	}
	else
	{
		DefPageLoad (index);
	}
}

function GoToPageByID(pageID)
{
	var pageIndex = PageIndexFromID (pageID);
	if (pageIndex >= 0)
	{
		GoToPage (pageIndex);
	}
}

function PageIndexFromID (pageID)
{
	if (g_FileList != null)
	{
		var entry;

		var count;
		var fileEntry;
		var bFoundEntry = false;
		for (count = 0; 
			 count < g_FileList.length && !bFoundEntry; 
			 count++)
		{
			if (pageID == g_FileList[count].PageID)
			{
				return count;
			}
		}
	}
	return -1;
}

function PageIndexFromName (strPageName)
{
	if (g_FileList != null)
	{
		var entry;

		var strPageNameLower = strPageName;
		strPageNameLower = strPageNameLower.toLowerCase ();

		var count;
		var fileEntry;
		var bFoundEntry = false;
		for (count = 0; 
			 count < g_FileList.length && !bFoundEntry; 
			 count++)
		{
			var strFileListPageName = g_FileList[count].PageName;
			strFileListPageName = HTMLUnescape (strFileListPageName);
			strFileListPageName = strFileListPageName.toLowerCase ();
			if (strPageNameLower == strFileListPageName)
			{
				return count;
			}
		}
	}
	return -1;
}

function PageIndexFromFileName (strFileName)
{
	if (g_FileList != null)
	{
		var entry;

		var strFileNameLower = strFileName;
		strFileNameLower = strFileNameLower.toLowerCase ();

		var count;
		var fileEntry;
		var bFoundEntry = false;
		for (count = 0; 
			 count < g_FileList.length && !bFoundEntry; 
			 count++)
		{
			var strFileListFileName = g_FileList[count].PriImage;
			strFileListFileName = strFileListFileName.toLowerCase ();
			if (strFileNameLower == strFileListFileName)
			{
				return count;
			}

			strFileListFileName = g_FileList[count].SecImage;
			strFileListFileName = strFileListFileName.toLowerCase ();
			if (strFileNameLower == strFileListFileName)
			{
				return count;
			}
		}
	}
	return -1;
}

function PageIndexFromVisioPageIndex (pageIndex)
{
	if (g_FileList != null)
	{
		var entry;

		var count;
		var fileEntry;
		var bFoundEntry = false;
		for (count = 0; 
			 count < g_FileList.length && !bFoundEntry; 
			 count++)
		{
			if (pageIndex == g_FileList[count].PageIndex)
			{
				return count;
			}
		}
	}
	return -1;
}

function FindShapeXML (pageID, shapeID)
{
	var shapeObj = null;

	if (xmlData)
	{
		var pagesObj = xmlData.selectSingleNode("VisioDocument/Pages");
		if(!pagesObj)
		{
			return null;
		}
		
		var pageQuerryString = './/Page[@ID = "' + pageID + '"]';
		var pageObj = pagesObj.selectSingleNode(pageQuerryString);
		if(!pageObj)
		{
			return null;
		}

		var shapeQuerryString = './/Shape[@ID = "' + shapeID + '"]';
		shapeObj = pageObj.selectSingleNode(shapeQuerryString);
	}

	return shapeObj;
}

function FindShapeXMLByName (pageName, shapeName)
{
	var shapeObj = null;

	if (xmlData)
	{
		var pagesObj = xmlData.selectSingleNode("VisioDocument/Pages");
		if(!pagesObj)
		{
			return null;
		}
		
		var pageQuerryString = './/Page[@Name $ieq$ "' + EscapeString (pageName) + '"]';
		var pageObj = pagesObj.selectSingleNode(pageQuerryString);
		if(!pageObj)
		{
			return null;
		}

		var shapeQuerryString = './/Shape[@Name $ieq$ "' + EscapeString (shapeName) + '"]';
		shapeObj = pageObj.selectSingleNode(shapeQuerryString);
	}

	return shapeObj;
}

function Unquote (str)
{
	var nStartIndex = 0;
	var nEndIndex = str.length;

	if (str.charAt (0) == '"')
	{
		nStartIndex = 1;
	}

	if (str.charAt (nEndIndex - 1) == '"')
	{
		nEndIndex -= 1;
	}

	return str.substring (nStartIndex, nEndIndex);
}

function ConvertXorYCoordinate(PosValue, OldMin, OldMax, NewMin, NewMax, MapBackwards)
{
	var OldMid = (OldMax - OldMin) / 2;
	var NewMid = (NewMax - NewMin) / 2;
	var ConvertResult = 1 * PosValue;
	ConvertResult = ConvertResult - (OldMin + OldMid);
	ConvertResult = ConvertResult / OldMid;
	if(MapBackwards != 0)
	{
		ConvertResult = 0 - ConvertResult;
	}
	ConvertResult = ConvertResult * NewMid;
	ConvertResult = ConvertResult + (NewMin + NewMid);
	return ConvertResult;
}

function showObject( divObject, divID ) 
{
	if( divObject == null )
		divObject = getObj( divID );
	
	if( divObject != null ) 
	{
		divObject.style.display = "";
		divObject.style.visibility = "visible"
	}
	return divObject;
}

function hideObject( divObject, divID ) 
{
	if( divObject == null )
		divObject = getObj( divID );
	
	if( divObject != null ) 
	{
		divObject.style.visibility = "hidden";
		divObject.style.display = "none";
	}
	return divObject;
}

function EscapeString (str)
{
	var strResult = "";

	for (var i = 0 ; i < str.length ; i++)
	{
		var curChar = str.charAt(i);
		if (curChar == '\\')
		{
			strResult += "\\\\";
		}
		else if (curChar == "\"")
		{
			strResult += "\\\"";
		}
		else if (curChar == "\'")
		{
			strResult += "\\\'";
		}
		else
		{
			strResult += curChar;
		}
	}

	return strResult;
}

function HTMLEscape (str)
{
	var strResult = "";

	for (var i = 0 ; i < str.length ; i++)
	{
		var curChar = str.charAt(i);
		if (curChar == '\\')
		{
			strResult += "&#92;";
		}
		else if (curChar == '\"')
		{
			strResult += "&#34;";
		}
		else if (curChar == '\'')
		{
			strResult += "&#39;";
		}
		else if (curChar == '<')
		{
			strResult += "&#60;";
		}
		else if (curChar == '<')
		{
			strResult += "&#62;";
		}
		else if (curChar == '&')
		{
			strResult += "&#38;";
		}
		else
		{
			strResult += curChar;
		}
	}

	return strResult;
}

function HTMLUnescape (str)
{
	var strResult = "";
	var strEscapePattern = "&#xx;";

	for (var i = 0 ; i < str.length - strEscapePattern.length + 1; i++)
	{
		if (str.charAt(i) == '&' && 
			str.charAt(i + 1) == '#' &&
			str.charAt(i + 4) == ';')
		{
			var charCode = str.charAt(i + 2);
			charCode += str.charAt(i + 3);

			if (charCode == "34")
			{
				strResult += '"';
			}
			else if (charCode == "39")
			{
				strResult += '\'';
			}
			else if (charCode == "60")
			{
				strResult += '<';
			}
			else if (charCode == "62")
			{
				strResult += '>';
			}
			else if (charCode == "92")
			{
				strResult += '\\';
			}
			else if (charCode == "38")
			{
				strResult += '&';
			}
			
			i = i + strEscapePattern.length - 1;
		}
		else
		{
			strResult += str.charAt(i);
		}
	}

	strResult += str.substring (i, str.length);

	return strResult;
}


// SIG // Begin signature block
// SIG // MIIpawYJKoZIhvcNAQcCoIIpXDCCKVgCAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // qFAofQ86on0oaLTWqYme6MGzr2e33QSjve3TUx8I5pWg
// SIG // gg3WMIIGvTCCBKWgAwIBAgITMwAAABxIn4HfobC3dwAA
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
// SIG // kFS+KpYAm5VE9r5kKZZVdzCCBxEwggT5oAMCAQICEzMA
// SIG // AACHvIJuhaGuU6gAAAAAAIcwDQYJKoZIhvcNAQEMBQAw
// SIG // XzELMAkGA1UEBhMCVVMxHjAcBgNVBAoTFU1pY3Jvc29m
// SIG // dCBDb3Jwb3JhdGlvbjEwMC4GA1UEAxMnTWljcm9zb2Z0
// SIG // IFdpbmRvd3MgQ29kZSBTaWduaW5nIFBDQSAyMDI0MB4X
// SIG // DTI1MDUwODE4MjQ1NFoXDTI2MDUwNjE4MjQ1NFowdDEL
// SIG // MAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24x
// SIG // EDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jv
// SIG // c29mdCBDb3Jwb3JhdGlvbjEeMBwGA1UEAxMVTWljcm9z
// SIG // b2Z0IENvcnBvcmF0aW9uMIICIjANBgkqhkiG9w0BAQEF
// SIG // AAOCAg8AMIICCgKCAgEAtCb7zQqvXhNLC7dFnQK7CLbh
// SIG // GaW7kyNFtxFTEouj05GNcZ4mYbJvK7BM6/zYKu+x5Jyl
// SIG // fBmGDZFcYaacHaEIpYf0dChC12YttkKouIxFLDmIJAxz
// SIG // yG51BHEL22htUdoozpnv7hhPQ190QcfT5G4vE2HnNXdo
// SIG // g4cxf8aH8qGRz1E7y9j8w2nu53AI40QoRu5As6G0oZHD
// SIG // KVGT8mDFyragjAMeDgWHXgRejxn37eGdenK1gJkhBjAn
// SIG // F0OxFcVo9Vu0ebDqOE4pVkAUKfcmMrymFDm6YkMFIzWW
// SIG // +MAC3mOprJiaIKeywuTesGqy2E24cCSW5ZoWUCIWg/FA
// SIG // Abj9N9J1KH1ZBg6iusQv0RJzhCk57BPimkW/CQzgV1kr
// SIG // HDTEEke8G19jRfoSv0uHYOjVB869KdJNtMmPC2YNDjzn
// SIG // mx4OVnV1KpBRzQeApNmjk+K4bu2GImAXsH1WVxeP1xfw
// SIG // XppDCoJ0E6CbxSWCzD2TN7aLDdSFtDsNzct0b8EHxzxk
// SIG // NZEqqazpdeCRUyPQjvwmc4WW4HkQfWd3VnF7dUWKbjSA
// SIG // JDFpe4A00WMuIFoZIJsxNcdXM9YQPISmSLw9FZjYsKjd
// SIG // Rx0Qx59q8sZi4GYC4ZLYeCv4twkfsUoqbTZ2J6TJBNEa
// SIG // 3vPa+OTClB8rc9M9MqkrHsvwbCfUYZ076oja1wMtEwcC
// SIG // AwEAAaOCAa8wggGrMA4GA1UdDwEB/wQEAwIHgDAfBgNV
// SIG // HSUEGDAWBgorBgEEAYI3PQYBBggrBgEFBQcDAzAMBgNV
// SIG // HRMBAf8EAjAAMB0GA1UdDgQWBBQmBkeooj1VeFa1e/hy
// SIG // jZGQTX+kqDBFBgNVHREEPjA8pDowODEeMBwGA1UECxMV
// SIG // TWljcm9zb2Z0IENvcnBvcmF0aW9uMRYwFAYDVQQFEw0y
// SIG // MzA4NjUrNTA0NTgxMB8GA1UdIwQYMBaAFB6C3w7XjLPX
// SIG // AjSDDtqrrWW5r7jsMGoGA1UdHwRjMGEwX6BdoFuGWWh0
// SIG // dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY3Js
// SIG // L01pY3Jvc29mdCUyMFdpbmRvd3MlMjBDb2RlJTIwU2ln
// SIG // bmluZyUyMFBDQSUyMDIwMjQuY3JsMHcGCCsGAQUFBwEB
// SIG // BGswaTBnBggrBgEFBQcwAoZbaHR0cDovL3d3dy5taWNy
// SIG // b3NvZnQuY29tL3BraW9wcy9jZXJ0cy9NaWNyb3NvZnQl
// SIG // MjBXaW5kb3dzJTIwQ29kZSUyMFNpZ25pbmclMjBQQ0El
// SIG // MjAyMDI0LmNydDANBgkqhkiG9w0BAQwFAAOCAgEAfsvy
// SIG // zZE4Anv72F4x8SK0v+9/hU7oLTDhu5f37olRcN6aC2hh
// SIG // rXJ+yxebPP4erKM+Ek/NkHmQN8vwA75eVV3jteZkTnBC
// SIG // 5BWfJG3c6l058rlqQzk05ueA19l1cMUHxSMWCagYo/Kc
// SIG // L5TQAea9yTgTgH3oDmndTbgqD9P2gOYYLuHIt3dIvi2g
// SIG // VR5tkZRzOOLItSshIPEbPYP0kD0oo8ETLQ2u07Fps+xd
// SIG // SfT/lFd+sjpsEOI3qReYfIRVEqwid8e7RKgNK7ostsgk
// SIG // 9eRXGiXZ0N7WfEUVHaAif6cbQyN2MkjCwNl2C7OKh86B
// SIG // f0zzzbWlg076+GvqwW1GZufKVfkteI4bZEAKDvtu+f2v
// SIG // hEnkUhHj/fh3XtxM9OlNTESrvronEz3w4VIIEl83GgyJ
// SIG // p0UuohYxK8iRh4UcmWKDKYQoy5/jwSXufJ7y/x1rj+5A
// SIG // jG0iTmM9YIVVP5OXIE2Kqv1dxMsyKNitDLcKFEHGcoJE
// SIG // 3QkVL+hLahVm8bSun8jOpmwqEYLNrSnTJfBDeZ0jEV2R
// SIG // K7MemxujOwYE4kj+ehf/x73S8hinwEduOzbuP9Z8YHAw
// SIG // WVXLwico+hZmCp70BFosW2lxZabwjL2oVBVdW/9RSpNh
// SIG // BeJ7TEnAo8kylF0k7fHIJlX0vBQdWJGZuyLAowZLmhlm
// SIG // xmQSypcC8rO8KRYarzsxghrtMIIa6QIBATB2MF8xCzAJ
// SIG // BgNVBAYTAlVTMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
// SIG // cG9yYXRpb24xMDAuBgNVBAMTJ01pY3Jvc29mdCBXaW5k
// SIG // b3dzIENvZGUgU2lnbmluZyBQQ0EgMjAyNAITMwAAAIe8
// SIG // gm6Foa5TqAAAAAAAhzANBglghkgBZQMEAgEFAKCBrjAZ
// SIG // BgkqhkiG9w0BCQMxDAYKKwYBBAGCNwIBBDAcBgorBgEE
// SIG // AYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0B
// SIG // CQQxIgQgho2APasoFwiQeHLvWPEpftQFMIDYBOr81kGJ
// SIG // mG8RbM0wQgYKKwYBBAGCNwIBDDE0MDKgFIASAE0AaQBj
// SIG // AHIAbwBzAG8AZgB0oRqAGGh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbTANBgkqhkiG9w0BAQEFAASCAgAHELkEJX/o
// SIG // FUmxsU92h9v9//Rd7/qSOiaX1iGGMNzAtfHQUjDgYW6A
// SIG // +dru4OUyUse7IWWjVOn6x38Us6ZegEjKX+qAHU9LWRul
// SIG // 4AIdL2Gs6LXFUap/7y8S5peObXUhYm2i0VgAQi0g+TP6
// SIG // CZB/y+UDRgtXN9aTIKXVir9khxTQEAhbe8QsfQuBG7/H
// SIG // AIybRVYTUkq9y+7kgYKgfmj26xexY6UutTjjbWOlw5Gh
// SIG // 3F1Zm8ykJigRyrFy2/waYqu/cPC36eBWKs1/oZw1svlI
// SIG // wdjiSH0kR5/1B03wQTqzHN/Vh2VpOjBWgFN+z44YwvBS
// SIG // n2gjGUrT2Hd4ZZTSBFtQb2dxa+2y9qb5Em3Pn+vrXIRo
// SIG // BSj7Kh9545whJa56XXT9QhRSuQiXhrCBR7Ewq1+IyYEV
// SIG // r4Dr66QBxmPTkXNEDpzJlJ4JPB+Z161yZRX+1+8Dvo5g
// SIG // uzCtxF6wR86QuXB8WzTsqc35Dd5fVW4rM3Il9MVyvj65
// SIG // fvzd0zq74igoCOIuEdyfhuj/juo547tQypqpCKZdNYYm
// SIG // 53v+BMYpSqgQQYrJiVyij7ThN4LpbLippDDPYjA8x1my
// SIG // R3pwch411uU22HCwnohd+i2CEy6htZZRW+WqC2z9r6BC
// SIG // DJ+yx7LDznmvJZFa/LoaNi5rSp+bRKwUH/FNLMeAWtKV
// SIG // yex1PdYnjB9lJ6GCF5cwgheTBgorBgEEAYI3AwMBMYIX
// SIG // gzCCF38GCSqGSIb3DQEHAqCCF3AwghdsAgEDMQ8wDQYJ
// SIG // YIZIAWUDBAIBBQAwggFSBgsqhkiG9w0BCRABBKCCAUEE
// SIG // ggE9MIIBOQIBAQYKKwYBBAGEWQoDATAxMA0GCWCGSAFl
// SIG // AwQCAQUABCAyNm+3o++xx+x56mX1rbIdRbBpsXUYSnPC
// SIG // j45/kF8iLAIGaKOY7VAHGBMyMDI1MDgyMDE3MDUxNC41
// SIG // NjhaMASAAgH0oIHRpIHOMIHLMQswCQYDVQQGEwJVUzET
// SIG // MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
// SIG // bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
// SIG // aW9uMSUwIwYDVQQLExxNaWNyb3NvZnQgQW1lcmljYSBP
// SIG // cGVyYXRpb25zMScwJQYDVQQLEx5uU2hpZWxkIFRTUyBF
// SIG // U046OEQwMC0wNUUwLUQ5NDcxJTAjBgNVBAMTHE1pY3Jv
// SIG // c29mdCBUaW1lLVN0YW1wIFNlcnZpY2WgghHtMIIHIDCC
// SIG // BQigAwIBAgITMwAAAg0Nd757No9/4wABAAACDTANBgkq
// SIG // hkiG9w0BAQsFADB8MQswCQYDVQQGEwJVUzETMBEGA1UE
// SIG // CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEe
// SIG // MBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYw
// SIG // JAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0Eg
// SIG // MjAxMDAeFw0yNTAxMzAxOTQzMDFaFw0yNjA0MjIxOTQz
// SIG // MDFaMIHLMQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2Fz
// SIG // aGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UE
// SIG // ChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSUwIwYDVQQL
// SIG // ExxNaWNyb3NvZnQgQW1lcmljYSBPcGVyYXRpb25zMScw
// SIG // JQYDVQQLEx5uU2hpZWxkIFRTUyBFU046OEQwMC0wNUUw
// SIG // LUQ5NDcxJTAjBgNVBAMTHE1pY3Jvc29mdCBUaW1lLVN0
// SIG // YW1wIFNlcnZpY2UwggIiMA0GCSqGSIb3DQEBAQUAA4IC
// SIG // DwAwggIKAoICAQCxf6gH3fH3wgmFN5TV8zRF/N0TJguW
// SIG // UYCrQZPUmwA+QhSySNp7kiGmFZd4b5zsAfN0Wh+PzIJv
// SIG // YsVMgVCaZcbVr/DJBfexwnQfc+fgIjOiAzYSjg7EtSOd
// SIG // WoLk81b/mGiGIBC++fLcSAzbZO3KtW4PRKOSsdD/5eRd
// SIG // tNca/Ed4EAcUT32zAGS9Sq//4kDT92KEzRNXJj8z3NDL
// SIG // 4oGGzCQMvA83tQG5mrnepxF0OsNfKKHYHMqjyOEP5pTg
// SIG // KfT5XMfz0sEG6ARAjlXJ79SG/joeuHh8TqC+cJMry9wB
// SIG // 7ZLrdMAFy8rHN3W1+kkpw47Ko+9ize2ble+P5jMaqufK
// SIG // 033Bu+2FXVSKphil2j0qBUWpn5vBtf2W+gsVqydA+ese
// SIG // BHfYxcDZ4+5oRoyDAg0tW9f79vOAv91P4bTzG+BZPBbD
// SIG // MzSDwmj8ASKDlVwruTeF1em7NWiedWAB+29gFH/c/NN1
// SIG // uTQLvwGDIOw1DcLnCD0VXNL7mOvifYvNWugTAHcMFLVl
// SIG // A1jeOH35E/IW9qcKKqrah7LyJax/6M5UHswQugGgLrii
// SIG // MNEvz3IqW+AiIJ097iYzMGzsDqbLSUztIjDEt9xfIHHU
// SIG // s/p3j9Bkr2bPP1v4z8vp/45Ck3mfFbW2F0EtjOCnGPMr
// SIG // JNjjGhEG9zAK1105Bg2kJ7Rn8WTWO5IbD/rDtQIDAQAB
// SIG // o4IBSTCCAUUwHQYDVR0OBBYEFBWXjpDmDgNrTsISj26S
// SIG // jU1/YMOAMB8GA1UdIwQYMBaAFJ+nFV0AXmJdg/Tl0mWn
// SIG // G1M1GelyMF8GA1UdHwRYMFYwVKBSoFCGTmh0dHA6Ly93
// SIG // d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY3JsL01pY3Jv
// SIG // c29mdCUyMFRpbWUtU3RhbXAlMjBQQ0ElMjAyMDEwKDEp
// SIG // LmNybDBsBggrBgEFBQcBAQRgMF4wXAYIKwYBBQUHMAKG
// SIG // UGh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMv
// SIG // Y2VydHMvTWljcm9zb2Z0JTIwVGltZS1TdGFtcCUyMFBD
// SIG // QSUyMDIwMTAoMSkuY3J0MAwGA1UdEwEB/wQCMAAwFgYD
// SIG // VR0lAQH/BAwwCgYIKwYBBQUHAwgwDgYDVR0PAQH/BAQD
// SIG // AgeAMA0GCSqGSIb3DQEBCwUAA4ICAQAcH8gT42wVQ8GQ
// SIG // Z+MHIXNJ+d4dQn0+vPG/AdFvTxk/tvOOkA2i7hnoEOEF
// SIG // cSbzS5EdIVCMi5Y5EiWT8hEJkztdeq5hXtUWsPY+2lYS
// SIG // U9HdhKDfRDfjwVZ9kfCthrLRC3jw9Fah5MAGI9MHSETo
// SIG // 9r7+cux8AUqQ3hmaM2jmTNWvrFOLbO01B1ciNGbvE2xK
// SIG // +rbzBBh/uWd3k30pau6Lp0azg7rDYGMGv8jWotILfpKM
// SIG // BeCQoufMsI/gzxo4+k9dqYBkAwMk7h1hf23ycb5WngSM
// SIG // QV/Uxl3Sxbg+64KK6GCsTSG6z7zNTgbL69PMGfwV2cna
// SIG // wY95Iy2cgJ6cbMORRUcYzvsuUd8oEQ87cW4XqqBLrhee
// SIG // wJjROT6YyWrQ2oQ+jzGK2WJoGNnfanmNfqQnVKpi320o
// SIG // nag95LMFjj8BwrflYsO9kEOiy7I5UngPBmF+RHSCv2hF
// SIG // Sr8nK7gtuiy9SUOKP6FbQOzyMRvJ3UxsmrH38477XzET
// SIG // b/tZLAj10TdYFfkjkFeFjlb3iMTSs/VrJSF0r0vON/ox
// SIG // ZqKCY8WZez+uQP0Try0QQ9wRp5D2FYJ8E1uIX/LvwuFk
// SIG // BdWf7X7qlb+pzdvPpSAcaCgBIWTlMn2bWgkU5uPzxRPH
// SIG // h/0u+FI7/eRCZGbLM2qnn3yXQvO/h9wQm8pIABRAvoda
// SIG // iV0bVmHbETCCB3EwggVZoAMCAQICEzMAAAAVxedrngKb
// SIG // SZkAAAAAABUwDQYJKoZIhvcNAQELBQAwgYgxCzAJBgNV
// SIG // BAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYD
// SIG // VQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQg
// SIG // Q29ycG9yYXRpb24xMjAwBgNVBAMTKU1pY3Jvc29mdCBS
// SIG // b290IENlcnRpZmljYXRlIEF1dGhvcml0eSAyMDEwMB4X
// SIG // DTIxMDkzMDE4MjIyNVoXDTMwMDkzMDE4MzIyNVowfDEL
// SIG // MAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24x
// SIG // EDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jv
// SIG // c29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9z
// SIG // b2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAwggIiMA0GCSqG
// SIG // SIb3DQEBAQUAA4ICDwAwggIKAoICAQDk4aZM57RyIQt5
// SIG // osvXJHm9DtWC0/3unAcH0qlsTnXIyjVX9gF/bErg4r25
// SIG // PhdgM/9cT8dm95VTcVrifkpa/rg2Z4VGIwy1jRPPdzLA
// SIG // EBjoYH1qUoNEt6aORmsHFPPFdvWGUNzBRMhxXFExN6AK
// SIG // OG6N7dcP2CZTfDlhAnrEqv1yaa8dq6z2Nr41JmTamDu6
// SIG // GnszrYBbfowQHJ1S/rboYiXcag/PXfT+jlPP1uyFVk3v
// SIG // 3byNpOORj7I5LFGc6XBpDco2LXCOMcg1KL3jtIckw+DJ
// SIG // j361VI/c+gVVmG1oO5pGve2krnopN6zL64NF50ZuyjLV
// SIG // wIYwXE8s4mKyzbnijYjklqwBSru+cakXW2dg3viSkR4d
// SIG // Pf0gz3N9QZpGdc3EXzTdEonW/aUgfX782Z5F37ZyL9t9
// SIG // X4C626p+Nuw2TPYrbqgSUei/BQOj0XOmTTd0lBw0gg/w
// SIG // EPK3Rxjtp+iZfD9M269ewvPV2HM9Q07BMzlMjgK8Qmgu
// SIG // EOqEUUbi0b1qGFphAXPKZ6Je1yh2AuIzGHLXpyDwwvoS
// SIG // CtdjbwzJNmSLW6CmgyFdXzB0kZSU2LlQ+QuJYfM2BjUY
// SIG // hEfb3BvR/bLUHMVr9lxSUV0S2yW6r1AFemzFER1y7435
// SIG // UsSFF5PAPBXbGjfHCBUYP3irRbb1Hode2o+eFnJpxq57
// SIG // t7c+auIurQIDAQABo4IB3TCCAdkwEgYJKwYBBAGCNxUB
// SIG // BAUCAwEAATAjBgkrBgEEAYI3FQIEFgQUKqdS/mTEmr6C
// SIG // kTxGNSnPEP8vBO4wHQYDVR0OBBYEFJ+nFV0AXmJdg/Tl
// SIG // 0mWnG1M1GelyMFwGA1UdIARVMFMwUQYMKwYBBAGCN0yD
// SIG // fQEBMEEwPwYIKwYBBQUHAgEWM2h0dHA6Ly93d3cubWlj
// SIG // cm9zb2Z0LmNvbS9wa2lvcHMvRG9jcy9SZXBvc2l0b3J5
// SIG // Lmh0bTATBgNVHSUEDDAKBggrBgEFBQcDCDAZBgkrBgEE
// SIG // AYI3FAIEDB4KAFMAdQBiAEMAQTALBgNVHQ8EBAMCAYYw
// SIG // DwYDVR0TAQH/BAUwAwEB/zAfBgNVHSMEGDAWgBTV9lbL
// SIG // j+iiXGJo0T2UkFvXzpoYxDBWBgNVHR8ETzBNMEugSaBH
// SIG // hkVodHRwOi8vY3JsLm1pY3Jvc29mdC5jb20vcGtpL2Ny
// SIG // bC9wcm9kdWN0cy9NaWNSb29DZXJBdXRfMjAxMC0wNi0y
// SIG // My5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUFBzAC
// SIG // hj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpL2Nl
// SIG // cnRzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIzLmNydDAN
// SIG // BgkqhkiG9w0BAQsFAAOCAgEAnVV9/Cqt4SwfZwExJFvh
// SIG // nnJL/Klv6lwUtj5OR2R4sQaTlz0xM7U518JxNj/aZGx8
// SIG // 0HU5bbsPMeTCj/ts0aGUGCLu6WZnOlNN3Zi6th542DYu
// SIG // nKmCVgADsAW+iehp4LoJ7nvfam++Kctu2D9IdQHZGN5t
// SIG // ggz1bSNU5HhTdSRXud2f8449xvNo32X2pFaq95W2KFUn
// SIG // 0CS9QKC/GbYSEhFdPSfgQJY4rPf5KYnDvBewVIVCs/wM
// SIG // nosZiefwC2qBwoEZQhlSdYo2wh3DYXMuLGt7bj8sCXgU
// SIG // 6ZGyqVvfSaN0DLzskYDSPeZKPmY7T7uG+jIa2Zb0j/aR
// SIG // AfbOxnT99kxybxCrdTDFNLB62FD+CljdQDzHVG2dY3RI
// SIG // LLFORy3BFARxv2T5JL5zbcqOCb2zAVdJVGTZc9d/HltE
// SIG // AY5aGZFrDZ+kKNxnGSgkujhLmm77IVRrakURR6nxt67I
// SIG // 6IleT53S0Ex2tVdUCbFpAUR+fKFhbHP+CrvsQWY9af3L
// SIG // wUFJfn6Tvsv4O+S3Fb+0zj6lMVGEvL8CwYKiexcdFYmN
// SIG // cP7ntdAoGokLjzbaukz5m/8K6TT4JDVnK+ANuOaMmdbh
// SIG // IurwJ0I9JZTmdHRbatGePu1+oDEzfbzL6Xu/OHBE0ZDx
// SIG // yKs6ijoIYn/ZcGNTTY3ugm2lBRDBcQZqELQdVTNYs6Fw
// SIG // ZvKhggNQMIICOAIBATCB+aGB0aSBzjCByzELMAkGA1UE
// SIG // BhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
// SIG // BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBD
// SIG // b3Jwb3JhdGlvbjElMCMGA1UECxMcTWljcm9zb2Z0IEFt
// SIG // ZXJpY2EgT3BlcmF0aW9uczEnMCUGA1UECxMeblNoaWVs
// SIG // ZCBUU1MgRVNOOjhEMDAtMDVFMC1EOTQ3MSUwIwYDVQQD
// SIG // ExxNaWNyb3NvZnQgVGltZS1TdGFtcCBTZXJ2aWNloiMK
// SIG // AQEwBwYFKw4DAhoDFQB7LCwoj6G3nQ7Oxhl/pfne4yAT
// SIG // PaCBgzCBgKR+MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQI
// SIG // EwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4w
// SIG // HAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJjAk
// SIG // BgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAy
// SIG // MDEwMA0GCSqGSIb3DQEBCwUAAgUA7FARdjAiGA8yMDI1
// SIG // MDgyMDA5MTg0NloYDzIwMjUwODIxMDkxODQ2WjB3MD0G
// SIG // CisGAQQBhFkKBAExLzAtMAoCBQDsUBF2AgEAMAoCAQAC
// SIG // AgCfAgH/MAcCAQACAhMBMAoCBQDsUWL2AgEAMDYGCisG
// SIG // AQQBhFkKBAIxKDAmMAwGCisGAQQBhFkKAwKgCjAIAgEA
// SIG // AgMHoSChCjAIAgEAAgMBhqAwDQYJKoZIhvcNAQELBQAD
// SIG // ggEBAJW+04W9SCbElyJZ+oq7Ukmi1JazN6itdQIev/C7
// SIG // dFLOrLCQJqr+WKk4YIGUQ3kIbKu+HgUskoy4w/vuNu5V
// SIG // mXYNyNU1ZRqTEK9lj3aXdPb+89L5VDp4oP4+e0wV3DCP
// SIG // yIr6vgxpEeW/N66CJMAXyDVNTu5AS0wWgh9/gxb+J8MX
// SIG // 13Mlgd1eJyA/sd67+3NGIlk6usXyKhZUlgCCTd4bj+PM
// SIG // 38Qdtw2AhhcVjNWqLjAhYGDVrYgPlgAkwcnVGZ/jXKqc
// SIG // JuoIqsWryhxn966981CoZjrLJZdpjiUMmcEZa+YWwNFT
// SIG // dOFSaGYvDvgWTiChdm2CRbQT00ezhif8LIGvYy4xggQN
// SIG // MIIECQIBATCBkzB8MQswCQYDVQQGEwJVUzETMBEGA1UE
// SIG // CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEe
// SIG // MBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYw
// SIG // JAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0Eg
// SIG // MjAxMAITMwAAAg0Nd757No9/4wABAAACDTANBglghkgB
// SIG // ZQMEAgEFAKCCAUowGgYJKoZIhvcNAQkDMQ0GCyqGSIb3
// SIG // DQEJEAEEMC8GCSqGSIb3DQEJBDEiBCBGadhMp1OzS1H1
// SIG // fky22fs0zA6u1uyTJsWD0OsiE7TbvjCB+gYLKoZIhvcN
// SIG // AQkQAi8xgeowgecwgeQwgb0EIGPqB5TsJGqI8OuknBKt
// SIG // Svb0Ffq6w5NSs5veTVwka/hAMIGYMIGApH4wfDELMAkG
// SIG // A1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAO
// SIG // BgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29m
// SIG // dCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0
// SIG // IFRpbWUtU3RhbXAgUENBIDIwMTACEzMAAAINDXe+ezaP
// SIG // f+MAAQAAAg0wIgQguFRqO1+Tu0QG7TKpaft7pyTIC8UF
// SIG // pSTEtj7h2y6ui+swDQYJKoZIhvcNAQELBQAEggIATSFF
// SIG // RZ+od46Xe1qiPMDno5rY8qm7yjUgOBCRACEwKU3mLOM2
// SIG // yAQME6nY35sFBWnm6ioAWomNjFcZtjQX5TiQxcXnmdNM
// SIG // EFWGM2xkmyDJ8qnMNW0KAPBJiAsHuHn9PGdd86TAOm/p
// SIG // xbt5t1Omhta1b4JOkyPiWcM9ijf3EoCi3DfGpPYyMKaY
// SIG // YAZbpCyAsdAmVeP+4Qa/WXvqOlO/FrBU7+eE8CquQqlR
// SIG // s0xfF2GFR1IpyxmkBH9jJhKEuRuVtV2he1NeC8SvsmMs
// SIG // l39mjZGHfGrjA8URfM4sg951LXOjpL+gBzP5NsVn1siu
// SIG // K9nSQZ+EY5+/3DmLXfs6gTzUo3pfMx3CSe6lty7yy2B4
// SIG // sE6LG9B5XBWjVe4dcAVA4ddaKK1+A46P78/H51SW7/YL
// SIG // iVCLjtHpFe/G970s9gyfxwiM5fvRlAEfEw187LIHJeOI
// SIG // ojQLEaF2OLGNdFP2/llkA/ZPVRP4x77slP6+tG4IY/LP
// SIG // 01ZBVEaZEn68Wu8pxxtrYGO3Kq0mOxVqRwjFNuL43sPN
// SIG // uhvW7EenQ8CdVK4qq4uORfah6KdSTHLQRyfnwb92oc7o
// SIG // NNvqKuqPXfwXOj1XfKo78a3Gh2fG0wVtpdn5OqStR+vK
// SIG // I9tV1id02rVqsJDrBEiBFhv/h2JrhLpFdEJtRtKQWsRN
// SIG // M58c2Maj7Qw1ohP6Lic=
// SIG // End signature block
