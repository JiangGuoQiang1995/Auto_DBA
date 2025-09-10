

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


#ifndef __textmgr150_h__
#define __textmgr150_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsTextManager5_FWD_DEFINED__
#define __IVsTextManager5_FWD_DEFINED__
typedef interface IVsTextManager5 IVsTextManager5;

#endif 	/* __IVsTextManager5_FWD_DEFINED__ */


#ifndef __IVsTextManagerEvents5_FWD_DEFINED__
#define __IVsTextManagerEvents5_FWD_DEFINED__
typedef interface IVsTextManagerEvents5 IVsTextManagerEvents5;

#endif 	/* __IVsTextManagerEvents5_FWD_DEFINED__ */


/* header files for imported files */
#include "context.h"
#include "IVsQueryEditQuerySave2.h"
#include "IVsQueryEditQuerySave80.h"
#include "textmgr.h"
#include "textmgr2.h"
#include "textmgr100.h"
#include "textmgr110.h"
#include "textmgr120.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_textmgr150_0000_0000 */
/* [local] */ 

#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textmgr150_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textmgr150_0000_0000_v0_0_s_ifspec;


#ifndef __TextMgr150_LIBRARY_DEFINED__
#define __TextMgr150_LIBRARY_DEFINED__

/* library TextMgr150 */
/* [version][uuid] */ 

typedef struct _VIEWPREFERENCES4
    {
    unsigned int fVisibleWhitespace;
    unsigned int fSelectionMargin;
    unsigned int fAutoDelimiterHighlight;
    unsigned int fGoToAnchorAfterEscape;
    unsigned int fDragDropEditing;
    unsigned int fUndoCaretMovements;
    unsigned int fOvertype;
    unsigned int fDragDropMove;
    unsigned int fWidgetMargin;
    unsigned int fReadOnly;
    unsigned int fActiveInModalState;
    unsigned int fClientDragDropFeedback;
    unsigned int fTrackChanges;
    unsigned int uCompletorSize;
    unsigned int fDetectUTF8;
    long lEditorEmulation;
    unsigned int fHighlightCurrentLine;
    unsigned int fShowBlockStructure;
    unsigned int fEnableCodingConventions;
    } 	VIEWPREFERENCES4;


EXTERN_C const IID LIBID_TextMgr150;

#ifndef __IVsTextManager5_INTERFACE_DEFINED__
#define __IVsTextManager5_INTERFACE_DEFINED__

/* interface IVsTextManager5 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManager5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A600FB6F-FE09-43DD-8D2D-96347BF78F4F")
    IVsTextManager5 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetUserPreferences5( 
            /* [out] */ VIEWPREFERENCES4 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES3 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetUserPreferences5( 
            /* [in] */ const VIEWPREFERENCES4 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManager5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManager5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManager5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManager5 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetUserPreferences5 )( 
            IVsTextManager5 * This,
            /* [out] */ VIEWPREFERENCES4 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES3 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetUserPreferences5 )( 
            IVsTextManager5 * This,
            /* [in] */ const VIEWPREFERENCES4 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManager5Vtbl;

    interface IVsTextManager5
    {
        CONST_VTBL struct IVsTextManager5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManager5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManager5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManager5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManager5_GetUserPreferences5(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> GetUserPreferences5(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#define IVsTextManager5_SetUserPreferences5(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> SetUserPreferences5(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManager5_INTERFACE_DEFINED__ */


#ifndef __IVsTextManagerEvents5_INTERFACE_DEFINED__
#define __IVsTextManagerEvents5_INTERFACE_DEFINED__

/* interface IVsTextManagerEvents5 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManagerEvents5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23C5EA9D-2A1F-4FD5-A131-C23FA0689BC2")
    IVsTextManagerEvents5 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE OnUserPreferencesChanged5( 
            /* [in] */ const VIEWPREFERENCES4 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManagerEvents5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManagerEvents5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManagerEvents5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManagerEvents5 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *OnUserPreferencesChanged5 )( 
            IVsTextManagerEvents5 * This,
            /* [in] */ const VIEWPREFERENCES4 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManagerEvents5Vtbl;

    interface IVsTextManagerEvents5
    {
        CONST_VTBL struct IVsTextManagerEvents5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManagerEvents5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManagerEvents5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManagerEvents5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManagerEvents5_OnUserPreferencesChanged5(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> OnUserPreferencesChanged5(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManagerEvents5_INTERFACE_DEFINED__ */

#endif /* __TextMgr150_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


