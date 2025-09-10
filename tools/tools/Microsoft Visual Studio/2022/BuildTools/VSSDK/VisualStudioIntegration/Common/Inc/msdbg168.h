

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

#ifndef __msdbg168_h__
#define __msdbg168_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugEngineNonDebugLaunch168_FWD_DEFINED__
#define __IDebugEngineNonDebugLaunch168_FWD_DEFINED__
typedef interface IDebugEngineNonDebugLaunch168 IDebugEngineNonDebugLaunch168;

#endif 	/* __IDebugEngineNonDebugLaunch168_FWD_DEFINED__ */


#ifndef __INonDebugProcessExitedEvent168_FWD_DEFINED__
#define __INonDebugProcessExitedEvent168_FWD_DEFINED__
typedef interface INonDebugProcessExitedEvent168 INonDebugProcessExitedEvent168;

#endif 	/* __INonDebugProcessExitedEvent168_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg100.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg168_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
#define DBG_EXATTRIB_SCOPE  0x0000000000000080


extern RPC_IF_HANDLE __MIDL_itf_msdbg168_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg168_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugEngineNonDebugLaunch168_INTERFACE_DEFINED__
#define __IDebugEngineNonDebugLaunch168_INTERFACE_DEFINED__

/* interface IDebugEngineNonDebugLaunch168 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugEngineNonDebugLaunch168;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE3E8946-6DD2-47B4-9BF6-7C7B43631201")
    IDebugEngineNonDebugLaunch168 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchNonDebugProcess( 
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszExe,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszArgs,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszDir,
            /* [full][in] */ __RPC__in_opt BSTR bstrEnv,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszOptions,
            /* [in] */ LAUNCH_FLAGS dwLaunchFlags,
            /* [in] */ __RPC__in PROCESS_STARTUP_INFO *pStartupInfo,
            /* [in] */ __RPC__in_opt IDebugEventCallback2 *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TerminateNonDebugProcess( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugEngineNonDebugLaunch168Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugEngineNonDebugLaunch168 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugEngineNonDebugLaunch168 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugEngineNonDebugLaunch168 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchNonDebugProcess )( 
            __RPC__in IDebugEngineNonDebugLaunch168 * This,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszExe,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszArgs,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszDir,
            /* [full][in] */ __RPC__in_opt BSTR bstrEnv,
            /* [full][in] */ __RPC__in_opt LPCOLESTR pszOptions,
            /* [in] */ LAUNCH_FLAGS dwLaunchFlags,
            /* [in] */ __RPC__in PROCESS_STARTUP_INFO *pStartupInfo,
            /* [in] */ __RPC__in_opt IDebugEventCallback2 *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *TerminateNonDebugProcess )( 
            __RPC__in IDebugEngineNonDebugLaunch168 * This);
        
        END_INTERFACE
    } IDebugEngineNonDebugLaunch168Vtbl;

    interface IDebugEngineNonDebugLaunch168
    {
        CONST_VTBL struct IDebugEngineNonDebugLaunch168Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugEngineNonDebugLaunch168_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugEngineNonDebugLaunch168_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugEngineNonDebugLaunch168_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugEngineNonDebugLaunch168_LaunchNonDebugProcess(This,pszExe,pszArgs,pszDir,bstrEnv,pszOptions,dwLaunchFlags,pStartupInfo,pCallback)	\
    ( (This)->lpVtbl -> LaunchNonDebugProcess(This,pszExe,pszArgs,pszDir,bstrEnv,pszOptions,dwLaunchFlags,pStartupInfo,pCallback) ) 

#define IDebugEngineNonDebugLaunch168_TerminateNonDebugProcess(This)	\
    ( (This)->lpVtbl -> TerminateNonDebugProcess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugEngineNonDebugLaunch168_INTERFACE_DEFINED__ */


#ifndef __INonDebugProcessExitedEvent168_INTERFACE_DEFINED__
#define __INonDebugProcessExitedEvent168_INTERFACE_DEFINED__

/* interface INonDebugProcessExitedEvent168 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_INonDebugProcessExitedEvent168;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D8B328A-25F8-4F41-87C9-8377C38AAD68")
    INonDebugProcessExitedEvent168 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNonDebugLaunch( 
            /* [out] */ __RPC__deref_out_opt IDebugEngineNonDebugLaunch168 **ppNonDebugLaunch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExitCode( 
            /* [out] */ __RPC__out DWORD *pdwExit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INonDebugProcessExitedEvent168Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INonDebugProcessExitedEvent168 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INonDebugProcessExitedEvent168 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INonDebugProcessExitedEvent168 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNonDebugLaunch )( 
            __RPC__in INonDebugProcessExitedEvent168 * This,
            /* [out] */ __RPC__deref_out_opt IDebugEngineNonDebugLaunch168 **ppNonDebugLaunch);
        
        HRESULT ( STDMETHODCALLTYPE *GetExitCode )( 
            __RPC__in INonDebugProcessExitedEvent168 * This,
            /* [out] */ __RPC__out DWORD *pdwExit);
        
        END_INTERFACE
    } INonDebugProcessExitedEvent168Vtbl;

    interface INonDebugProcessExitedEvent168
    {
        CONST_VTBL struct INonDebugProcessExitedEvent168Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INonDebugProcessExitedEvent168_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INonDebugProcessExitedEvent168_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INonDebugProcessExitedEvent168_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INonDebugProcessExitedEvent168_GetNonDebugLaunch(This,ppNonDebugLaunch)	\
    ( (This)->lpVtbl -> GetNonDebugLaunch(This,ppNonDebugLaunch) ) 

#define INonDebugProcessExitedEvent168_GetExitCode(This,pdwExit)	\
    ( (This)->lpVtbl -> GetExitCode(This,pdwExit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INonDebugProcessExitedEvent168_INTERFACE_DEFINED__ */


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


