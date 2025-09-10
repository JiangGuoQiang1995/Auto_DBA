
function ViewMgrSetVMLLocation(pageID, shapeID, pinX, pinY)
{
	doc = parent.frmDrawing.document;
	if (this.highlightDiv != null)
	{
		clickMenu ();

		var VMLImage = this.s;

		var imageLeft = 0;
		var imageRight = imageLeft + VMLImage.pixelWidth;
		var imageTop = 0;
		var imageBottom = imageTop + VMLImage.pixelHeight;

		var xLong = parent.ConvertXorYCoordinate(pinX, this.visBBoxLeft, this.visBBoxRight, imageLeft, imageRight, 0);
		var yLong = parent.ConvertXorYCoordinate(pinY, this.visBBoxBottom, this.visBBoxTop, imageTop, imageBottom, 1);

		xLong += doc.all['ConvertedImage'].style.posLeft;
		yLong += doc.all['ConvertedImage'].style.posTop;

		var arrowHalfWidth = viewMgr.highlightDiv.clientWidth / 2;
		var arrowHeight = viewMgr.highlightDiv.clientHeight;

		var boolNeedToScroll = false;

		if( !( (xLong - arrowHalfWidth) > doc.body.scrollLeft && (xLong + arrowHalfWidth) < (doc.body.scrollLeft + doc.body.clientWidth) ))
		{
			boolNeedToScroll = true;
		}
		
		if( !( (yLong - arrowHeight) > doc.body.scrollTop && (yLong + arrowHeight) < (doc.body.scrollTop + doc.body.clientHeight) ))
		{
			boolNeedToScroll = true;
		}
		
		if( boolNeedToScroll == true )
		{
			window.scrollTo( xLong - doc.body.clientWidth / 2, yLong - doc.body.clientHeight / 2);
		}
		
		this.highlightDiv.style.posLeft = xLong - arrowHalfWidth;
		this.highlightDiv.style.posTop = yLong;
		this.highlightDiv.style.visibility = "visible";

		setTimeout( "parent.hideObject(viewMgr.highlightDiv)", 200 );
		setTimeout( "parent.showObject(viewMgr.highlightDiv)", 400 );
		setTimeout( "parent.hideObject(viewMgr.highlightDiv)", 600 );
		setTimeout( "parent.showObject(viewMgr.highlightDiv)", 800 );
		setTimeout( "parent.hideObject(viewMgr.highlightDiv)", 1000 );
		setTimeout( "parent.showObject(viewMgr.highlightDiv)", 1200 );
		setTimeout( "parent.hideObject(viewMgr.highlightDiv)", 1400 );
		setTimeout( "parent.showObject(viewMgr.highlightDiv)", 1600 );
		setTimeout( "parent.hideObject(viewMgr.highlightDiv)", 1800 );

	}
}

