

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

#ifndef __msdbg177_h__
#define __msdbg177_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugModule177_FWD_DEFINED__
#define __IDebugModule177_FWD_DEFINED__
typedef interface IDebugModule177 IDebugModule177;

#endif 	/* __IDebugModule177_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg156.h"
#include "msdbg171.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg177_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
typedef 
enum _GenerateSymbolsMode
    {
        GSM_Immediate	= 0,
        GSM_OnDemand	= 1
    } 	GenerateSymbolsMode;



extern RPC_IF_HANDLE __MIDL_itf_msdbg177_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg177_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugModule177_INTERFACE_DEFINED__
#define __IDebugModule177_INTERFACE_DEFINED__

/* interface IDebugModule177 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugModule177;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9379A80D-C627-40B6-893E-8516F6DC30AA")
    IDebugModule177 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanGenerateSymbols( 
            /* [in] */ GenerateSymbolsMode mode,
            /* [out] */ BOOL *pfRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateSymbolsAsync( 
            /* [in] */ GenerateSymbolsMode mode,
            /* [in] */ IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugModule177Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugModule177 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugModule177 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugModule177 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanGenerateSymbols )( 
            IDebugModule177 * This,
            /* [in] */ GenerateSymbolsMode mode,
            /* [out] */ BOOL *pfRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateSymbolsAsync )( 
            IDebugModule177 * This,
            /* [in] */ GenerateSymbolsMode mode,
            /* [in] */ IAsyncDebugGenerateSymbolsCompletionHandler *pCompletionHandler,
            /* [out] */ IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugModule177Vtbl;

    interface IDebugModule177
    {
        CONST_VTBL struct IDebugModule177Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugModule177_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugModule177_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugModule177_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugModule177_CanGenerateSymbols(This,mode,pfRetVal)	\
    ( (This)->lpVtbl -> CanGenerateSymbols(This,mode,pfRetVal) ) 

#define IDebugModule177_GenerateSymbolsAsync(This,mode,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GenerateSymbolsAsync(This,mode,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugModule177_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


