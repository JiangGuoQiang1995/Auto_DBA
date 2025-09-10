#pragma once

#define LREGKEY_VISUALSTUDIOROOT_90       L"Software\\Microsoft\\VisualStudio\\9.0"
#define LREGKEY_VISUALSTUDIOROOT_100      L"Software\\Microsoft\\VisualStudio\\10.0"
#define LREGKEY_VISUALSTUDIOROOT_110      L"Software\\Microsoft\\VisualStudio\\11.0"

#define REGKEY_VISUALSTUDIOROOT_CURRENT   "Software\\Microsoft\\VisualStudio\\17.0"
#define LREGKEY_VISUALSTUDIOROOT_CURRENT  L"Software\\Microsoft\\VisualStudio\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_VISUALSTUDIO   L"VisualStudio"

#define VISUALSTUDIO_PROGID_VERSION_CURRENT    L"17.0"
#define VISUALSTUDIO_DDE_NAME_CURRENT          L"VisualStudio.17.0"

#define LREGKEY_APPENVROOT_NOVERSION      L"Software\\Microsoft\\AppEnv"

#define REGKEY_APPENVROOT_CURRENT         "Software\\Microsoft\\AppEnv\\17.0"
#define LREGKEY_APPENVROOT_CURRENT        L"Software\\Microsoft\\AppEnv\\17.0"

#define LREGKEY_SQMREGROOT_CURRENT        L"Software\\Microsoft\\VSCommon\\17.0\\SQM"
#define REGKEY_SQMREGROOT_CURRENT         "Software\\Microsoft\\VSCommon\\17.0\\SQM"

#define REGKEY_VW8EXPRESSROOT_CURRENT     "Software\\Microsoft\\VSWinExpress\\17.0"
#define LREGKEY_VW8EXPRESSROOT_CURRENT    L"Software\\Microsoft\\VSWinExpress\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_VSWINEXPRESS    L"VSWinExpress"

#define VW8EXPRESS_PROGID_VERSION_CURRENT    L"17.0"
#define VW8EXPRESS_DDE_NAME_CURRENT          L"VSWinExpress.17.0"

#define REGKEY_BLENDROOT_CURRENT          "Software\\Microsoft\\Blend\\17.0"
#define LREGKEY_BLENDROOT_CURRENT         L"Software\\Microsoft\\Blend\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_BLEND     L"Blend"

#define BLEND_PROGID_VERSION_CURRENT      L"17.0"
#define BLEND_DDE_NAME_CURRENT            L"Blend.17.0"

#define REGKEY_VWDEXPRESSROOT_CURRENT     "Software\\Microsoft\\VWDExpress\\17.0"
#define LREGKEY_VWDEXPRESSROOT_CURRENT    L"Software\\Microsoft\\VWDExpress\\17.0"

#define REGKEY_VSSERVICINGROOT_CURRENT    "Software\\Microsoft\\Devdiv\\VS\\Servicing\\17.0"
#define LREGKEY_VSSERVICINGROOT_CURRENT   L"Software\\Microsoft\\Devdiv\\VS\\Servicing\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_VWDEXPRESS    L"VWDExpress"

#define VWDEXPRESS_PROGID_VERSION_CURRENT    L"17.0"
#define VWDEXPRESS_DDE_NAME_CURRENT          L"VWDExpress.17.0"

#define REGKEY_WDEXPRESSROOT_CURRENT     "Software\\Microsoft\\WDExpress\\17.0"
#define LREGKEY_WDEXPRESSROOT_CURRENT    L"Software\\Microsoft\\WDExpress\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_WDEXPRESS   L"WDExpress"

#define WDEXPRESS_PROGID_VERSION_CURRENT    L"17.0"
#define WDEXPRESS_DDE_NAME_CURRENT          L"WDExpress.17.0"

#define REGKEY_VCEXPRESSROOT_CURRENT      "Software\\Microsoft\\VCExpress\\17.0"
#define LREGKEY_VCEXPRESSROOT_CURRENT     L"Software\\Microsoft\\VCExpress\\17.0"

#define SUBSCRIPTION_RIGHTSNAME_VSGRAPHICS   L"VsGraphics"

#define VSGRAPHICS_PROGID_VERSION_CURRENT    L"17.0"
#define VSGRAPHICS_DDE_NAME_CURRENT          L"VsGraphics.17.0"

#define REGKEY_VSGRAPHICSROOT_CURRENT     "Software\\Microsoft\\VsGraphics\\17.0"
#define LREGKEY_VSGRAPHICSROOT_CURRENT    L"Software\\Microsoft\\VsGraphics\\17.0"

/* SSMS_VBUMP_REVIEW           */
/* Bump only the major version */
#define REGKEY_SSMSROOT_CURRENT          "Software\\Microsoft\\SSMS\\21.0"
#define LREGKEY_SSMSROOT_CURRENT         L"Software\\Microsoft\\SSMS\\21.0"
// DEVNOTE(MatteoT): unused?
//#define SSMS_PROGID_VERSION_CURRENT      L"21.0"
// DEVNOTE(MatteoT): this same number appears in SSMS.Application.pkgdef, however
// I am not sure it is supposed to. I should try to remove it and see what happens.
// If needed, then make sure that they are kept in sync at vBump.
#define SSMS_DDE_NAME_CURRENT            L"SSMS.21.0"
