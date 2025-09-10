

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

#ifndef __msdbg162_h__
#define __msdbg162_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugRefreshBreakStateEvent162_FWD_DEFINED__
#define __IDebugRefreshBreakStateEvent162_FWD_DEFINED__
typedef interface IDebugRefreshBreakStateEvent162 IDebugRefreshBreakStateEvent162;

#endif 	/* __IDebugRefreshBreakStateEvent162_FWD_DEFINED__ */


#ifndef __IDebugTracepoint162_FWD_DEFINED__
#define __IDebugTracepoint162_FWD_DEFINED__
typedef interface IDebugTracepoint162 IDebugTracepoint162;

#endif 	/* __IDebugTracepoint162_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg162_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg162_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg162_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugRefreshBreakStateEvent162_INTERFACE_DEFINED__
#define __IDebugRefreshBreakStateEvent162_INTERFACE_DEFINED__

/* interface IDebugRefreshBreakStateEvent162 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugRefreshBreakStateEvent162;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4966EE8B-EF5C-4AA4-B4BA-7217FF345CBE")
    IDebugRefreshBreakStateEvent162 : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugRefreshBreakStateEvent162Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugRefreshBreakStateEvent162 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugRefreshBreakStateEvent162 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugRefreshBreakStateEvent162 * This);
        
        END_INTERFACE
    } IDebugRefreshBreakStateEvent162Vtbl;

    interface IDebugRefreshBreakStateEvent162
    {
        CONST_VTBL struct IDebugRefreshBreakStateEvent162Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugRefreshBreakStateEvent162_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugRefreshBreakStateEvent162_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugRefreshBreakStateEvent162_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugRefreshBreakStateEvent162_INTERFACE_DEFINED__ */


#ifndef __IDebugTracepoint162_INTERFACE_DEFINED__
#define __IDebugTracepoint162_INTERFACE_DEFINED__

/* interface IDebugTracepoint162 */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IDebugTracepoint162;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4BE935F2-82C9-460C-8221-846E5147685E")
    IDebugTracepoint162 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTracepoint( 
            /* [in] */ __RPC__in BSTR bstrTracepoint,
            /* [in] */ BOOL fBreakWhenHit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearTracepoint( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugTracepoint162Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugTracepoint162 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugTracepoint162 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugTracepoint162 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetTracepoint )( 
            __RPC__in IDebugTracepoint162 * This,
            /* [in] */ __RPC__in BSTR bstrTracepoint,
            /* [in] */ BOOL fBreakWhenHit);
        
        HRESULT ( STDMETHODCALLTYPE *ClearTracepoint )( 
            __RPC__in IDebugTracepoint162 * This);
        
        END_INTERFACE
    } IDebugTracepoint162Vtbl;

    interface IDebugTracepoint162
    {
        CONST_VTBL struct IDebugTracepoint162Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugTracepoint162_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugTracepoint162_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugTracepoint162_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugTracepoint162_SetTracepoint(This,bstrTracepoint,fBreakWhenHit)	\
    ( (This)->lpVtbl -> SetTracepoint(This,bstrTracepoint,fBreakWhenHit) ) 

#define IDebugTracepoint162_ClearTracepoint(This)	\
    ( (This)->lpVtbl -> ClearTracepoint(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugTracepoint162_INTERFACE_DEFINED__ */


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


