

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

#ifndef __msdbg160_h__
#define __msdbg160_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugReversibleSessionProcess160_FWD_DEFINED__
#define __IDebugReversibleSessionProcess160_FWD_DEFINED__
typedef interface IDebugReversibleSessionProcess160 IDebugReversibleSessionProcess160;

#endif 	/* __IDebugReversibleSessionProcess160_FWD_DEFINED__ */


#ifndef __IDebugReversibleEngineProgram160_FWD_DEFINED__
#define __IDebugReversibleEngineProgram160_FWD_DEFINED__
typedef interface IDebugReversibleEngineProgram160 IDebugReversibleEngineProgram160;

#endif 	/* __IDebugReversibleEngineProgram160_FWD_DEFINED__ */


#ifndef __IDebugProperty160_FWD_DEFINED__
#define __IDebugProperty160_FWD_DEFINED__
typedef interface IDebugProperty160 IDebugProperty160;

#endif 	/* __IDebugProperty160_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg160_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg160_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg160_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugReversibleSessionProcess160_INTERFACE_DEFINED__
#define __IDebugReversibleSessionProcess160_INTERFACE_DEFINED__

/* interface IDebugReversibleSessionProcess160 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugReversibleSessionProcess160;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9BF4FB5-C25E-4FAD-BDC4-AB9D9C72DCE9")
    IDebugReversibleSessionProcess160 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanReverse( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReverseStep( 
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ STEPKIND sk,
            /* [in] */ STEPUNIT su) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReverseExecute( 
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugReversibleSessionProcess160Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugReversibleSessionProcess160 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugReversibleSessionProcess160 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugReversibleSessionProcess160 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanReverse )( 
            __RPC__in IDebugReversibleSessionProcess160 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReverseStep )( 
            __RPC__in IDebugReversibleSessionProcess160 * This,
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ STEPKIND sk,
            /* [in] */ STEPUNIT su);
        
        HRESULT ( STDMETHODCALLTYPE *ReverseExecute )( 
            __RPC__in IDebugReversibleSessionProcess160 * This,
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread);
        
        END_INTERFACE
    } IDebugReversibleSessionProcess160Vtbl;

    interface IDebugReversibleSessionProcess160
    {
        CONST_VTBL struct IDebugReversibleSessionProcess160Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugReversibleSessionProcess160_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugReversibleSessionProcess160_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugReversibleSessionProcess160_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugReversibleSessionProcess160_CanReverse(This)	\
    ( (This)->lpVtbl -> CanReverse(This) ) 

#define IDebugReversibleSessionProcess160_ReverseStep(This,pThread,sk,su)	\
    ( (This)->lpVtbl -> ReverseStep(This,pThread,sk,su) ) 

#define IDebugReversibleSessionProcess160_ReverseExecute(This,pThread)	\
    ( (This)->lpVtbl -> ReverseExecute(This,pThread) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugReversibleSessionProcess160_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg160_0000_0001 */
/* [local] */ 


enum ExecuteDirection
    {
        ExecuteDirection_Forward	= 0,
        ExecuteDirection_Reverse	= 1
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg160_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg160_0000_0001_v0_0_s_ifspec;

#ifndef __IDebugReversibleEngineProgram160_INTERFACE_DEFINED__
#define __IDebugReversibleEngineProgram160_INTERFACE_DEFINED__

/* interface IDebugReversibleEngineProgram160 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugReversibleEngineProgram160;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F7A3651-E3D2-4137-8367-56FCCCAAB4DC")
    IDebugReversibleEngineProgram160 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanReverse( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExecuteDirection( 
            /* [in] */ enum ExecuteDirection executeDirection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugReversibleEngineProgram160Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugReversibleEngineProgram160 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugReversibleEngineProgram160 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugReversibleEngineProgram160 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanReverse )( 
            __RPC__in IDebugReversibleEngineProgram160 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetExecuteDirection )( 
            __RPC__in IDebugReversibleEngineProgram160 * This,
            /* [in] */ enum ExecuteDirection executeDirection);
        
        END_INTERFACE
    } IDebugReversibleEngineProgram160Vtbl;

    interface IDebugReversibleEngineProgram160
    {
        CONST_VTBL struct IDebugReversibleEngineProgram160Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugReversibleEngineProgram160_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugReversibleEngineProgram160_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugReversibleEngineProgram160_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugReversibleEngineProgram160_CanReverse(This)	\
    ( (This)->lpVtbl -> CanReverse(This) ) 

#define IDebugReversibleEngineProgram160_SetExecuteDirection(This,executeDirection)	\
    ( (This)->lpVtbl -> SetExecuteDirection(This,executeDirection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugReversibleEngineProgram160_INTERFACE_DEFINED__ */


#ifndef __IDebugProperty160_INTERFACE_DEFINED__
#define __IDebugProperty160_INTERFACE_DEFINED__

/* interface IDebugProperty160 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProperty160;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6C64271-4FDE-485A-899B-D00E628F6A82")
    IDebugProperty160 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDataBreakpointInfo160( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrAddress,
            /* [out] */ __RPC__out DWORD *pSize,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDisplayName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProperty160Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProperty160 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProperty160 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProperty160 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataBreakpointInfo160 )( 
            __RPC__in IDebugProperty160 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrAddress,
            /* [out] */ __RPC__out DWORD *pSize,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDisplayName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrError);
        
        END_INTERFACE
    } IDebugProperty160Vtbl;

    interface IDebugProperty160
    {
        CONST_VTBL struct IDebugProperty160Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProperty160_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProperty160_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProperty160_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProperty160_GetDataBreakpointInfo160(This,pbstrAddress,pSize,pbstrDisplayName,pbstrError)	\
    ( (This)->lpVtbl -> GetDataBreakpointInfo160(This,pbstrAddress,pSize,pbstrDisplayName,pbstrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProperty160_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


