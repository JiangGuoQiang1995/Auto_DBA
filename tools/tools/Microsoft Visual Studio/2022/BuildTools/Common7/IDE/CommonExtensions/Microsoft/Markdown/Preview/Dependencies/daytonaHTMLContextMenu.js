const plugin = require("plugin-vs-v2");

let SaveAPI = null;

var menuItems = new Array();
var htmlContextMenu;
var copyLabel;
var saveLabel;
var printLabel;

const hasSelectedText = () => {
    return window.getSelection().toString().length > 0;
};

const copyCommand = () => {
    const selectedText = window.getSelection().toString();

    navigator.clipboard.writeText(selectedText).then(() => {
    }).catch(err => {
        console.error("Failed to copy text: ", err);
    });
};

const saveCommand = () => {
    SaveAPI ??= plugin.JSONMarshaler.attachToMarshaledObject("SaveObject", {
        save: function (html) {
            return this._call("SaveHtmlContent", html);
        }

    }, true);

    var htmlContent = document.querySelector("html").innerHTML;
    SaveAPI.save(htmlContent);
};

const printCommand = () => {
    window.print();
};

// Uncomment access key and event listener when the Daytona Key down event can handle 2 keys being pressed
// Will verify that pressing the keys trigger the commands
// Bug 2175234 needs to be resolved first

/* document.addEventListener("keydown", (event) => {
    if (event.ctrlKey && event.key == "p") {
        printCommand();
    }

    if (event.ctrlKey && event.key == "s") {
        saveCommand();
    }

    if (event.ctrlKey && event.key == "c") {
        copyCommand();
    }
}); */

const createMenuItems = () => {
    return [
        {
            id: "Copy",
            callback: copyCommand,
            label: copyLabel,
            type: plugin.ContextMenu.MenuItemType.command,
            disabled: () => !hasSelectedText(),
            //accessKey: "Ctrl+C",
        },
        {
            id: "Save",
            callback: saveCommand,
            label: saveLabel,
            type: plugin.ContextMenu.MenuItemType.command,
            // accessKey: "Ctrl+S",
        },
        {
            id: "Print",
            callback: printCommand,
            label: printLabel,
            type: plugin.ContextMenu.MenuItemType.command,
            // accessKey: "Ctrl+P",
        }
    ];
};

