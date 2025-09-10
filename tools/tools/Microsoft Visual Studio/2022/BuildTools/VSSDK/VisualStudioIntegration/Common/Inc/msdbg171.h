

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __msdbg171_h__
#define __msdbg171_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAsyncDebugGenerateSymbolsCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGenerateSymbolsCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGenerateSymbolsCompletionHandler IAsyncDebugGenerateSymbolsCompletionHandler;

#endif 	/* __IAsyncDebugGenerateSymbolsCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugModule171_FWD_DEFINED__
#define __IDebugModule171_FWD_DEFINED__
typedef interface IDebugModule171 IDebugModule171;

#endif 	/* __IDebugModule171_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg156.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg171_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg171_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg171_0000_0000_v0_0_s_ifspec;

#ifndef __IAsyncDebugGenerateSymbolsCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGenerateSymbolsCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGenerateSymbolsCompletionHandler */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IAsyncDebugGenerateSymbolsCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9793488F-FDC3-412B-9DA0-E3263BB85168")
    IAsyncDebugGenerateSymbolsCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGenerateSymbolsCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsyncDebugGenerateSymbolsCompletionHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsyncDebugGenerateSymbolsCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsyncDebugGenerateSymbolsCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            IAsyncDebugGenerateSymbolsCompletionHandler * This,
            /* [in] */ HRESULT hr);
        
        END_INTERFACE
    } IAsyncDebugGenerateSymbolsCompletionHandlerVtbl;

    interface IAsyncDebugGenerateSymbolsCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGenerateSymbolsCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGenerateSymbolsCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGenerateSymbolsCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGenerateSymbolsCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGenerateSymbolsCompletionHandler_OnComplete(This,hr)	\
    ( (This)->lpVtbl -> OnComplete(This,hr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGenerateSymbolsCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugModule171_INTERFACE_DEFINED__
#define __IDebugModule171_INTERFACE_DEFINED__

/* interface IDebugModule171 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugModule171;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B87A14E2-774C-488D-8301-91858929163A")
    IDebugModule171 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanGenerateSymbols( 
            /* [out] */ __RPC__out BOOL *pfRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateSymbolsAsync( 
            /* [in] */ __RPC__in_opt IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugModule171Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugModule171 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugModule171 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugModule171 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanGenerateSymbols )( 
            __RPC__in IDebugModule171 * This,
            /* [out] */ __RPC__out BOOL *pfRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateSymbolsAsync )( 
            __RPC__in IDebugModule171 * This,
            /* [in] */ __RPC__in_opt IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugModule171Vtbl;

    interface IDebugModule171
    {
        CONST_VTBL struct IDebugModule171Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugModule171_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugModule171_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugModule171_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugModule171_CanGenerateSymbols(This,pfRetVal)	\
    ( (This)->lpVtbl -> CanGenerateSymbols(This,pfRetVal) ) 

#define IDebugModule171_GenerateSymbolsAsync(This,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GenerateSymbolsAsync(This,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugModule171_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


