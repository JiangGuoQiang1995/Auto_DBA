

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

#ifndef __msdbg16A_h__
#define __msdbg16A_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugStackFrame16A_FWD_DEFINED__
#define __IDebugStackFrame16A_FWD_DEFINED__
typedef interface IDebugStackFrame16A IDebugStackFrame16A;

#endif 	/* __IDebugStackFrame16A_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg16A_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg16A_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg16A_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugStackFrame16A_INTERFACE_DEFINED__
#define __IDebugStackFrame16A_INTERFACE_DEFINED__

/* interface IDebugStackFrame16A */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStackFrame16A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D787DCC6-1873-4F06-B340-0C3E28DD7839")
    IDebugStackFrame16A : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ DWORD dwFieldSpecEx,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__out FRAMEINFO *pFrameInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStackFrame16AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStackFrame16A * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStackFrame16A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStackFrame16A * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            __RPC__in IDebugStackFrame16A * This,
            /* [in] */ FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ DWORD dwFieldSpecEx,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__out FRAMEINFO *pFrameInfo);
        
        END_INTERFACE
    } IDebugStackFrame16AVtbl;

    interface IDebugStackFrame16A
    {
        CONST_VTBL struct IDebugStackFrame16AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStackFrame16A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStackFrame16A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStackFrame16A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStackFrame16A_GetInfo(This,dwFieldSpec,dwFieldSpecEx,nRadix,pFrameInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,dwFieldSpec,dwFieldSpecEx,nRadix,pFrameInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStackFrame16A_INTERFACE_DEFINED__ */


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


