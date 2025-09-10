

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

#ifndef __msdbg1712_h__
#define __msdbg1712_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugBoundBreakpointErrorEvent_FWD_DEFINED__
#define __IDebugBoundBreakpointErrorEvent_FWD_DEFINED__
typedef interface IDebugBoundBreakpointErrorEvent IDebugBoundBreakpointErrorEvent;

#endif 	/* __IDebugBoundBreakpointErrorEvent_FWD_DEFINED__ */


#ifndef __IDebugDumpModule1712_FWD_DEFINED__
#define __IDebugDumpModule1712_FWD_DEFINED__
typedef interface IDebugDumpModule1712 IDebugDumpModule1712;

#endif 	/* __IDebugDumpModule1712_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg100.h"
#include "msdbg174.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg1712_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/



enum ModuleSymbolLoadFlags1712
    {
        SymbolLoadFlags1712_None	= 0,
        SymbolLoadFlags1712_LocalSourcesOnly	= 0x1,
        SymbolLoadFlags1712_NoPrompt	= 0x2,
        SymbolLoadFlags1712_SkipOriginalLocation	= 0x4
    } ;
DEFINE_ENUM_FLAG_OPERATORS(ModuleSymbolLoadFlags1712)


extern RPC_IF_HANDLE __MIDL_itf_msdbg1712_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg1712_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugBoundBreakpointErrorEvent_INTERFACE_DEFINED__
#define __IDebugBoundBreakpointErrorEvent_INTERFACE_DEFINED__

/* interface IDebugBoundBreakpointErrorEvent */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugBoundBreakpointErrorEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10EB6E39-2941-4B10-BCD4-849E46BAC8B3")
    IDebugBoundBreakpointErrorEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetErrorInformation( 
            /* [out] */ __RPC__deref_out_opt IDebugBoundBreakpoint2 **ppBp,
            /* [out] */ __RPC__deref_out_opt IDebugErrorBreakpointResolution174 **ppBoundBreakpoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugBoundBreakpointErrorEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugBoundBreakpointErrorEvent * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugBoundBreakpointErrorEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugBoundBreakpointErrorEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorInformation )( 
            __RPC__in IDebugBoundBreakpointErrorEvent * This,
            /* [out] */ __RPC__deref_out_opt IDebugBoundBreakpoint2 **ppBp,
            /* [out] */ __RPC__deref_out_opt IDebugErrorBreakpointResolution174 **ppBoundBreakpoint);
        
        END_INTERFACE
    } IDebugBoundBreakpointErrorEventVtbl;

    interface IDebugBoundBreakpointErrorEvent
    {
        CONST_VTBL struct IDebugBoundBreakpointErrorEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugBoundBreakpointErrorEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugBoundBreakpointErrorEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugBoundBreakpointErrorEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugBoundBreakpointErrorEvent_GetErrorInformation(This,ppBp,ppBoundBreakpoint)	\
    ( (This)->lpVtbl -> GetErrorInformation(This,ppBp,ppBoundBreakpoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugBoundBreakpointErrorEvent_INTERFACE_DEFINED__ */


#ifndef __IDebugDumpModule1712_INTERFACE_DEFINED__
#define __IDebugDumpModule1712_INTERFACE_DEFINED__

/* interface IDebugDumpModule1712 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugDumpModule1712;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7a0f7ad1-20a4-4f4d-8828-908b7bf2d3b7")
    IDebugDumpModule1712 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadBinary( 
            /* [in] */ enum ModuleSymbolLoadFlags flags,
            /* [out] */ __RPC__deref_out_opt IDebugDumpModule100 **ppModule) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDumpModule1712Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugDumpModule1712 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugDumpModule1712 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugDumpModule1712 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadBinary )( 
            __RPC__in IDebugDumpModule1712 * This,
            /* [in] */ enum ModuleSymbolLoadFlags flags,
            /* [out] */ __RPC__deref_out_opt IDebugDumpModule100 **ppModule);
        
        END_INTERFACE
    } IDebugDumpModule1712Vtbl;

    interface IDebugDumpModule1712
    {
        CONST_VTBL struct IDebugDumpModule1712Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDumpModule1712_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDumpModule1712_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDumpModule1712_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDumpModule1712_LoadBinary(This,flags,ppModule)	\
    ( (This)->lpVtbl -> LoadBinary(This,flags,ppModule) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDumpModule1712_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


