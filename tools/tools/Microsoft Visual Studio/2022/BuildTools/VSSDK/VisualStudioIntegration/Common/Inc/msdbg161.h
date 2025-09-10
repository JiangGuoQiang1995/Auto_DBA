

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

#ifndef __msdbg161_h__
#define __msdbg161_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsDebuggerSymbolSettings161_FWD_DEFINED__
#define __IVsDebuggerSymbolSettings161_FWD_DEFINED__
typedef interface IVsDebuggerSymbolSettings161 IVsDebuggerSymbolSettings161;

#endif 	/* __IVsDebuggerSymbolSettings161_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg161_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg161_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg161_0000_0000_v0_0_s_ifspec;

#ifndef __IVsDebuggerSymbolSettings161_INTERFACE_DEFINED__
#define __IVsDebuggerSymbolSettings161_INTERFACE_DEFINED__

/* interface IVsDebuggerSymbolSettings161 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerSymbolSettings161;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20BC5BAB-4E63-49E4-A7E4-611E705E0A05")
    IVsDebuggerSymbolSettings161 : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UseNugetSymbolServers( 
            /* [in] */ VARIANT_BOOL flag) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UseNugetSymbolServers( 
            /* [retval][out] */ VARIANT_BOOL *flag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerSymbolSettings161Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerSymbolSettings161 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerSymbolSettings161 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerSymbolSettings161 * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseNugetSymbolServers )( 
            IVsDebuggerSymbolSettings161 * This,
            /* [in] */ VARIANT_BOOL flag);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseNugetSymbolServers )( 
            IVsDebuggerSymbolSettings161 * This,
            /* [retval][out] */ VARIANT_BOOL *flag);
        
        END_INTERFACE
    } IVsDebuggerSymbolSettings161Vtbl;

    interface IVsDebuggerSymbolSettings161
    {
        CONST_VTBL struct IVsDebuggerSymbolSettings161Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerSymbolSettings161_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerSymbolSettings161_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerSymbolSettings161_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerSymbolSettings161_put_UseNugetSymbolServers(This,flag)	\
    ( (This)->lpVtbl -> put_UseNugetSymbolServers(This,flag) ) 

#define IVsDebuggerSymbolSettings161_get_UseNugetSymbolServers(This,flag)	\
    ( (This)->lpVtbl -> get_UseNugetSymbolServers(This,flag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerSymbolSettings161_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