function VMLZoomChange(size)
{
	if(size)
	{
		if(size == "up")
		{
			size = zoomLast + 50;
		}
		else if(size == "down")
		{
			size = zoomLast - 50;
		}
		
		size = parseInt(size);
		if(typeof(size) != "number")
			size = 100;
	}
	else
	{
		size = 100;
	}

	clickMenu ();

	viewMgr.zoomLast = size;

	var zoomFactor = size/100;

	var width = this.s.pixelWidth;
	var height = this.s.pixelHeight;

	var margin = parseInt(document.body.style.margin) * 2;

	var clientWidth = document.body.clientWidth;
	var clientHeight = document.body.clientHeight;

	var newScrollLeft = document.body.scrollLeft;
	var newScrollTop = document.body.scrollTop;

	var winwidth = clientWidth - margin;
	var winheight = clientHeight - margin;

	var widthRatio = winwidth / width;
	var heightRatio = winheight / height;

	if (widthRatio < heightRatio)
	{
		width = zoomFactor * winwidth;
		height = width / this.origWH;
	}
	else
	{
		height = zoomFactor * winheight;
		width = height * this.origWH;
	}

	this.s.pixelWidth = Math.max(width,1);
	this.s.pixelHeight = Math.max(height,1);

	this.sizeLast = size;

	var centerX = (zoomFactor / viewMgr.zoomFactor) * (newScrollLeft + (clientWidth / 2) - this.s.posLeft);
	var centerY = (zoomFactor / viewMgr.zoomFactor) * (newScrollTop + (clientHeight / 2) - this.s.posTop);

	viewMgr.zoomFactor = zoomFactor;

	if (width <= clientWidth)
	{
		this.s.posLeft = Math.max( 0, (clientWidth / 2) - (width / 2));
	}
	else
	{
		var left = centerX - (clientWidth / 2);
		if ( left >= 0 )
		{
			this.s.posLeft = 0;
			newScrollLeft = left;
		}
		else
		{
			this.s.posLeft = -left;
			newScrollLeft = 0;
		}
	}

	if (height <= clientHeight)
	{
		this.s.posTop = Math.max( 0, (clientHeight / 2) - (height / 2));
	}
	else
	{
		var top = centerY - (clientHeight / 2);
		if ( top >= 0 )
		{
			this.s.posTop = 0;
			newScrollTop = top;
		}
		else
		{
			this.s.posTop = -top;
			newScrollTop = 0;
		}
	}

	window.scrollTo(newScrollLeft, newScrollTop);

	this.s.visibility = "visible";

	var newXOffsetPercent = document.body.scrollLeft / this.s.pixelWidth;
	var newYOffsetPercent = document.body.scrollTop / this.s.pixelHeight;
	var newWidthPercent = document.body.clientWidth / this.s.pixelWidth;
	var newHeightPercent = document.body.clientHeight / this.s.pixelHeight;

	if (viewMgr.viewChanged)
	{
		viewMgr.viewChanged (newXOffsetPercent, newYOffsetPercent, newWidthPercent, newHeightPercent);
	}

	if (viewMgr.PostZoomProcessing)
	{
		viewMgr.PostZoomProcessing(size);
	}
}

function VMLSetView (xOffsetPercent, yOffsetPercent)
{
	var leftPixelOffset = xOffsetPercent * this.s.pixelWidth;
	var topPixelOffset = yOffsetPercent * this.s.pixelHeight;

	window.scrollTo (leftPixelOffset - this.s.posLeft, topPixelOffset - this.s.posTop);

	if (viewMgr.PostSetViewProcessing)
	{
		viewMgr.PostSetViewProcessing();
	}
}

function VMLOnResize ()
{
	if (viewMgr.zoomLast == 100)
	{
		viewMgr.Zoom(100);
	}

	if (viewMgr.viewChanged)
	{
		var image = document.all['ConvertedImage'];

		var newWidthPercent = document.body.clientWidth / image.style.pixelWidth;
		var newHeightPercent = document.body.clientHeight / image.style.pixelHeight;

		viewMgr.viewChanged (null, null, newWidthPercent, newHeightPercent);
	}
}

function VMLOnScroll ()
{
	if (viewMgr.viewChanged)
	{
		var image = document.all['ConvertedImage'];

		var newXOffsetPercent = document.body.scrollLeft / image.style.pixelWidth;
		var newYOffsetPercent = document.body.scrollTop / image.style.pixelHeight;

		viewMgr.viewChanged (newXOffsetPercent, newYOffsetPercent, null, null);
	}
}




