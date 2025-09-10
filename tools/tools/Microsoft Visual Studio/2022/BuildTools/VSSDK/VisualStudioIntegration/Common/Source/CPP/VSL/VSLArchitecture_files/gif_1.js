function ViewMgrSetRasterLocation(pageID, shapeID, pinX, pinY)
{
	clickMenu ();

	var rasterImage = document.images("RasterImage");

	var imageLeft = 0;
	var imageRight = imageLeft + rasterImage.offsetWidth;
	var imageTop = 0;
	var imageBottom = imageTop + rasterImage.offsetHeight;
	
	var xLong = parent.ConvertXorYCoordinate(pinX, viewMgr.visBBoxLeft, viewMgr.visBBoxRight, imageLeft, imageRight, 0);
	var yLong = parent.ConvertXorYCoordinate(pinY, viewMgr.visBBoxBottom, viewMgr.visBBoxTop, imageTop, imageBottom, 1);
	
	var pixelWidth = document.body.scrollWidth;
	var pixelHeight = document.body.scrollHeight;

	var clientWidth = document.body.clientWidth;
	var clientHeight = document.body.clientHeight;
	var halfClientWidth = clientWidth;
	var halfClientHeight = clientHeight;

	xLong = xLong + rasterImage.offsetLeft;
	yLong = yLong + rasterImage.offsetTop;
	var xScrollAmount = 0;
	var yScrollAmount = 0;

	var xPrevScrollAmount = document.body.scrollLeft;
	var yPrevScrollAmount = document.body.scrollTop;

	var arrowHalfWidth = arrowdiv.clientWidth / 2;
	var arrowHeight = arrowdiv.clientHeight;

	if ((xLong - arrowHalfWidth) < xPrevScrollAmount)
	{
		// X off left of screen.
		document.body.scrollLeft = xLong - arrowHalfWidth;
	}
	else if ((xLong + arrowHalfWidth) > (clientWidth + xPrevScrollAmount))
	{
		// X off right of screen. 
		document.body.scrollLeft = xLong - clientWidth + xPrevScrollAmount + arrowHalfWidth;
	}

	if (yLong < yPrevScrollAmount)
	{
		// Y off top of screen.
		document.body.scrollTop = yLong;
	}
	else if ((yLong + arrowHeight) > (clientHeight + yPrevScrollAmount))
	{
		// Y off bottom of screen. 
		document.body.scrollTop = yLong - clientHeight + yPrevScrollAmount + arrowHeight;
	}

	arrowdiv.style.posLeft = xLong - arrowHalfWidth;
	arrowdiv.style.posTop = yLong;
	arrowdiv.style.visibility = "visible";

	setTimeout( "parent.hideObject(arrowdiv)", 200 );
	setTimeout( "parent.showObject(arrowdiv)", 400 );
	setTimeout( "parent.hideObject(arrowdiv)", 600 );
	setTimeout( "parent.showObject(arrowdiv)", 800 );
	setTimeout( "parent.hideObject(arrowdiv)", 1000 );
	setTimeout( "parent.showObject(arrowdiv)", 1200 );
	setTimeout( "parent.hideObject(arrowdiv)", 1400 );
	setTimeout( "parent.showObject(arrowdiv)", 1600 );
	setTimeout( "parent.hideObject(arrowdiv)", 1800 );
}


