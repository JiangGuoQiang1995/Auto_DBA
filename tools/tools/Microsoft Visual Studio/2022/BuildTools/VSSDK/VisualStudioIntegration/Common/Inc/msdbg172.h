

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

#ifndef __msdbg172_h__
#define __msdbg172_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugBreakpoint172_FWD_DEFINED__
#define __IDebugBreakpoint172_FWD_DEFINED__
typedef interface IDebugBreakpoint172 IDebugBreakpoint172;

#endif 	/* __IDebugBreakpoint172_FWD_DEFINED__ */


#ifndef __IDebugPort172_FWD_DEFINED__
#define __IDebugPort172_FWD_DEFINED__
typedef interface IDebugPort172 IDebugPort172;

#endif 	/* __IDebugPort172_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg172_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugBreakpoint172_INTERFACE_DEFINED__
#define __IDebugBreakpoint172_INTERFACE_DEFINED__

/* interface IDebugBreakpoint172 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugBreakpoint172;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD1F6D4E-3882-4996-A3F7-1CC5BDC09A6C")
    IDebugBreakpoint172 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDependency( 
            /* [in] */ IDebugBreakpoint172 *pDependentBreakpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveDependency( 
            /* [in] */ IDebugBreakpoint172 *pDependentBreakpoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugBreakpoint172Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugBreakpoint172 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugBreakpoint172 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugBreakpoint172 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDependency )( 
            IDebugBreakpoint172 * This,
            /* [in] */ IDebugBreakpoint172 *pDependentBreakpoint);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveDependency )( 
            IDebugBreakpoint172 * This,
            /* [in] */ IDebugBreakpoint172 *pDependentBreakpoint);
        
        END_INTERFACE
    } IDebugBreakpoint172Vtbl;

    interface IDebugBreakpoint172
    {
        CONST_VTBL struct IDebugBreakpoint172Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugBreakpoint172_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugBreakpoint172_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugBreakpoint172_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugBreakpoint172_CreateDependency(This,pDependentBreakpoint)	\
    ( (This)->lpVtbl -> CreateDependency(This,pDependentBreakpoint) ) 

#define IDebugBreakpoint172_RemoveDependency(This,pDependentBreakpoint)	\
    ( (This)->lpVtbl -> RemoveDependency(This,pDependentBreakpoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugBreakpoint172_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg172_0000_0001 */
/* [local] */ 


enum enum_LAUNCH_FLAGS172
    {
        LAUNCH_SINGLE_USE_INTEGRATED_CONSOLE	= 0x800
    } ;
typedef DWORD LAUNCH_FLAGS172;


enum enum_FRAMEINFO_FLAGS_VALUES172
    {
        FIFV_HIDDEN_FRAME	= 0x800
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0001_v0_0_s_ifspec;

#ifndef __IDebugPort172_INTERFACE_DEFINED__
#define __IDebugPort172_INTERFACE_DEFINED__

/* interface IDebugPort172 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugPort172;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77177319-1EE9-4394-98C4-0342CA8BD5BB")
    IDebugPort172 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEngineListPortSupplierId( 
            /* [out] */ __RPC__out GUID *pPortSuppliedId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugPort172Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugPort172 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugPort172 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugPort172 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEngineListPortSupplierId )( 
            __RPC__in IDebugPort172 * This,
            /* [out] */ __RPC__out GUID *pPortSuppliedId);
        
        END_INTERFACE
    } IDebugPort172Vtbl;

    interface IDebugPort172
    {
        CONST_VTBL struct IDebugPort172Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugPort172_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugPort172_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugPort172_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugPort172_GetEngineListPortSupplierId(This,pPortSuppliedId)	\
    ( (This)->lpVtbl -> GetEngineListPortSupplierId(This,pPortSuppliedId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugPort172_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg172_0000_0002 */
/* [local] */ 


enum enum_MODULE172_FLAGS
    {
        MODULE172_FLAG_SYMBOLS_DECOMPILED	= 0x80,
        MODULE172_FLAG_SYMBOLS_RELOADABLE	= 0x100
    } ;
typedef DWORD MODULE172_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg172_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