// SIG // Begin signature block
// SIG // MIIpgwYJKoZIhvcNAQcCoIIpdDCCKXACAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // ZBBGEFvEA5cXRV4rXg1QYVK9H+q05iKRO9u7TfnowQmg
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
// SIG // xmQSypcC8rO8KRYarzsxghsFMIIbAQIBATB2MF8xCzAJ
// SIG // BgNVBAYTAlVTMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
// SIG // cG9yYXRpb24xMDAuBgNVBAMTJ01pY3Jvc29mdCBXaW5k
// SIG // b3dzIENvZGUgU2lnbmluZyBQQ0EgMjAyNAITMwAAAIe8
// SIG // gm6Foa5TqAAAAAAAhzANBglghkgBZQMEAgEFAKCBrjAZ
// SIG // BgkqhkiG9w0BCQMxDAYKKwYBBAGCNwIBBDAcBgorBgEE
// SIG // AYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0B
// SIG // CQQxIgQgzyyPjyEiJiPxw3XJ3HDjBly1b8tac+P4ldxj
// SIG // yhy7d/IwQgYKKwYBBAGCNwIBDDE0MDKgFIASAE0AaQBj
// SIG // AHIAbwBzAG8AZgB0oRqAGGh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbTANBgkqhkiG9w0BAQEFAASCAgBjrpyKsB4U
// SIG // 4+vYJDIfd+WJ0Tz3ffSVh8tNLczuAf7yQGQ3kcuxJhzo
// SIG // 6E7MZaGzedDSC4E4uDJkOU11kRsdEci9zzDPXUo3btea
// SIG // u+tcEks2D++nrYAxBqXZPHwqvTtWpdE+Ta245UjU25MG
// SIG // OFdDS11Ffbj63elXHSc6/jmoEn792tt819VVXMLFrtzw
// SIG // C8+ohdH0HBQl5OgglJaHYE3ddc9qrl1MfpXNdyWZtU+J
// SIG // Vj1+3xX4kgez1gChYNHNHyriYHfxLb2fcrc+Fgy1+rMp
// SIG // /ZUiw8MXiqejJzk8XGEe2HrMGr0biy45yBwB1tjqIgtp
// SIG // DmtijqtrGcj5pu5I7Q3EKldUEM6aRSl2SqHW+TK1YXQz
// SIG // VemGhxC8nJPPEQXXRomDTffcnRNmOvmEi5nxHadmCanu
// SIG // w/V7DV5+2bF2fgIfu9+lqhNiM0WAWsL/QnIGUArWwOyF
// SIG // mT+7REdwSkErZUV512BlelgpaD1d7l7XM5pmRvTY+lbV
// SIG // TleyVz7/LLXmK7kqr6ub86rN+4uPDpL9v6Khw3FBTtZI
// SIG // zrcQOw/SlZJq4v6ppDSW1IVgoAbf8YXSjQXY3Efex9A1
// SIG // b7rbKt90raD8HuhVRhAeTXI4p/Y+a7ksVUW0y2n25LAO
// SIG // nGGc5Q8khfFPOKqm1dTi49IsPQzzQcA4wOGP4EiJFnOM
// SIG // aES5Y6mvNR4v06GCF68wgherBgorBgEEAYI3AwMBMYIX
// SIG // mzCCF5cGCSqGSIb3DQEHAqCCF4gwgheEAgEDMQ8wDQYJ
// SIG // YIZIAWUDBAIBBQAwggFZBgsqhkiG9w0BCRABBKCCAUgE
// SIG // ggFEMIIBQAIBAQYKKwYBBAGEWQoDATAxMA0GCWCGSAFl
// SIG // AwQCAQUABCBL1BNawYSeW+eUGl2f1rsWGugEYX26kr0z
// SIG // ldjBJhMfKQIGaKOoFurMGBIyMDI1MDgyMDE3MDQxMS4y
// SIG // N1owBIACAfSggdmkgdYwgdMxCzAJBgNVBAYTAlVTMRMw
// SIG // EQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
// SIG // b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRp
// SIG // b24xLTArBgNVBAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9w
// SIG // ZXJhdGlvbnMgTGltaXRlZDEnMCUGA1UECxMeblNoaWVs
// SIG // ZCBUU1MgRVNOOjMyMUEtMDVFMC1EOTQ3MSUwIwYDVQQD
// SIG // ExxNaWNyb3NvZnQgVGltZS1TdGFtcCBTZXJ2aWNloIIR
// SIG // /jCCBygwggUQoAMCAQICEzMAAAH4o6EmDAxASP4AAQAA
// SIG // AfgwDQYJKoZIhvcNAQELBQAwfDELMAkGA1UEBhMCVVMx
// SIG // EzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1Jl
// SIG // ZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
// SIG // dGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3Rh
// SIG // bXAgUENBIDIwMTAwHhcNMjQwNzI1MTgzMTA4WhcNMjUx
// SIG // MDIyMTgzMTA4WjCB0zELMAkGA1UEBhMCVVMxEzARBgNV
// SIG // BAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQx
// SIG // HjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEt
// SIG // MCsGA1UECxMkTWljcm9zb2Z0IElyZWxhbmQgT3BlcmF0
// SIG // aW9ucyBMaW1pdGVkMScwJQYDVQQLEx5uU2hpZWxkIFRT
// SIG // UyBFU046MzIxQS0wNUUwLUQ5NDcxJTAjBgNVBAMTHE1p
// SIG // Y3Jvc29mdCBUaW1lLVN0YW1wIFNlcnZpY2UwggIiMA0G
// SIG // CSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDFHbeldicP
// SIG // YG44N15ezYK79PmQoj5sDDxxu03nQKb8UCuNfIvhFOox
// SIG // 7qVpD8Kp4xPGByS9mvUmtbQyLgXXmvH9W94aEoGahvjk
// SIG // OY5xXnHLHuH1OTn00CXk80wBYoAhZ/bvRJYABbFBulUi
// SIG // GE9YKdVXei1W9qERp3ykyahJetPlns2TVGcHvQDZur0e
// SIG // TzAh4Le8G7ERfYTxfnQiAAezJpH2ugWrcSvNQQeVLxid
// SIG // Krfe6Lm4FysU5wU4Jkgu5UVVOASpKtfhSJfR62qLuNS0
// SIG // rKmAh+VplxXlwjlcj94LFjzAM2YGmuFgw2VjF2ZD1otE
// SIG // NxMpa111amcm3KXl7eAe5iiPzG4NDRdk3LsRJHAkgrTf
// SIG // 6tNmp9pjIzhdIrWzRpr6Y7r2+j82YnhH9/X4q5wE8njJ
// SIG // R1uolYzfEy8HAtjJy+KAj9YriSA+iDRQE1zNpDANVelx
// SIG // T5Mxw69Y/wcFaZYlAiZNkicAWK9epRoFujfAB881uxCm
// SIG // 800a7/XamDQXw78J1F+A8d86EhZDQPwAsJj4uyLBvNx6
// SIG // NutWXg31+fbA6DawNrxF82gPrXgjSkWPL+WrU2wGj1Xg
// SIG // ZkGKTNftmNYJGB3UUIFcal+kOKQeNDTlg6QBqR1YNPZs
// SIG // ZJpRkkZVi16kik9MCzWB3+9SiBx2IvnWjuyG4ciUHpBJ
// SIG // SJDbhdiFFttAIQIDAQABo4IBSTCCAUUwHQYDVR0OBBYE
// SIG // FL3OxnPPntCVPmeu3+iK0u/U5Du2MB8GA1UdIwQYMBaA
// SIG // FJ+nFV0AXmJdg/Tl0mWnG1M1GelyMF8GA1UdHwRYMFYw
// SIG // VKBSoFCGTmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9w
// SIG // a2lvcHMvY3JsL01pY3Jvc29mdCUyMFRpbWUtU3RhbXAl
// SIG // MjBQQ0ElMjAyMDEwKDEpLmNybDBsBggrBgEFBQcBAQRg
// SIG // MF4wXAYIKwYBBQUHMAKGUGh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbS9wa2lvcHMvY2VydHMvTWljcm9zb2Z0JTIw
// SIG // VGltZS1TdGFtcCUyMFBDQSUyMDIwMTAoMSkuY3J0MAwG
// SIG // A1UdEwEB/wQCMAAwFgYDVR0lAQH/BAwwCgYIKwYBBQUH
// SIG // AwgwDgYDVR0PAQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUA
// SIG // A4ICAQBh+TwbPOkRWcaXvLqhejK0JvjYfHpM4DT52RoE
// SIG // jfp+0MT20u5tRr/ExscHmtw2JGEUdn3dF590+lzj4UXQ
// SIG // MCXmU/zEoA77b3dFY8oMU4UjGC1ljTy3wP1xJCmAZTPL
// SIG // DeURNl5s0sQDXsD8JOkDYX26HyPzgrKB4RuP5uJ1YOIR
// SIG // 9rKgfYDn/nLAknEi4vMVUdpy9bFIIqgX2GVKtlIbl9dZ
// SIG // LedqZ/i23r3RRPoAbJYsVZ7z3lygU/Gb+bRQgyOOn1VE
// SIG // Ufudvc2DZDiA9L0TllMxnqcCWZSJwOPQ1cCzbBC5Cudi
// SIG // dtEAn8NBbfmoujsNrD0Cwi2qMWFsxwbryANziPvgvYph
// SIG // 7/aCgEcvDNKflQN+1LUdkjRlGyqY0cjRNm+9RZf1qObp
// SIG // J8sFMS2hOjqAs5fRQP/2uuEaN2SILDhLBTmiwKWCqCI0
// SIG // wrmd2TaDEWUNccLIunmoHoGg+lzzZGE7TILOg/2C/vO/
// SIG // YShwBYSyoTn7Raa7m5quZ+9zOIt9TVJjbjQ5lbyV3ixL
// SIG // x+fJuf+MMyYUCFrNXXMfRARFYSx8tKnCQ5doiZY0UnmW
// SIG // Zyd/VVObpyZ9qxJxi0SWmOpn0aigKaTVcUCk5E+z887j
// SIG // chwWY9HBqC3TSJBLD6sF4gfTQpCr4UlP/rZIHvSD2D9H
// SIG // xNLqTpv/C3ZRaGqtb5DyXDpfOB7H9jCCB3EwggVZoAMC
// SIG // AQICEzMAAAAVxedrngKbSZkAAAAAABUwDQYJKoZIhvcN
// SIG // AQELBQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpX
// SIG // YXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYD
// SIG // VQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xMjAwBgNV
// SIG // BAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1
// SIG // dGhvcml0eSAyMDEwMB4XDTIxMDkzMDE4MjIyNVoXDTMw
// SIG // MDkzMDE4MzIyNVowfDELMAkGA1UEBhMCVVMxEzARBgNV
// SIG // BAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQx
// SIG // HjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEm
// SIG // MCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENB
// SIG // IDIwMTAwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIK
// SIG // AoICAQDk4aZM57RyIQt5osvXJHm9DtWC0/3unAcH0qls
// SIG // TnXIyjVX9gF/bErg4r25PhdgM/9cT8dm95VTcVrifkpa
// SIG // /rg2Z4VGIwy1jRPPdzLAEBjoYH1qUoNEt6aORmsHFPPF
// SIG // dvWGUNzBRMhxXFExN6AKOG6N7dcP2CZTfDlhAnrEqv1y
// SIG // aa8dq6z2Nr41JmTamDu6GnszrYBbfowQHJ1S/rboYiXc
// SIG // ag/PXfT+jlPP1uyFVk3v3byNpOORj7I5LFGc6XBpDco2
// SIG // LXCOMcg1KL3jtIckw+DJj361VI/c+gVVmG1oO5pGve2k
// SIG // rnopN6zL64NF50ZuyjLVwIYwXE8s4mKyzbnijYjklqwB
// SIG // Sru+cakXW2dg3viSkR4dPf0gz3N9QZpGdc3EXzTdEonW
// SIG // /aUgfX782Z5F37ZyL9t9X4C626p+Nuw2TPYrbqgSUei/
// SIG // BQOj0XOmTTd0lBw0gg/wEPK3Rxjtp+iZfD9M269ewvPV
// SIG // 2HM9Q07BMzlMjgK8QmguEOqEUUbi0b1qGFphAXPKZ6Je
// SIG // 1yh2AuIzGHLXpyDwwvoSCtdjbwzJNmSLW6CmgyFdXzB0
// SIG // kZSU2LlQ+QuJYfM2BjUYhEfb3BvR/bLUHMVr9lxSUV0S
// SIG // 2yW6r1AFemzFER1y7435UsSFF5PAPBXbGjfHCBUYP3ir
// SIG // Rbb1Hode2o+eFnJpxq57t7c+auIurQIDAQABo4IB3TCC
// SIG // AdkwEgYJKwYBBAGCNxUBBAUCAwEAATAjBgkrBgEEAYI3
// SIG // FQIEFgQUKqdS/mTEmr6CkTxGNSnPEP8vBO4wHQYDVR0O
// SIG // BBYEFJ+nFV0AXmJdg/Tl0mWnG1M1GelyMFwGA1UdIARV
// SIG // MFMwUQYMKwYBBAGCN0yDfQEBMEEwPwYIKwYBBQUHAgEW
// SIG // M2h0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMv
// SIG // RG9jcy9SZXBvc2l0b3J5Lmh0bTATBgNVHSUEDDAKBggr
// SIG // BgEFBQcDCDAZBgkrBgEEAYI3FAIEDB4KAFMAdQBiAEMA
// SIG // QTALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAf
// SIG // BgNVHSMEGDAWgBTV9lbLj+iiXGJo0T2UkFvXzpoYxDBW
// SIG // BgNVHR8ETzBNMEugSaBHhkVodHRwOi8vY3JsLm1pY3Jv
// SIG // c29mdC5jb20vcGtpL2NybC9wcm9kdWN0cy9NaWNSb29D
// SIG // ZXJBdXRfMjAxMC0wNi0yMy5jcmwwWgYIKwYBBQUHAQEE
// SIG // TjBMMEoGCCsGAQUFBzAChj5odHRwOi8vd3d3Lm1pY3Jv
// SIG // c29mdC5jb20vcGtpL2NlcnRzL01pY1Jvb0NlckF1dF8y
// SIG // MDEwLTA2LTIzLmNydDANBgkqhkiG9w0BAQsFAAOCAgEA
// SIG // nVV9/Cqt4SwfZwExJFvhnnJL/Klv6lwUtj5OR2R4sQaT
// SIG // lz0xM7U518JxNj/aZGx80HU5bbsPMeTCj/ts0aGUGCLu
// SIG // 6WZnOlNN3Zi6th542DYunKmCVgADsAW+iehp4LoJ7nvf
// SIG // am++Kctu2D9IdQHZGN5tggz1bSNU5HhTdSRXud2f8449
// SIG // xvNo32X2pFaq95W2KFUn0CS9QKC/GbYSEhFdPSfgQJY4
// SIG // rPf5KYnDvBewVIVCs/wMnosZiefwC2qBwoEZQhlSdYo2
// SIG // wh3DYXMuLGt7bj8sCXgU6ZGyqVvfSaN0DLzskYDSPeZK
// SIG // PmY7T7uG+jIa2Zb0j/aRAfbOxnT99kxybxCrdTDFNLB6
// SIG // 2FD+CljdQDzHVG2dY3RILLFORy3BFARxv2T5JL5zbcqO
// SIG // Cb2zAVdJVGTZc9d/HltEAY5aGZFrDZ+kKNxnGSgkujhL
// SIG // mm77IVRrakURR6nxt67I6IleT53S0Ex2tVdUCbFpAUR+
// SIG // fKFhbHP+CrvsQWY9af3LwUFJfn6Tvsv4O+S3Fb+0zj6l
// SIG // MVGEvL8CwYKiexcdFYmNcP7ntdAoGokLjzbaukz5m/8K
// SIG // 6TT4JDVnK+ANuOaMmdbhIurwJ0I9JZTmdHRbatGePu1+
// SIG // oDEzfbzL6Xu/OHBE0ZDxyKs6ijoIYn/ZcGNTTY3ugm2l
// SIG // BRDBcQZqELQdVTNYs6FwZvKhggNZMIICQQIBATCCAQGh
// SIG // gdmkgdYwgdMxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpX
// SIG // YXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYD
// SIG // VQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xLTArBgNV
// SIG // BAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9wZXJhdGlvbnMg
// SIG // TGltaXRlZDEnMCUGA1UECxMeblNoaWVsZCBUU1MgRVNO
// SIG // OjMyMUEtMDVFMC1EOTQ3MSUwIwYDVQQDExxNaWNyb3Nv
// SIG // ZnQgVGltZS1TdGFtcCBTZXJ2aWNloiMKAQEwBwYFKw4D
// SIG // AhoDFQC2RC395tZJDkOcb5opHM8QsIUT0aCBgzCBgKR+
// SIG // MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
// SIG // dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
// SIG // aWNyb3NvZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1p
// SIG // Y3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAyMDEwMA0GCSqG
// SIG // SIb3DQEBCwUAAgUA7FAgqDAiGA8yMDI1MDgyMDEwMjMz
// SIG // NloYDzIwMjUwODIxMTAyMzM2WjB3MD0GCisGAQQBhFkK
// SIG // BAExLzAtMAoCBQDsUCCoAgEAMAoCAQACAgHGAgH/MAcC
// SIG // AQACAhMJMAoCBQDsUXIoAgEAMDYGCisGAQQBhFkKBAIx
// SIG // KDAmMAwGCisGAQQBhFkKAwKgCjAIAgEAAgMHoSChCjAI
// SIG // AgEAAgMBhqAwDQYJKoZIhvcNAQELBQADggEBAHlXkfQt
// SIG // LOF3XCiPftOrh06S2E9m2K3a76wPqI0M0jBUs7Jzt6PR
// SIG // +dj7Eq1Whj4lgU+BVzoHUIk0nTp48/DQ0Ywn60o8Yjpt
// SIG // VvHoVS690VjuSonMxSfPpTaF5pnSDYu5ldFzTmICOlBL
// SIG // QXe3wL37xDoBW2J/TovhFrMRNvP7TWiJM1n1glEzgnPN
// SIG // EVOpsdMZuDReUgN948XkS26SxEj6fBic1pj7s6D8+718
// SIG // WH5NxuCtxEjBDvBAXqed857fZcVuoqWnJQG7dk8iQoS/
// SIG // dUjtA55nM5JfT/MvSetwinq7ogSiSGx1AyFWSXD68Ep6
// SIG // MtKF/YTddIvYjbqfft6OEvMtFg8xggQNMIIECQIBATCB
// SIG // kzB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGlu
// SIG // Z3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMV
// SIG // TWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1N
// SIG // aWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMAITMwAA
// SIG // AfijoSYMDEBI/gABAAAB+DANBglghkgBZQMEAgEFAKCC
// SIG // AUowGgYJKoZIhvcNAQkDMQ0GCyqGSIb3DQEJEAEEMC8G
// SIG // CSqGSIb3DQEJBDEiBCB8jRy7Kz3XTKQ3FtVjT5MCZdWI
// SIG // snMW5fY4qn8HVhEUMjCB+gYLKoZIhvcNAQkQAi8xgeow
// SIG // gecwgeQwgb0EIO/MM/JfDVSQBQVi3xtHhR2Mz3RC/nGd
// SIG // VqIoPcjRnPdaMIGYMIGApH4wfDELMAkGA1UEBhMCVVMx
// SIG // EzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1Jl
// SIG // ZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
// SIG // dGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3Rh
// SIG // bXAgUENBIDIwMTACEzMAAAH4o6EmDAxASP4AAQAAAfgw
// SIG // IgQgZv7g7+X1Fa3VnLFPBdQ7NwUhXeNFJ9lsz3s9vV6l
// SIG // 7kwwDQYJKoZIhvcNAQELBQAEggIAGBko4RDa5dowFzSV
// SIG // x3Yvd+XffLR3CUDn1rjgaevrGV2pPFTwKKWS12ZF8mlK
// SIG // dSd7Z5OWJ77zhz2s2xOrK8tEjdI4vimZx4S6DmKVWR+C
// SIG // +6b/PkqQB+4YFYWM1a0cp/gD51RhI1O9fCITR2EKdjvK
// SIG // IGIoaxNFKWSCbkxwsjWJdS3Q1V6mz04pwFhbuppDaDdI
// SIG // ICYl557ApD+LWgH4L1FuH9A3UO3MDO4aNnGvruhY8/07
// SIG // UZ/eTsMoD71oT5D5qf2qa25S9AC+MglXBwkAif6K57zt
// SIG // 82vBA63EsWLuMVm8QBpOqfyJKytgf5Fi5ItwBOgk4ywe
// SIG // PrMzUiiqysP3onpFQ4esOXk1e3P6zZN7fhQPCRGI+Om4
// SIG // HkUL2MgZ9BrfiDbV+Z2RjarRWwwTCHwwEIHRmUf5RbB9
// SIG // HaARIh053qAhJdkejpNqEIjZSalX7GDSExfE31xfvHI8
// SIG // Qvnz2Ujo7fNecgiYFJTuLgOJk0fn/yWBI00Lg+nJbg2R
// SIG // foBvgcXrIxISib8QW64T5YksYQr+bCtcb3T2UgQ/m/Se
// SIG // iiNne2Cu+fgCIeF1sulchy6SYJUVwar6fONtPUhfkHkW
// SIG // 0KI2l8RUD8IbDREjpDIGoIPxiq1dfE8jtsfxvPfT1An7
// SIG // bqFJWIiscGu1GUTsqVsCHfll4apHotznkacbxRroKE3Z
// SIG // 73HC+Tk=
// SIG // End signature block
