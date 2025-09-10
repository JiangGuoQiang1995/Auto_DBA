

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

#ifndef __msdbg175_h__
#define __msdbg175_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugStackFrame175_FWD_DEFINED__
#define __IDebugStackFrame175_FWD_DEFINED__
typedef interface IDebugStackFrame175 IDebugStackFrame175;

#endif 	/* __IDebugStackFrame175_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg171.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg175_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

enum enum_FRAMEINFO_FLAGS_VALUES175
    {
        FIFV_WARNING_FRAME	= 0x1000,
        FIFV_CRITICAL_FRAME	= 0x2000,
        FIFV_DEEMPHASIZED_FRAME	= 0x4000
    } ;
#define DBG_EXATTRIB_CAN_EVALUATE_WITHOUT_OPTIMIZATION 0x0000000000000100


extern RPC_IF_HANDLE __MIDL_itf_msdbg175_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg175_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugStackFrame175_INTERFACE_DEFINED__
#define __IDebugStackFrame175_INTERFACE_DEFINED__

/* interface IDebugStackFrame175 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStackFrame175;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1271B5-E682-422C-A6D6-104B727F6028")
    IDebugStackFrame175 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanGenerateSymbols( 
            /* [out] */ __RPC__out BOOL *pfRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateSymbolsAsync( 
            /* [in] */ __RPC__in_opt IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStackFrame175Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStackFrame175 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStackFrame175 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStackFrame175 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanGenerateSymbols )( 
            __RPC__in IDebugStackFrame175 * This,
            /* [out] */ __RPC__out BOOL *pfRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateSymbolsAsync )( 
            __RPC__in IDebugStackFrame175 * This,
            /* [in] */ __RPC__in_opt IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugStackFrame175Vtbl;

    interface IDebugStackFrame175
    {
        CONST_VTBL struct IDebugStackFrame175Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStackFrame175_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStackFrame175_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStackFrame175_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStackFrame175_CanGenerateSymbols(This,pfRetVal)	\
    ( (This)->lpVtbl -> CanGenerateSymbols(This,pfRetVal) ) 

#define IDebugStackFrame175_GenerateSymbolsAsync(This,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GenerateSymbolsAsync(This,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStackFrame175_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg175_0000_0001 */
/* [local] */ 


enum enum_MODULE175_FLAGS
    {
        MODULE175_FLAG_SYMBOLS_PARTIALLY_DECOMPILED	= 0x200
    } ;
typedef DWORD MODULE175_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_msdbg175_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg175_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