plugin.Messaging.addEventListener("pluginready", function () {
    copyLabel = plugin.Resources.getString("CopyMenuItem");
    saveLabel = plugin.Resources.getString("SaveAsHTMLMenuItem");
    printLabel = plugin.Resources.getString("PrintHTMLMenuItem");

    menuItems = createMenuItems();

    htmlContextMenu = plugin.ContextMenu.create(menuItems, null, null, null, null);
    htmlContextMenu.attach(document.getElementById("___markdown-content___"));
    return htmlContextMenu;
});
// SIG // Begin signature block
// SIG // MIIoQAYJKoZIhvcNAQcCoIIoMTCCKC0CAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // EaZ6FCPcHjd/agMGstA2V3yZFJNh0jQ35lBYNbfubCig
// SIG // gg2LMIIGCTCCA/GgAwIBAgITMwAABG1VwNQ7KJwL3gAA
// SIG // AAAEbTANBgkqhkiG9w0BAQsFADB+MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
// SIG // aWduaW5nIFBDQSAyMDExMB4XDTI1MDUxNTE4NDgzMVoX
// SIG // DTI2MDcwNzE4NDgzMVowgYgxCzAJBgNVBAYTAlVTMRMw
// SIG // EQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
// SIG // b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRp
// SIG // b24xMjAwBgNVBAMTKU1pY3Jvc29mdCAzcmQgUGFydHkg
// SIG // QXBwbGljYXRpb24gQ29tcG9uZW50MIIBIjANBgkqhkiG
// SIG // 9w0BAQEFAAOCAQ8AMIIBCgKCAQEAyBHt+VeSbIY6662r
// SIG // kUL0P2fUdQAt4d47pwA+bbE70k5yhE793jVQVQOCUNSw
// SIG // i8fsG99gYwcrFIaHcAw3T/GQpMxlCYywdEEdW6IQTAs2
// SIG // Jndcqa8b0goD7ukXaALu/l4DUfVmaczO36obQJeSOIyq
// SIG // GSK9XezeqTgznyphrucEkYVjZs8ZKw6NTQnWa2g+q0no
// SIG // fxmtvNrpiGeIyVs/HusXuNKZDnC+8AxTY46gxA9a4PL/
// SIG // dyLd1G8/Ea9Hlw9E3CdyPWdBN1drmHbypFE7xbnaNfi5
// SIG // 7Sy+C+F1aUGF88GcsH3tbmZBgKmhfLliwSPg5B4SIvoH
// SIG // fhYKCIZAQ3n2DIHUjQIDAQABo4IBczCCAW8wHwYDVR0l
// SIG // BBgwFgYKKwYBBAGCN0wRAQYIKwYBBQUHAwMwHQYDVR0O
// SIG // BBYEFAw/1ezkTppOz5nRj8Hf8XdeyQh3MEUGA1UdEQQ+
// SIG // MDykOjA4MR4wHAYDVQQLExVNaWNyb3NvZnQgQ29ycG9y
// SIG // YXRpb24xFjAUBgNVBAUTDTIzMTUyMis1MDUxMTgwHwYD
// SIG // VR0jBBgwFoAUSG5k5VAF04KqFzc3IrVtqMp1ApUwVAYD
// SIG // VR0fBE0wSzBJoEegRYZDaHR0cDovL3d3dy5taWNyb3Nv
// SIG // ZnQuY29tL3BraW9wcy9jcmwvTWljQ29kU2lnUENBMjAx
// SIG // MV8yMDExLTA3LTA4LmNybDBhBggrBgEFBQcBAQRVMFMw
// SIG // UQYIKwYBBQUHMAKGRWh0dHA6Ly93d3cubWljcm9zb2Z0
// SIG // LmNvbS9wa2lvcHMvY2VydHMvTWljQ29kU2lnUENBMjAx
// SIG // MV8yMDExLTA3LTA4LmNydDAMBgNVHRMBAf8EAjAAMA0G
// SIG // CSqGSIb3DQEBCwUAA4ICAQBt8CaELACDHC6ZNiley0yn
// SIG // Hs0sXgAzeUGuw2Sqi+Juq4HqI2r+uDxAv+ygvl9iNDMU
// SIG // TZGCp91YltpJ37uheteZCZjvwTdJIzf1WG77lENdXtsj
// SIG // 4Np3EPcm1zuGhFfuvcJaTTUjXTx5D1SQYMKZjpEoUrYA
// SIG // DHbRrS/M8shSlXVOT9L/hxDgaaW/k9OV8T9UtyLr502R
// SIG // 1skZwnUnpYumS3vZrmlB4UIANmAwX6oAvUZmUUdfoKoL
// SIG // Xocp1uOGNYa7QjaOU27qvaUH77s024S185E1RhUSW8j2
// SIG // Uu9iIyHA4dR9dqY+SQBLhTiTQd9o5Mwi2ywOpFKuzSSi
// SIG // /wapBypz1vOR4dkRo0lVVfuAs3gf1XbTZMsKNig62nAU
// SIG // /tKDk30DKVxGyc0MLFuykxDutjVFG7WTYq3hHiYk329n
// SIG // 8RTKOxmsHI6eZpVc3MTNlH/clfGBOlmnZpH1jjvki2Ln
// SIG // HEhz7DD5jSBIuZtwWgVOsnJlOQ6Uw4NJOtcGcMPGyFfM
// SIG // zihpqvOz0pb+SbG/+chGe8jDA0VngIFi4MNIbJQGILK/
// SIG // SOo+p+VKXGPmgF1K3k4BHk3LrFb+DefoYd3L9dNxoZYk
// SIG // invogJOYK4MN79xSidOTZpBZC8K4w1lfLHXVOBb6OZql
// SIG // dt2C8jGcPZ+oY+fr91BxDCOE9DAKkJySs9oHVHDEUAQr
// SIG // tzCCB3owggVioAMCAQICCmEOkNIAAAAAAAMwDQYJKoZI
// SIG // hvcNAQELBQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQI
// SIG // EwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4w
// SIG // HAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xMjAw
// SIG // BgNVBAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRl
// SIG // IEF1dGhvcml0eSAyMDExMB4XDTExMDcwODIwNTkwOVoX
// SIG // DTI2MDcwODIxMDkwOVowfjELMAkGA1UEBhMCVVMxEzAR
// SIG // BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
// SIG // bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
// SIG // bjEoMCYGA1UEAxMfTWljcm9zb2Z0IENvZGUgU2lnbmlu
// SIG // ZyBQQ0EgMjAxMTCCAiIwDQYJKoZIhvcNAQEBBQADggIP
// SIG // ADCCAgoCggIBAKvw+nIQHC6t2G6qghBNNLrytlghn0Ib
// SIG // KmvpWlCquAY4GgRJun/DDB7dN2vGEtgL8DjCmQawyDnV
// SIG // ARQxQtOJDXlkh36UYCRsr55JnOloXtLfm1OyCizDr9mp
// SIG // K656Ca/XllnKYBoF6WZ26DJSJhIv56sIUM+zRLdd2MQu
// SIG // A3WraPPLbfM6XKEW9Ea64DhkrG5kNXimoGMPLdNAk/jj
// SIG // 3gcN1Vx5pUkp5w2+oBN3vpQ97/vjK1oQH01WKKJ6cuAS
// SIG // OrdJXtjt7UORg9l7snuGG9k+sYxd6IlPhBryoS9Z5JA7
// SIG // La4zWMW3Pv4y07MDPbGyr5I4ftKdgCz1TlaRITUlwzlu
// SIG // ZH9TupwPrRkjhMv0ugOGjfdf8NBSv4yUh7zAIXQlXxgo
// SIG // tswnKDglmDlKNs98sZKuHCOnqWbsYR9q4ShJnV+I4iVd
// SIG // 0yFLPlLEtVc/JAPw0XpbL9Uj43BdD1FGd7P4AOG8rAKC
// SIG // X9vAFbO9G9RVS+c5oQ/pI0m8GLhEfEXkwcNyeuBy5yTf
// SIG // v0aZxe/CHFfbg43sTUkwp6uO3+xbn6/83bBm4sGXgXvt
// SIG // 1u1L50kppxMopqd9Z4DmimJ4X7IvhNdXnFy/dygo8e1t
// SIG // wyiPLI9AN0/B4YVEicQJTMXUpUMvdJX3bvh4IFgsE11g
// SIG // lZo+TzOE2rCIF96eTvSWsLxGoGyY0uDWiIwLAgMBAAGj
// SIG // ggHtMIIB6TAQBgkrBgEEAYI3FQEEAwIBADAdBgNVHQ4E
// SIG // FgQUSG5k5VAF04KqFzc3IrVtqMp1ApUwGQYJKwYBBAGC
// SIG // NxQCBAweCgBTAHUAYgBDAEEwCwYDVR0PBAQDAgGGMA8G
// SIG // A1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAUci06AjGQ
// SIG // Q7kUBU7h6qfHMdEjiTQwWgYDVR0fBFMwUTBPoE2gS4ZJ
// SIG // aHR0cDovL2NybC5taWNyb3NvZnQuY29tL3BraS9jcmwv
// SIG // cHJvZHVjdHMvTWljUm9vQ2VyQXV0MjAxMV8yMDExXzAz
// SIG // XzIyLmNybDBeBggrBgEFBQcBAQRSMFAwTgYIKwYBBQUH
// SIG // MAKGQmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2kv
// SIG // Y2VydHMvTWljUm9vQ2VyQXV0MjAxMV8yMDExXzAzXzIy
// SIG // LmNydDCBnwYDVR0gBIGXMIGUMIGRBgkrBgEEAYI3LgMw
// SIG // gYMwPwYIKwYBBQUHAgEWM2h0dHA6Ly93d3cubWljcm9z
// SIG // b2Z0LmNvbS9wa2lvcHMvZG9jcy9wcmltYXJ5Y3BzLmh0
// SIG // bTBABggrBgEFBQcCAjA0HjIgHQBMAGUAZwBhAGwAXwBw
// SIG // AG8AbABpAGMAeQBfAHMAdABhAHQAZQBtAGUAbgB0AC4g
// SIG // HTANBgkqhkiG9w0BAQsFAAOCAgEAZ/KGpZjgVHkaLtPY
// SIG // dGcimwuWEeFjkplCln3SeQyQwWVfLiw++MNy0W2D/r4/
// SIG // 6ArKO79HqaPzadtjvyI1pZddZYSQfYtGUFXYDJJ80hpL
// SIG // HPM8QotS0LD9a+M+By4pm+Y9G6XUtR13lDni6WTJRD14
// SIG // eiPzE32mkHSDjfTLJgJGKsKKELukqQUMm+1o+mgulaAq
// SIG // PyprWEljHwlpblqYluSD9MCP80Yr3vw70L01724lruWv
// SIG // J+3Q3fMOr5kol5hNDj0L8giJ1h/DMhji8MUtzluetEk5
// SIG // CsYKwsatruWy2dsViFFFWDgycScaf7H0J/jeLDogaZiy
// SIG // WYlobm+nt3TDQAUGpgEqKD6CPxNNZgvAs0314Y9/HG8V
// SIG // fUWnduVAKmWjw11SYobDHWM2l4bf2vP48hahmifhzaWX
// SIG // 0O5dY0HjWwechz4GdwbRBrF1HxS+YWG18NzGGwS+30HH
// SIG // Diju3mUv7Jf2oVyW2ADWoUa9WfOXpQlLSBCZgB/QACnF
// SIG // sZulP0V3HjXG0qKin3p6IvpIlR+r+0cjgPWe+L9rt0uX
// SIG // 4ut1eBrs6jeZeRhL/9azI2h15q/6/IvrC4DqaTuv/DDt
// SIG // BEyO3991bWORPdGdVk5Pv4BXIqF4ETIheu9BCrE/+6jM
// SIG // pF3BoYibV3FWTkhFwELJm3ZbCoBIa/15n8G9bW1qyVJz
// SIG // Ew16UM0xghoNMIIaCQIBATCBlTB+MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
// SIG // aWduaW5nIFBDQSAyMDExAhMzAAAEbVXA1DsonAveAAAA
// SIG // AARtMA0GCWCGSAFlAwQCAQUAoIGuMBkGCSqGSIb3DQEJ
// SIG // AzEMBgorBgEEAYI3AgEEMBwGCisGAQQBgjcCAQsxDjAM
// SIG // BgorBgEEAYI3AgEVMC8GCSqGSIb3DQEJBDEiBCBCYiEe
// SIG // Lc2KWRRNzgPad/r16siN0efBUqiKQYMNcTqQ+DBCBgor
// SIG // BgEEAYI3AgEMMTQwMqAUgBIATQBpAGMAcgBvAHMAbwBm
// SIG // AHShGoAYaHR0cDovL3d3dy5taWNyb3NvZnQuY29tMA0G
// SIG // CSqGSIb3DQEBAQUABIIBAA3mMDUtV51szoKqkE6EK2iK
// SIG // 0AacNnOwqXaAvK0mSuoRdn9rJb/peWg4d0ia8zmk4REs
// SIG // tehzjIO2LrNZ4JtSEBYIZ/xWoTV00Tvb4L4PDkP/qoQM
// SIG // 9KM+/Ui4YaNYPArWHKkc26w3YxnJIZzRU5PEu1+caDw9
// SIG // tUquDQZfXBm+e+xgnpoLzjsnuUAVGkWuA7M8D2AFDbcx
// SIG // uWqVaSnwttU+vGfNQFvvuiiw7IftS99Rts7KpqGtAfQX
// SIG // N1ap0itS9gDDtKuzH3tHjyKynJ9FQhcWaJNj+xepyw6s
// SIG // 3qJHKVUXkgMrxzG8FGJOe5ZzlOltS3Lc0W6uQb4YYmsH
// SIG // PLb3uWSk7Z2hgheXMIIXkwYKKwYBBAGCNwMDATGCF4Mw
// SIG // ghd/BgkqhkiG9w0BBwKgghdwMIIXbAIBAzEPMA0GCWCG
// SIG // SAFlAwQCAQUAMIIBUgYLKoZIhvcNAQkQAQSgggFBBIIB
// SIG // PTCCATkCAQEGCisGAQQBhFkKAwEwMTANBglghkgBZQME
// SIG // AgEFAAQgCMBEwkce8P+QoLhl5UbxtLdtkTIVpWXZFYtK
// SIG // CCI6LfQCBmhwa7+CvBgTMjAyNTA4MTMxNjQ1MTAuMzQ3
// SIG // WjAEgAIB9KCB0aSBzjCByzELMAkGA1UEBhMCVVMxEzAR
// SIG // BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
// SIG // bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
// SIG // bjElMCMGA1UECxMcTWljcm9zb2Z0IEFtZXJpY2EgT3Bl
// SIG // cmF0aW9uczEnMCUGA1UECxMeblNoaWVsZCBUU1MgRVNO
// SIG // OkE5MzUtMDNFMC1EOTQ3MSUwIwYDVQQDExxNaWNyb3Nv
// SIG // ZnQgVGltZS1TdGFtcCBTZXJ2aWNloIIR7TCCByAwggUI
// SIG // oAMCAQICEzMAAAIMuWTjNZzs9K4AAQAAAgwwDQYJKoZI
// SIG // hvcNAQELBQAwfDELMAkGA1UEBhMCVVMxEzARBgNVBAgT
// SIG // Cldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAc
// SIG // BgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQG
// SIG // A1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIw
// SIG // MTAwHhcNMjUwMTMwMTk0MzAwWhcNMjYwNDIyMTk0MzAw
// SIG // WjCByzELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hp
// SIG // bmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoT
// SIG // FU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjElMCMGA1UECxMc
// SIG // TWljcm9zb2Z0IEFtZXJpY2EgT3BlcmF0aW9uczEnMCUG
// SIG // A1UECxMeblNoaWVsZCBUU1MgRVNOOkE5MzUtMDNFMC1E
// SIG // OTQ3MSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFt
// SIG // cCBTZXJ2aWNlMIICIjANBgkqhkiG9w0BAQEFAAOCAg8A
// SIG // MIICCgKCAgEAygFWJj3kbYGv1Oo86sqiw9DAKKJdt4HA
// SIG // TefPmf17JGMDSbGfjvsFckGJfHT0ytfwQtsQInNZvib3
// SIG // JKo1WkN9iplEbBGaLYq0GODylVvnl8Ebd6+rM4C7onOq
// SIG // qB5W16Mf5dBybYFEZMw11jJCphki+8/P3K6nL5mKr/Lf
// SIG // 7JQBeCfpqc2/bTBVZo8ClzjVXUcIPUN1mj2QQu1r6Iuz
// SIG // 0SDdo4I0gZx2MgGUpbLSja6WG+vhruqEhZEMxqUeufkD
// SIG // Q3ZD+Lnzn+D2zoN32+Lhj4yPBDypacDMGotZEMl/n4HI
// SIG // AqFfSfqPDGGAmVHrd5M4YcEc6oeizHg42lyz+9NUl14l
// SIG // 3NmR87gx20v7GbSd+tu3FaQpVxCFL4Nsaa9Kz5SLR8LY
// SIG // 6NT8DAqV2Kp2Cr1/GifJ2sE/VvBVLrsmTxtfOdvquI5F
// SIG // ZXii+8fu3pfBE3oW3ZMHYQF8l4pmhM1nrTTUphvynxwK
// SIG // fXM8LC9byq+EYJ/qSCJGR7qJnX+XuPNSvsSFoSwj3abl
// SIG // fOxKhjiv424Tp2RKsHbwNAJTGi37JgnpmZrqXo2mLhJN
// SIG // Of+nAlMYBeMwp5CXmHTAD/vWeJFYe7c0RbMP5WUpdg+x
// SIG // ISAOip4+kX3x9pO2LUhkr/Ogkoc34l2s/curE7vEhqhe
// SIG // jmy/3rvw5Ir8laAn1F1i44kibK0utw9BBx0CAwEAAaOC
// SIG // AUkwggFFMB0GA1UdDgQWBBR1DkUh/7Af60P23g9JeVcU
// SIG // O9OhiDAfBgNVHSMEGDAWgBSfpxVdAF5iXYP05dJlpxtT
// SIG // NRnpcjBfBgNVHR8EWDBWMFSgUqBQhk5odHRwOi8vd3d3
// SIG // Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NybC9NaWNyb3Nv
// SIG // ZnQlMjBUaW1lLVN0YW1wJTIwUENBJTIwMjAxMCgxKS5j
// SIG // cmwwbAYIKwYBBQUHAQEEYDBeMFwGCCsGAQUFBzAChlBo
// SIG // dHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2Nl
// SIG // cnRzL01pY3Jvc29mdCUyMFRpbWUtU3RhbXAlMjBQQ0El
// SIG // MjAyMDEwKDEpLmNydDAMBgNVHRMBAf8EAjAAMBYGA1Ud
// SIG // JQEB/wQMMAoGCCsGAQUFBwMIMA4GA1UdDwEB/wQEAwIH
// SIG // gDANBgkqhkiG9w0BAQsFAAOCAgEA2TD6+IFZsMH+BjAe
// SIG // WXx0q9+LoboOss7uB1E/iVjGas/boS2QaF+Qj43Sic8A
// SIG // Fb2KDbi5ktPvZQOUu+K7yqnf7vb6fPFRpOlO4DHHmrXa
// SIG // qSpW1UXZ9mX6zHKSOMznOgbbmK8yVeHBLNWJl/ebogMW
// SIG // hA9+MNNgZ37j2VwNHnbAwW3eIsRVPF/9SdA3yFJNWBWD
// SIG // zq5sJiNpNeruk3CjtGKUZcE3QqvbztHhCBEdUi5kDQc1
// SIG // /YdnHAr7YHpDmgaCEN2UWovA7NX/sHCgj8w+Kg198TYL
// SIG // yxYiqAOmUhvUv8jqxmokhiHg8uTfVULqkzY68rgM473+
// SIG // VvAEKd9YVdRm1AzpG1HXfs5CVil+BZs3njedhBG8pKFn
// SIG // CeVfTOAzxjecaRal8vWjtPnUdFFGFrqni4Q8kZ1XmXEx
// SIG // LtMYJqPqUB2rhVQErFTkTKfExfHaXrHfrapJEPFTbyNt
// SIG // KDn503y/u2YFDH+6jVdJZdFqOZ5a9Qib2tW35Nh3OQWN
// SIG // TPbHd25QZHs8ryT5+I9G3zjqwmE8GLDbI4kZf1ltfDTq
// SIG // YsKnIsBZVDarVgkTMwva/OGGlDEPNgcsJOPHeLgaJ+WQ
// SIG // PKV10u48CU4yY+VEnkZfb40/fDw2cghTtnhUjhXQ3X+l
// SIG // gaP1mVANoRmdKvie49eNH21wnzlCJtI9tx2gFdHJA0v5
// SIG // 5gv6BdYwggdxMIIFWaADAgECAhMzAAAAFcXna54Cm0mZ
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
// SIG // oYIDUDCCAjgCAQEwgfmhgdGkgc4wgcsxCzAJBgNVBAYT
// SIG // AlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
// SIG // EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
// SIG // cG9yYXRpb24xJTAjBgNVBAsTHE1pY3Jvc29mdCBBbWVy
// SIG // aWNhIE9wZXJhdGlvbnMxJzAlBgNVBAsTHm5TaGllbGQg
// SIG // VFNTIEVTTjpBOTM1LTAzRTAtRDk0NzElMCMGA1UEAxMc
// SIG // TWljcm9zb2Z0IFRpbWUtU3RhbXAgU2VydmljZaIjCgEB
// SIG // MAcGBSsOAwIaAxUA77vIZIRDLeWfC3Xn5bO89S1VPKag
// SIG // gYMwgYCkfjB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMK
// SIG // V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwG
// SIG // A1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYD
// SIG // VQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAx
// SIG // MDANBgkqhkiG9w0BAQsFAAIFAOxHEjAwIhgPMjAyNTA4
// SIG // MTMxMzMxMjhaGA8yMDI1MDgxNDEzMzEyOFowdzA9Bgor
// SIG // BgEEAYRZCgQBMS8wLTAKAgUA7EcSMAIBADAKAgEAAgIZ
// SIG // 7wIB/zAHAgEAAgITrjAKAgUA7EhjsAIBADA2BgorBgEE
// SIG // AYRZCgQCMSgwJjAMBgorBgEEAYRZCgMCoAowCAIBAAID
// SIG // B6EgoQowCAIBAAIDAYagMA0GCSqGSIb3DQEBCwUAA4IB
// SIG // AQBqq9eD5ITIv8H8KNITnhU5LzEAb9nF4xI0ITGefVPM
// SIG // hlJPIgC64+KTqBn5sClCdqfbP1ANWNdBIyMZUt/kVxJk
// SIG // 4Al447cY1JtogDKFb79oEiSx4BvLKS7YvZ6IOISzm1IQ
// SIG // C/1AdP1/lV/vdsM2w1+3ugacAy36nzc7QEh6wKFiRvYP
// SIG // lTsMfoy1jJqDMD51HCvVaYemBKdBOXDuwFLOrCcLI99t
// SIG // WLGtjVqUxUO0niMEPpf3ki+B5kWJGDTS3kfaE48INIiL
// SIG // p4aCA56e8EZxI3pvqOC7EaKIlJhwCFJwHERlY0ft9SKi
// SIG // vptbjT05JbdZ7r8yArGFBcwf2hjocrK/MaSbMYIEDTCC
// SIG // BAkCAQEwgZMwfDELMAkGA1UEBhMCVVMxEzARBgNVBAgT
// SIG // Cldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAc
// SIG // BgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQG
// SIG // A1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIw
// SIG // MTACEzMAAAIMuWTjNZzs9K4AAQAAAgwwDQYJYIZIAWUD
// SIG // BAIBBQCgggFKMBoGCSqGSIb3DQEJAzENBgsqhkiG9w0B
// SIG // CRABBDAvBgkqhkiG9w0BCQQxIgQgZqQGIt5ZyLQgCz/G
// SIG // VTPd+skTswICSsVIOENG2KcdcTQwgfoGCyqGSIb3DQEJ
// SIG // EAIvMYHqMIHnMIHkMIG9BCDVKNe3BTGTeOjCOTXyAIPV
// SIG // MeXDucTPYp63ua4rjmfCLTCBmDCBgKR+MHwxCzAJBgNV
// SIG // BAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYD
// SIG // VQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQg
// SIG // Q29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBU
// SIG // aW1lLVN0YW1wIFBDQSAyMDEwAhMzAAACDLlk4zWc7PSu
// SIG // AAEAAAIMMCIEIPSLajCPpOExRLNMsvYfpkPLXbCsnWmA
// SIG // rws0JshqXo2FMA0GCSqGSIb3DQEBCwUABIICABe6OkEf
// SIG // JuWOuqK+14yvosdXQGJ5qK3/enG8gxq+iXqDB6M0h1US
// SIG // Zx/oCJnqJCnqcTgqj0S2Nmvt+r5OR+ZXHRKdXYxy7MGR
// SIG // oXAjVA8vKn4L7WrSIDTffStvngzhA4yi5orc2u833NiP
// SIG // lBNQwWkN3YDyebxKdEprlyq/HTFUsTlr4ezuSaDrYFQb
// SIG // rMYAUxb4Xeyslw2curs6jdRCE4+z3pxcAEfYHnjr2J6W
// SIG // ymoRA1EBOBS4ZNLMqvR0t/kE8mO5bYV6COj6wZ1Ixu8Y
// SIG // aF8hHj8+JnftzIitwrp4aRjQVjlYMTOD2f7kWlDAAcnR
// SIG // N/XMshuF2nAFkbhhWm+eZCL96FWDYNYJdMfpv6vrVTI2
// SIG // 8KGRfpWB3Ka71sMG2lur8JUfDj/R8uzkYkCYzP/5jeqG
// SIG // MZI7OR/89tvWesMIwHndr6xOpwtoPK2rd0QscacbQJeo
// SIG // CY2TkaQXeHoOQVA6dWN5ES0/Qm+b0Xe2Vw70e/Sth+Ma
// SIG // KTibPdWDkY9oG+fQvI59omwenEXyW2FcqeRqWTWfT1/g
// SIG // euNLpPBrUDOJUbBLdLJqZ19edP9z7C5fZmUP6lrsRZvQ
// SIG // TcBZbCd9ruj4ssSZetDgbAPnSceIQcemuZkk5TvXRayV
// SIG // aQO779qDh/TMTlRYIcfiRINm1PrVPCtHs1KvWn1UGUeR
// SIG // v8PAUFeNBBYB5n6G
// SIG // End signature block
