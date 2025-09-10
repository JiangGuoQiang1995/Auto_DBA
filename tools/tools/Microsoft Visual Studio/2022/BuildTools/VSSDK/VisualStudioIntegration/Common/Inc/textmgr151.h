

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


#ifndef __textmgr151_h__
#define __textmgr151_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsTextManager6_FWD_DEFINED__
#define __IVsTextManager6_FWD_DEFINED__
typedef interface IVsTextManager6 IVsTextManager6;

#endif 	/* __IVsTextManager6_FWD_DEFINED__ */


#ifndef __IVsTextManagerEvents6_FWD_DEFINED__
#define __IVsTextManagerEvents6_FWD_DEFINED__
typedef interface IVsTextManagerEvents6 IVsTextManagerEvents6;

#endif 	/* __IVsTextManagerEvents6_FWD_DEFINED__ */


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


/* interface __MIDL_itf_textmgr151_0000_0000 */
/* [local] */ 

#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textmgr151_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textmgr151_0000_0000_v0_0_s_ifspec;


#ifndef __TextMgr151_LIBRARY_DEFINED__
#define __TextMgr151_LIBRARY_DEFINED__

/* library TextMgr151 */
/* [version][uuid] */ 

typedef struct _VIEWPREFERENCES5
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
    unsigned int fEnableClickGotoDef;
    unsigned int uModifierKey;
    unsigned int fOpenDefInPeek;
    } 	VIEWPREFERENCES5;

typedef 
enum _markertype3
    {
        MARKER_HINTED_SUGGESTION	= 36,
        DEF_MARKER_COUNT_NEW_2	= ( MARKER_HINTED_SUGGESTION + 1 ) 
    } 	MARKERTYPE3;


EXTERN_C const IID LIBID_TextMgr151;

#ifndef __IVsTextManager6_INTERFACE_DEFINED__
#define __IVsTextManager6_INTERFACE_DEFINED__

/* interface IVsTextManager6 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManager6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A50CF306-7BEE-4349-8789-DAE896A15E07")
    IVsTextManager6 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetUserPreferences6( 
            /* [out] */ VIEWPREFERENCES5 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES3 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetUserPreferences6( 
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManager6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManager6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManager6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManager6 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetUserPreferences6 )( 
            IVsTextManager6 * This,
            /* [out] */ VIEWPREFERENCES5 *pViewPrefs,
            /* [out][in] */ LANGPREFERENCES3 *pLangPrefs,
            /* [out][in] */ FONTCOLORPREFERENCES2 *pColorPrefs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetUserPreferences6 )( 
            IVsTextManager6 * This,
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManager6Vtbl;

    interface IVsTextManager6
    {
        CONST_VTBL struct IVsTextManager6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManager6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManager6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManager6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManager6_GetUserPreferences6(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> GetUserPreferences6(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#define IVsTextManager6_SetUserPreferences6(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> SetUserPreferences6(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManager6_INTERFACE_DEFINED__ */


#ifndef __IVsTextManagerEvents6_INTERFACE_DEFINED__
#define __IVsTextManagerEvents6_INTERFACE_DEFINED__

/* interface IVsTextManagerEvents6 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IVsTextManagerEvents6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7B06D6E-6CB8-43FE-B631-D3DF4F383E98")
    IVsTextManagerEvents6 : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE OnUserPreferencesChanged6( 
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTextManagerEvents6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTextManagerEvents6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTextManagerEvents6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTextManagerEvents6 * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *OnUserPreferencesChanged6 )( 
            IVsTextManagerEvents6 * This,
            /* [in] */ const VIEWPREFERENCES5 *pViewPrefs,
            /* [in] */ const LANGPREFERENCES3 *pLangPrefs,
            /* [in] */ const FONTCOLORPREFERENCES2 *pColorPrefs);
        
        END_INTERFACE
    } IVsTextManagerEvents6Vtbl;

    interface IVsTextManagerEvents6
    {
        CONST_VTBL struct IVsTextManagerEvents6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTextManagerEvents6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTextManagerEvents6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTextManagerEvents6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTextManagerEvents6_OnUserPreferencesChanged6(This,pViewPrefs,pLangPrefs,pColorPrefs)	\
    ( (This)->lpVtbl -> OnUserPreferencesChanged6(This,pViewPrefs,pLangPrefs,pColorPrefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTextManagerEvents6_INTERFACE_DEFINED__ */

#endif /* __TextMgr151_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


