

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __textmgr1713_h__
#define __textmgr1713_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsTextManager7_FWD_DEFINED__
#define __IVsTextManager7_FWD_DEFINED__
typedef interface IVsTextManager7 IVsTextManager7;

#endif 	/* __IVsTextManager7_FWD_DEFINED__ */


#ifndef __IVsTextManagerEvents7_FWD_DEFINED__
#define __IVsTextManagerEvents7_FWD_DEFINED__
typedef interface IVsTextManagerEvents7 IVsTextManagerEvents7;

#endif 	/* __IVsTextManagerEvents7_FWD_DEFINED__ */


/* header files for imported files */
#include "context.h"
#include "IVsQueryEditQuerySave2.h"
#include "IVsQueryEditQuerySave80.h"
#include "textmgr.h"
#include "textmgr2.h"
#include "textmgr100.h"
#include "textmgr110.h"
#include "textmgr120.h"
#include "textmgr121.h"
#include "textmgr142.h"
#include "textmgr150.h"
#include "textmgr151.h"
#include "textmgr160.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_textmgr1713_0000_0000 */
/* [local] */ 

#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textmgr1713_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textmgr1713_0000_0000_v0_0_s_ifspec;


#ifndef __TextMgr1713_LIBRARY_DEFINED__
#define __TextMgr1713_LIBRARY_DEFINED__

/* library TextMgr1713 */
/* [version][uuid] */ 

typedef struct _LANGPREFERENCES4
    {
    CHAR szFileType[ 24 ];
    unsigned int fShowCompletion;
    unsigned int fShowSmartIndent;
    unsigned int fHideAdvancedAutoListMembers;
    unsigned int uTabSize;
    unsigned int uIndentSize;
    unsigned int fInsertTabs;
    vsIndentStyle IndentStyle;
    unsigned int fAutoListMembers;
    unsigned int fAutoListParams;
    unsigned int fVirtualSpace;
    unsigned int fWordWrap;
    unsigned int fTwoWayTreeview;
    unsigned int fHotURLs;
    unsigned int fDropdownBar;
    unsigned int fLineNumbers;
    GUID guidLang;
    unsigned int fWordWrapGlyphs;
    unsigned int fCutCopyBlanks;
    unsigned int fShowHorizontalScrollBar;
    unsigned int fShowVerticalScrollBar;
    unsigned int fShowAnnotations;
    unsigned int fShowChanges;
    unsigned int fShowMarks;
    unsigned int fShowErrors;
    unsigned int fShowCaretPosition;
    unsigned int fUseMapMode;
    unsigned int fShowPreview;
    unsigned int uOverviewWidth;
    unsigned int fBraceCompletion;
    unsigned int fShowQuickInfoOnHover;
    } 	LANGPREFERENCES4;


EXTERN_C const IID LIBID_TextMgr1713;

#ifndef __IVsTextManager7_INTERFACE_DEFINED__
#define __IVsTextManager7_INTERFACE_DEFINED__

/* interface IVsTextManager7 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManager7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("536b7b40-9227-4c04-b05e-cf867da92499")
    IVsTextManager7 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetUserPreferences7( 
            /* [out] */ VIEWPREFERENCES5 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES4 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetUserPreferences7( 
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES4 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManager7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManager7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManager7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManager7 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetUserPreferences7 )( 
            IVsTextManager7 * This,
            /* [out] */ VIEWPREFERENCES5 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES4 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetUserPreferences7 )( 
            IVsTextManager7 * This,
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES4 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManager7Vtbl;

    interface IVsTextManager7
    {
        CONST_VTBL struct IVsTextManager7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManager7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManager7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManager7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManager7_GetUserPreferences7(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> GetUserPreferences7(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#define IVsTextManager7_SetUserPreferences7(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> SetUserPreferences7(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManager7_INTERFACE_DEFINED__ */


#ifndef __IVsTextManagerEvents7_INTERFACE_DEFINED__
#define __IVsTextManagerEvents7_INTERFACE_DEFINED__

/* interface IVsTextManagerEvents7 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManagerEvents7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65ffd3b9-08ec-4ee3-8eaa-fabc144c235d")
    IVsTextManagerEvents7 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE OnUserPreferencesChanged7( 
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES4 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManagerEvents7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManagerEvents7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManagerEvents7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManagerEvents7 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *OnUserPreferencesChanged7 )( 
            IVsTextManagerEvents7 * This,
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES4 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManagerEvents7Vtbl;

    interface IVsTextManagerEvents7
    {
        CONST_VTBL struct IVsTextManagerEvents7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManagerEvents7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManagerEvents7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManagerEvents7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManagerEvents7_OnUserPreferencesChanged7(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> OnUserPreferencesChanged7(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManagerEvents7_INTERFACE_DEFINED__ */

#endif /* __TextMgr1713_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


