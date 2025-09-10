

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

#ifndef __msdbg173_h__
#define __msdbg173_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAsyncDebugGenerateSymbolsCompletionHandler173_FWD_DEFINED__
#define __IAsyncDebugGenerateSymbolsCompletionHandler173_FWD_DEFINED__
typedef interface IAsyncDebugGenerateSymbolsCompletionHandler173 IAsyncDebugGenerateSymbolsCompletionHandler173;

#endif 	/* __IAsyncDebugGenerateSymbolsCompletionHandler173_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg173_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg173_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg173_0000_0000_v0_0_s_ifspec;

#ifndef __IAsyncDebugGenerateSymbolsCompletionHandler173_INTERFACE_DEFINED__
#define __IAsyncDebugGenerateSymbolsCompletionHandler173_INTERFACE_DEFINED__

/* interface IAsyncDebugGenerateSymbolsCompletionHandler173 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IAsyncDebugGenerateSymbolsCompletionHandler173;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87ACB9A6-52D1-40FE-9C55-5B4F6773FFE5")
    IAsyncDebugGenerateSymbolsCompletionHandler173 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetErrorMessage( 
            /* [in] */ BSTR errorMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGenerateSymbolsCompletionHandler173Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsyncDebugGenerateSymbolsCompletionHandler173 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsyncDebugGenerateSymbolsCompletionHandler173 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsyncDebugGenerateSymbolsCompletionHandler173 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetErrorMessage )( 
            IAsyncDebugGenerateSymbolsCompletionHandler173 * This,
            /* [in] */ BSTR errorMessage);
        
        END_INTERFACE
    } IAsyncDebugGenerateSymbolsCompletionHandler173Vtbl;

    interface IAsyncDebugGenerateSymbolsCompletionHandler173
    {
        CONST_VTBL struct IAsyncDebugGenerateSymbolsCompletionHandler173Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGenerateSymbolsCompletionHandler173_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGenerateSymbolsCompletionHandler173_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGenerateSymbolsCompletionHandler173_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGenerateSymbolsCompletionHandler173_SetErrorMessage(This,errorMessage)	\
    ( (This)->lpVtbl -> SetErrorMessage(This,errorMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGenerateSymbolsCompletionHandler173_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