// SIG // Begin signature block
// SIG // MIIphAYJKoZIhvcNAQcCoIIpdTCCKXECAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // Unk2fEIsxlMp5AC8CkzC23XZUZJsx7XSRB5ysbh8/f6g
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
// SIG // xmQSypcC8rO8KRYarzsxghsGMIIbAgIBATB2MF8xCzAJ
// SIG // BgNVBAYTAlVTMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
// SIG // cG9yYXRpb24xMDAuBgNVBAMTJ01pY3Jvc29mdCBXaW5k
// SIG // b3dzIENvZGUgU2lnbmluZyBQQ0EgMjAyNAITMwAAAIe8
// SIG // gm6Foa5TqAAAAAAAhzANBglghkgBZQMEAgEFAKCBrjAZ
// SIG // BgkqhkiG9w0BCQMxDAYKKwYBBAGCNwIBBDAcBgorBgEE
// SIG // AYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0B
// SIG // CQQxIgQgxVN97CeYWQ1DRrYAoIjBCeGAqdS0Lv0nnMG+
// SIG // 9T+YktgwQgYKKwYBBAGCNwIBDDE0MDKgFIASAE0AaQBj
// SIG // AHIAbwBzAG8AZgB0oRqAGGh0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbTANBgkqhkiG9w0BAQEFAASCAgBajRB2QdeL
// SIG // d+ErGVZul8/Y0+zymDleoahlThLc5r20gglNwGeu8vI8
// SIG // edrwc5DuHX0w98kCssRRN1+nLKzSAeWUusg+DumHLjrC
// SIG // GrU+4sWCCknU2lrp0bbsbzm6wKuEfPfA+uheTfiRSMRn
// SIG // ffikHe6+iSg+Iq30aK0NW+aCvS/vWXOJdn/ziWAMQ21b
// SIG // 2C/xjphORpONyx1YLHyhT7YFVErS3cTySMPS2V6XlRv1
// SIG // P4bCyejbBVEVxUEH0dOMzLV2uDmH8q8tyHLR3SDldUub
// SIG // Bcdsg2/b4QnLj5GAh31a7oPYZ6M2r0vWtQ7dw+T1fdW/
// SIG // 3wXZIBdcff7RTih5laICtdskkJj/6yQSpKiBrae/U1DJ
// SIG // cwecjsmzgzc6qGF1olJNtYohMQKTHROsS++MG3tnkPsb
// SIG // ztdwWvG7VJev1cKwupBn0xQFbDcmF2K+jIzRk96tiPv6
// SIG // /F6gRJTMq01+RkCXcCAyOj0fAGl4Z1i6mIfHkN5LMqL+
// SIG // qyl+GPlmQpHeODIN6nMRJML+kSQ9SY6Wk6bzJchyD6Up
// SIG // k2wWPkDIzA6DazWIEZ4H56kBN5Jv6I7+OtdQP/ftFpZQ
// SIG // WruEcOOJx+oe2ik0wCTafmbBYnwVLGC6ZT2d/q2ol352
// SIG // 3YM6tV18ySxXU8qJ/7CAjJ98R1L8PR1OE0JVL4QCoKxE
// SIG // bOmrDQt+DgObR6GCF7AwghesBgorBgEEAYI3AwMBMYIX
// SIG // nDCCF5gGCSqGSIb3DQEHAqCCF4kwgheFAgEDMQ8wDQYJ
// SIG // YIZIAWUDBAIBBQAwggFaBgsqhkiG9w0BCRABBKCCAUkE
// SIG // ggFFMIIBQQIBAQYKKwYBBAGEWQoDATAxMA0GCWCGSAFl
// SIG // AwQCAQUABCB6t16FMPGZf8NHgMH2jHTqneLASFgx77An
// SIG // B8niMPx/pQIGaKOtKEQnGBMyMDI1MDgyMDE3MDYxMi44
// SIG // NDNaMASAAgH0oIHZpIHWMIHTMQswCQYDVQQGEwJVUzET
// SIG // MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
// SIG // bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
// SIG // aW9uMS0wKwYDVQQLEyRNaWNyb3NvZnQgSXJlbGFuZCBP
// SIG // cGVyYXRpb25zIExpbWl0ZWQxJzAlBgNVBAsTHm5TaGll
// SIG // bGQgVFNTIEVTTjo0QzFBLTA1RTAtRDk0NzElMCMGA1UE
// SIG // AxMcTWljcm9zb2Z0IFRpbWUtU3RhbXAgU2VydmljZaCC
// SIG // Ef4wggcoMIIFEKADAgECAhMzAAAB/xI4fPfBZdahAAEA
// SIG // AAH/MA0GCSqGSIb3DQEBCwUAMHwxCzAJBgNVBAYTAlVT
// SIG // MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
// SIG // ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9y
// SIG // YXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0
// SIG // YW1wIFBDQSAyMDEwMB4XDTI0MDcyNTE4MzExOVoXDTI1
// SIG // MTAyMjE4MzExOVowgdMxCzAJBgNVBAYTAlVTMRMwEQYD
// SIG // VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25k
// SIG // MR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24x
// SIG // LTArBgNVBAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9wZXJh
// SIG // dGlvbnMgTGltaXRlZDEnMCUGA1UECxMeblNoaWVsZCBU
// SIG // U1MgRVNOOjRDMUEtMDVFMC1EOTQ3MSUwIwYDVQQDExxN
// SIG // aWNyb3NvZnQgVGltZS1TdGFtcCBTZXJ2aWNlMIICIjAN
// SIG // BgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAyeiV0pB7
// SIG // bg8/qc/mkiDdJXnzJWPYgk9mTGeI3pzQpsyrRJREWcKY
// SIG // Hd/9db+g3z4dU4VCkAZEXqvkxP5QNTtBG5Ipexpph4Ph
// SIG // biJKwvX+US4KkSFhf1wflDAY1tu9CQqhhxfHFV7vhtmq
// SIG // HLCCmDxhZPmCBh9/XfFJQIUwVZR8RtUkgzmN9bmWiYgf
// SIG // X0R+bDAnncUdtp1xjGmCpdBMygk/K0h3bUTUzQHb4kPf
// SIG // 2ylkKPoWFYn2GNYgWw8PGBUO0vTMKjYD6pLeBP0hZDh5
// SIG // P3f4xhGLm6x98xuIQp/RFnzBbgthySXGl+NT1cZAqGyE
// SIG // hT7L0SdR7qQlv5pwDNerbK3YSEDKk3sDh9S60hLJNqP7
// SIG // 1iHKkG175HAyg6zmE5p3fONr9/fIEpPAlC8YisxXaGX4
// SIG // RpDBYVKpGj0FCZwisiZsxm0X9w6ZSk8OOXf8JxTYWIqf
// SIG // RuWzdUir0Z3jiOOtaDq7XdypB4gZrhr90KcPTDRwvy60
// SIG // zrQca/1D1J7PQJAJObbiaboi12usV8axtlT/dCePC4nd
// SIG // cFcar1v+fnClhs9u3Fn6LkHDRZfNzhXgLDEwb6dA4y3s
// SIG // 6G+gQ35o90j2i6amaa8JsV/cCF+iDSGzAxZY1sQ1mrdM
// SIG // mzxfWzXN6sPJMy49tdsWTIgZWVOSS9uUHhSYkbgMxnLe
// SIG // iKXeB5MB9QMcOScCAwEAAaOCAUkwggFFMB0GA1UdDgQW
// SIG // BBTD+pXk/rT/d7E/0QE7hH0wz+6UYTAfBgNVHSMEGDAW
// SIG // gBSfpxVdAF5iXYP05dJlpxtTNRnpcjBfBgNVHR8EWDBW
// SIG // MFSgUqBQhk5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20v
// SIG // cGtpb3BzL2NybC9NaWNyb3NvZnQlMjBUaW1lLVN0YW1w
// SIG // JTIwUENBJTIwMjAxMCgxKS5jcmwwbAYIKwYBBQUHAQEE
// SIG // YDBeMFwGCCsGAQUFBzAChlBodHRwOi8vd3d3Lm1pY3Jv
// SIG // c29mdC5jb20vcGtpb3BzL2NlcnRzL01pY3Jvc29mdCUy
// SIG // MFRpbWUtU3RhbXAlMjBQQ0ElMjAyMDEwKDEpLmNydDAM
// SIG // BgNVHRMBAf8EAjAAMBYGA1UdJQEB/wQMMAoGCCsGAQUF
// SIG // BwMIMA4GA1UdDwEB/wQEAwIHgDANBgkqhkiG9w0BAQsF
// SIG // AAOCAgEAOSNN5MpLiyunm866frWIi0hdazKNLgRp3WZP
// SIG // fhYgPC3K/DNMzLliYQUAp6WtgolIrativXjOG1lIjayG
// SIG // 9r6ew4H1n5XZdDfJ12DLjopap5e1iU/Yk0eutPyfOiev
// SIG // fbsIzTk/G51+uiUJk772nVzau6hI2KGyGBJOvAbAVFR0
// SIG // g8ppZwLghT4z3mkGZjq/O4Z/PcmVGtjGps2TCtI4rZjP
// SIG // NW8O4c/4aJRmYQ/NdW91JRrOXRpyXrTKUPe3kN8N56jp
// SIG // l9kotLhdvd89RbOsJNf2XzqbAV7XjV4caCglA2btzDxc
// SIG // yffwXhLu9HMU3dLYTAI91gTNUF7BA9q1EvSlCKKlN8N1
// SIG // 0Y4iU0nyIkfpRxYyAbRyq5QPYPJHGA0Ty0PD83aCt79R
// SIG // a0IdDIMSuwXlpUnyIyxwrDylgfOGyysWBwQ/js249bqQ
// SIG // OYPdpyOdgRe8tXdGrgDoBeuVOK+cRClXpimNYwr61oZ2
// SIG // /kPMzVrzRUYMkBXe9WqdSezh8tytuulYYcRK95qihF0i
// SIG // rQs6/WOQJltQX79lzFXE9FFln9Mix0as+C4HPzd+S0bB
// SIG // N3A3XRROwAv016ICuT8hY1InyW7jwVmN+OkQ1zei66Lr
// SIG // U5RtAz0nTxx5OePyjnTaItTSY4OGuGU1SXaH49JSP3t8
// SIG // yGYA/vorbW4VneeD721FgwaJToHFkOIwggdxMIIFWaAD
// SIG // AgECAhMzAAAAFcXna54Cm0mZAAAAAAAVMA0GCSqGSIb3
// SIG // DQEBCwUAMIGIMQswCQYDVQQGEwJVUzETMBEGA1UECBMK
// SIG // V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwG
// SIG // A1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTIwMAYD
// SIG // VQQDEylNaWNyb3NvZnQgUm9vdCBDZXJ0aWZpY2F0ZSBB
// SIG // dXRob3JpdHkgMjAxMDAeFw0yMTA5MzAxODIyMjVaFw0z
// SIG // MDA5MzAxODMyMjVaMHwxCzAJBgNVBAYTAlVTMRMwEQYD
// SIG // VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25k
// SIG // MR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24x
// SIG // JjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBD
// SIG // QSAyMDEwMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIIC
// SIG // CgKCAgEA5OGmTOe0ciELeaLL1yR5vQ7VgtP97pwHB9Kp
// SIG // bE51yMo1V/YBf2xK4OK9uT4XYDP/XE/HZveVU3Fa4n5K
// SIG // Wv64NmeFRiMMtY0Tz3cywBAY6GB9alKDRLemjkZrBxTz
// SIG // xXb1hlDcwUTIcVxRMTegCjhuje3XD9gmU3w5YQJ6xKr9
// SIG // cmmvHaus9ja+NSZk2pg7uhp7M62AW36MEBydUv626GIl
// SIG // 3GoPz130/o5Tz9bshVZN7928jaTjkY+yOSxRnOlwaQ3K
// SIG // Ni1wjjHINSi947SHJMPgyY9+tVSP3PoFVZhtaDuaRr3t
// SIG // pK56KTesy+uDRedGbsoy1cCGMFxPLOJiss254o2I5Jas
// SIG // AUq7vnGpF1tnYN74kpEeHT39IM9zfUGaRnXNxF803RKJ
// SIG // 1v2lIH1+/NmeRd+2ci/bfV+AutuqfjbsNkz2K26oElHo
// SIG // vwUDo9Fzpk03dJQcNIIP8BDyt0cY7afomXw/TNuvXsLz
// SIG // 1dhzPUNOwTM5TI4CvEJoLhDqhFFG4tG9ahhaYQFzymei
// SIG // XtcodgLiMxhy16cg8ML6EgrXY28MyTZki1ugpoMhXV8w
// SIG // dJGUlNi5UPkLiWHzNgY1GIRH29wb0f2y1BzFa/ZcUlFd
// SIG // Etsluq9QBXpsxREdcu+N+VLEhReTwDwV2xo3xwgVGD94
// SIG // q0W29R6HXtqPnhZyacaue7e3PmriLq0CAwEAAaOCAd0w
// SIG // ggHZMBIGCSsGAQQBgjcVAQQFAgMBAAEwIwYJKwYBBAGC
// SIG // NxUCBBYEFCqnUv5kxJq+gpE8RjUpzxD/LwTuMB0GA1Ud
// SIG // DgQWBBSfpxVdAF5iXYP05dJlpxtTNRnpcjBcBgNVHSAE
// SIG // VTBTMFEGDCsGAQQBgjdMg30BATBBMD8GCCsGAQUFBwIB
// SIG // FjNodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3Bz
// SIG // L0RvY3MvUmVwb3NpdG9yeS5odG0wEwYDVR0lBAwwCgYI
// SIG // KwYBBQUHAwgwGQYJKwYBBAGCNxQCBAweCgBTAHUAYgBD
// SIG // AEEwCwYDVR0PBAQDAgGGMA8GA1UdEwEB/wQFMAMBAf8w
// SIG // HwYDVR0jBBgwFoAU1fZWy4/oolxiaNE9lJBb186aGMQw
// SIG // VgYDVR0fBE8wTTBLoEmgR4ZFaHR0cDovL2NybC5taWNy
// SIG // b3NvZnQuY29tL3BraS9jcmwvcHJvZHVjdHMvTWljUm9v
// SIG // Q2VyQXV0XzIwMTAtMDYtMjMuY3JsMFoGCCsGAQUFBwEB
// SIG // BE4wTDBKBggrBgEFBQcwAoY+aHR0cDovL3d3dy5taWNy
// SIG // b3NvZnQuY29tL3BraS9jZXJ0cy9NaWNSb29DZXJBdXRf
// SIG // MjAxMC0wNi0yMy5jcnQwDQYJKoZIhvcNAQELBQADggIB
// SIG // AJ1VffwqreEsH2cBMSRb4Z5yS/ypb+pcFLY+TkdkeLEG
// SIG // k5c9MTO1OdfCcTY/2mRsfNB1OW27DzHkwo/7bNGhlBgi
// SIG // 7ulmZzpTTd2YurYeeNg2LpypglYAA7AFvonoaeC6Ce57
// SIG // 32pvvinLbtg/SHUB2RjebYIM9W0jVOR4U3UkV7ndn/OO
// SIG // PcbzaN9l9qRWqveVtihVJ9AkvUCgvxm2EhIRXT0n4ECW
// SIG // OKz3+SmJw7wXsFSFQrP8DJ6LGYnn8AtqgcKBGUIZUnWK
// SIG // NsIdw2FzLixre24/LAl4FOmRsqlb30mjdAy87JGA0j3m
// SIG // Sj5mO0+7hvoyGtmW9I/2kQH2zsZ0/fZMcm8Qq3UwxTSw
// SIG // ethQ/gpY3UA8x1RtnWN0SCyxTkctwRQEcb9k+SS+c23K
// SIG // jgm9swFXSVRk2XPXfx5bRAGOWhmRaw2fpCjcZxkoJLo4
// SIG // S5pu+yFUa2pFEUep8beuyOiJXk+d0tBMdrVXVAmxaQFE
// SIG // fnyhYWxz/gq77EFmPWn9y8FBSX5+k77L+DvktxW/tM4+
// SIG // pTFRhLy/AsGConsXHRWJjXD+57XQKBqJC4822rpM+Zv/
// SIG // Cuk0+CQ1ZyvgDbjmjJnW4SLq8CdCPSWU5nR0W2rRnj7t
// SIG // fqAxM328y+l7vzhwRNGQ8cirOoo6CGJ/2XBjU02N7oJt
// SIG // pQUQwXEGahC0HVUzWLOhcGbyoYIDWTCCAkECAQEwggEB
// SIG // oYHZpIHWMIHTMQswCQYDVQQGEwJVUzETMBEGA1UECBMK
// SIG // V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwG
// SIG // A1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMS0wKwYD
// SIG // VQQLEyRNaWNyb3NvZnQgSXJlbGFuZCBPcGVyYXRpb25z
// SIG // IExpbWl0ZWQxJzAlBgNVBAsTHm5TaGllbGQgVFNTIEVT
// SIG // Tjo0QzFBLTA1RTAtRDk0NzElMCMGA1UEAxMcTWljcm9z
// SIG // b2Z0IFRpbWUtU3RhbXAgU2VydmljZaIjCgEBMAcGBSsO
// SIG // AwIaAxUAqROMbMS8JcUlcnPkwRLFRPXFspmggYMwgYCk
// SIG // fjB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGlu
// SIG // Z3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMV
// SIG // TWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1N
// SIG // aWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMDANBgkq
// SIG // hkiG9w0BAQsFAAIFAOxQJbowIhgPMjAyNTA4MjAxMDQ1
// SIG // MTRaGA8yMDI1MDgyMTEwNDUxNFowdzA9BgorBgEEAYRZ
// SIG // CgQBMS8wLTAKAgUA7FAlugIBADAKAgEAAgIDKQIB/zAH
// SIG // AgEAAgIV2TAKAgUA7FF3OgIBADA2BgorBgEEAYRZCgQC
// SIG // MSgwJjAMBgorBgEEAYRZCgMCoAowCAIBAAIDB6EgoQow
// SIG // CAIBAAIDAYagMA0GCSqGSIb3DQEBCwUAA4IBAQAsY0R8
// SIG // WtW9CZapbFaO5TaT2WDmaK02XhM8TV3r4MmFVxHf8d6o
// SIG // T03Yknlt3KRGyDIgNrIWMRcxLLhxSuTxDxjgMvTpL97r
// SIG // XaEAS6Jrxwt48V6YWeqUAt6G+YbzokS/73RWZJXfFEON
// SIG // X6qepc4h4YGGz0blx0//zYYoN0iDZmFbLdM9Lv/kEQL8
// SIG // 5KkkQSzyxM2Gn1msIc8RkGUvYtFJtSk4z4P+ftxE+nwn
// SIG // 8xz1Odw1JHK4VxpAa06Vibj9spxCleYo8Y24SkQcOQ3b
// SIG // ScqGHEuzCufX09Wu5qgCOrHWgMw4uw0/cDJFIS4DOPNA
// SIG // /hFDQiP9YP1GMGxJ50uepsQV4qg5MYIEDTCCBAkCAQEw
// SIG // gZMwfDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hp
// SIG // bmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoT
// SIG // FU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMd
// SIG // TWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTACEzMA
// SIG // AAH/Ejh898Fl1qEAAQAAAf8wDQYJYIZIAWUDBAIBBQCg
// SIG // ggFKMBoGCSqGSIb3DQEJAzENBgsqhkiG9w0BCRABBDAv
// SIG // BgkqhkiG9w0BCQQxIgQgxBtzJyjXviepJz5cvaVaLoMs
// SIG // XssqaMMkt9a0hmszuGkwgfoGCyqGSIb3DQEJEAIvMYHq
// SIG // MIHnMIHkMIG9BCDkMu++yQJ3aaycIuMT6vA7JNuMaVOI
// SIG // 3qDjSEV8upyn/TCBmDCBgKR+MHwxCzAJBgNVBAYTAlVT
// SIG // MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
// SIG // ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9y
// SIG // YXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0
// SIG // YW1wIFBDQSAyMDEwAhMzAAAB/xI4fPfBZdahAAEAAAH/
// SIG // MCIEIAUHZyQED9Mtbw0kZ9LK7fUQ+1dsa4K4Or+2dwyN
// SIG // 6FzNMA0GCSqGSIb3DQEBCwUABIICAFf/rOL9OX5vfSwj
// SIG // TOvkqAL6JyOtVU5WkEaEdgYVYIpIhmEsYGw5x2FbeiV8
// SIG // 60ZmdB2goIvRwN4kYIln+CvPtHp9UyNqc44Xm/L5qTFC
// SIG // gQJX6vZcAlWeOX9y8kDjHry7w4l4Rh+GJCaq8PAlOTAY
// SIG // EzFrzKJKz0RNVQtmnDgCXNsZzvfzZsFS9a+jncPs8fKK
// SIG // 2R8iTCqb6KqSj0W3WyGS9CK/CwPqVS+m8U2LlfIfccKE
// SIG // Z7lN6UoKbiwgervhMni7Fze4X1pcsBxXDzxPMiYr2/ur
// SIG // 5QZnaEtD4z7OdUpY0wmmHYFwlVkUEkw5oVoqWpA4aqok
// SIG // AWcJh25/hFNqQTRGIL1A0IItFLpCAgbFxNbDaxPGXI2x
// SIG // 4asNip2NPv9t9BQbw594UpKewLA8TgV5Wxv4xVXnCDmi
// SIG // FhNpAHi/EzZz92yzhprSj8152XC0aPF6Uf3SX1pZ7/Nq
// SIG // nZz5ds+mUGjQ/lblS+xSdIFDDzWTYozQ4GDMgvUTn0/d
// SIG // EFcjUxbi07ug8GhBs0dloT6OCoPOHb6NTEqZdtwdhJCc
// SIG // cPq2LMKofkX9iwcVturbU4zDdc06KGOyNBzzVVeR3K8m
// SIG // YaMxHChb+EFggW33zaVKVGj36n+Ivr3IfnCfE4sq1qb/
// SIG // UJsxr6BLSF9Z4Wnn6Ad7cA5QcyyZDNEEjed8AcAZTYr1
// SIG // L+SzViOv
// SIG // End signature block
