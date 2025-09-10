

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

#ifndef __msdbg174_h__
#define __msdbg174_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugModule174_FWD_DEFINED__
#define __IDebugModule174_FWD_DEFINED__
typedef interface IDebugModule174 IDebugModule174;

#endif 	/* __IDebugModule174_FWD_DEFINED__ */


#ifndef __IDebugErrorBreakpointResolution174_FWD_DEFINED__
#define __IDebugErrorBreakpointResolution174_FWD_DEFINED__
typedef interface IDebugErrorBreakpointResolution174 IDebugErrorBreakpointResolution174;

#endif 	/* __IDebugErrorBreakpointResolution174_FWD_DEFINED__ */


#ifndef __IDebugPendingBreakpoint174_FWD_DEFINED__
#define __IDebugPendingBreakpoint174_FWD_DEFINED__
typedef interface IDebugPendingBreakpoint174 IDebugPendingBreakpoint174;

#endif 	/* __IDebugPendingBreakpoint174_FWD_DEFINED__ */


#ifndef __IDebugNonDebugProcessInfo174_FWD_DEFINED__
#define __IDebugNonDebugProcessInfo174_FWD_DEFINED__
typedef interface IDebugNonDebugProcessInfo174 IDebugNonDebugProcessInfo174;

#endif 	/* __IDebugNonDebugProcessInfo174_FWD_DEFINED__ */


#ifndef __IDebugNonDebugEvent174_FWD_DEFINED__
#define __IDebugNonDebugEvent174_FWD_DEFINED__
typedef interface IDebugNonDebugEvent174 IDebugNonDebugEvent174;

#endif 	/* __IDebugNonDebugEvent174_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg174_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

enum ModuleSymbolLoadFlags
    {
        SymbolLoadFlags_None	= 0,
        SymbolLoadFlags_LocalSourcesOnly	= 0x1,
        SymbolLoadFlags_NoPrompt	= 0x2
    } ;
DEFINE_ENUM_FLAG_OPERATORS(ModuleSymbolLoadFlags)


extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugModule174_INTERFACE_DEFINED__
#define __IDebugModule174_INTERFACE_DEFINED__

/* interface IDebugModule174 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugModule174;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D74EB328-F42B-4F4C-A87B-AF66247B2FCE")
    IDebugModule174 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadSymbols( 
            /* [in] */ enum ModuleSymbolLoadFlags flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugModule174Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugModule174 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugModule174 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugModule174 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadSymbols )( 
            IDebugModule174 * This,
            /* [in] */ enum ModuleSymbolLoadFlags flags);
        
        END_INTERFACE
    } IDebugModule174Vtbl;

    interface IDebugModule174
    {
        CONST_VTBL struct IDebugModule174Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugModule174_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugModule174_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugModule174_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugModule174_LoadSymbols(This,flags)	\
    ( (This)->lpVtbl -> LoadSymbols(This,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugModule174_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg174_0000_0001 */
/* [local] */ 

typedef 
enum _BreakpointSuggestedFix
    {
        BPSF_None	= 0,
        BPSF_DisableJMC	= 1,
        BPSF_DisableManagedOptimizations	= 2
    } 	BreakpointSuggestedFix;


enum _BPERESI_FIELDS174
    {
        BPERESI174_BPRESLOCATION	= 0x1,
        BPERESI174_PROGRAM	= 0x2,
        BPERESI174_THREAD	= 0x4,
        BPERESI174_MESSAGE	= 0x8,
        BPERESI174_TYPE	= 0x10,
        BPERESI174_ALLFIELDS	= 0xffffffff,
        BPERESI174_SUGGESTEDFIX	= 0x20
    } ;
#if 0
typedef enum _BPERESI_FIELDS174 BPERESI_FIELDS174;

#endif
typedef DWORD BPERESI_FIELDS174;
typedef struct _BP_ERROR_RESOLUTION_INFO174
    {
    BPERESI_FIELDS174 dwFields;
    BP_RESOLUTION_LOCATION bpResLocation;
    IDebugProgram2 *pProgram;
    IDebugThread2 *pThread;
    BSTR bstrMessage;
    BP_ERROR_TYPE dwType;
    BreakpointSuggestedFix suggestedFix;
    } 	BP_ERROR_RESOLUTION_INFO174;



extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0001_v0_0_s_ifspec;

#ifndef __IDebugErrorBreakpointResolution174_INTERFACE_DEFINED__
#define __IDebugErrorBreakpointResolution174_INTERFACE_DEFINED__

/* interface IDebugErrorBreakpointResolution174 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugErrorBreakpointResolution174;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A318B44-3878-4015-ACCF-E8323F5B4A73")
    IDebugErrorBreakpointResolution174 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResolutionInfo174( 
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugErrorBreakpointResolution174Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugErrorBreakpointResolution174 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugErrorBreakpointResolution174 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugErrorBreakpointResolution174 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolutionInfo174 )( 
            IDebugErrorBreakpointResolution174 * This,
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo);
        
        END_INTERFACE
    } IDebugErrorBreakpointResolution174Vtbl;

    interface IDebugErrorBreakpointResolution174
    {
        CONST_VTBL struct IDebugErrorBreakpointResolution174Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugErrorBreakpointResolution174_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugErrorBreakpointResolution174_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugErrorBreakpointResolution174_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugErrorBreakpointResolution174_GetResolutionInfo174(This,dwFields,pErrorResolutionInfo)	\
    ( (This)->lpVtbl -> GetResolutionInfo174(This,dwFields,pErrorResolutionInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugErrorBreakpointResolution174_INTERFACE_DEFINED__ */


#ifndef __IDebugPendingBreakpoint174_INTERFACE_DEFINED__
#define __IDebugPendingBreakpoint174_INTERFACE_DEFINED__

/* interface IDebugPendingBreakpoint174 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugPendingBreakpoint174;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78DD0597-1BE1-4EA7-96AE-5FA787E929D4")
    IDebugPendingBreakpoint174 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetErrorResolutionInfo174( 
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugPendingBreakpoint174Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugPendingBreakpoint174 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugPendingBreakpoint174 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugPendingBreakpoint174 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorResolutionInfo174 )( 
            IDebugPendingBreakpoint174 * This,
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo);
        
        END_INTERFACE
    } IDebugPendingBreakpoint174Vtbl;

    interface IDebugPendingBreakpoint174
    {
        CONST_VTBL struct IDebugPendingBreakpoint174Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugPendingBreakpoint174_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugPendingBreakpoint174_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugPendingBreakpoint174_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugPendingBreakpoint174_GetErrorResolutionInfo174(This,dwFields,pErrorResolutionInfo)	\
    ( (This)->lpVtbl -> GetErrorResolutionInfo174(This,dwFields,pErrorResolutionInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugPendingBreakpoint174_INTERFACE_DEFINED__ */


#ifndef __IDebugNonDebugProcessInfo174_INTERFACE_DEFINED__
#define __IDebugNonDebugProcessInfo174_INTERFACE_DEFINED__

/* interface IDebugNonDebugProcessInfo174 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugNonDebugProcessInfo174;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17e698af-e905-4e9f-b8a6-80da45382ee1")
    IDebugNonDebugProcessInfo174 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSystemProcessId( 
            /* [out] */ __RPC__out DWORD *processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLaunchProject( 
            /* [out] */ __RPC__deref_out_opt IUnknown **project) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugNonDebugProcessInfo174Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetSystemProcessId )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This,
            /* [out] */ __RPC__out DWORD *processId);
        
        HRESULT ( STDMETHODCALLTYPE *GetLaunchProject )( 
            __RPC__in IDebugNonDebugProcessInfo174 * This,
            /* [out] */ __RPC__deref_out_opt IUnknown **project);
        
        END_INTERFACE
    } IDebugNonDebugProcessInfo174Vtbl;

    interface IDebugNonDebugProcessInfo174
    {
        CONST_VTBL struct IDebugNonDebugProcessInfo174Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugNonDebugProcessInfo174_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugNonDebugProcessInfo174_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugNonDebugProcessInfo174_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugNonDebugProcessInfo174_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IDebugNonDebugProcessInfo174_GetSystemProcessId(This,processId)	\
    ( (This)->lpVtbl -> GetSystemProcessId(This,processId) ) 

#define IDebugNonDebugProcessInfo174_GetLaunchProject(This,project)	\
    ( (This)->lpVtbl -> GetLaunchProject(This,project) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugNonDebugProcessInfo174_INTERFACE_DEFINED__ */


#ifndef __IDebugNonDebugEvent174_INTERFACE_DEFINED__
#define __IDebugNonDebugEvent174_INTERFACE_DEFINED__

/* interface IDebugNonDebugEvent174 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugNonDebugEvent174;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5ab6da30-aaa2-4227-b509-cf9e801c4f29")
    IDebugNonDebugEvent174 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNonDebugProcess( 
            /* [out] */ __RPC__deref_out_opt IDebugNonDebugProcessInfo174 **process) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugNonDebugEvent174Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugNonDebugEvent174 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugNonDebugEvent174 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugNonDebugEvent174 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNonDebugProcess )( 
            __RPC__in IDebugNonDebugEvent174 * This,
            /* [out] */ __RPC__deref_out_opt IDebugNonDebugProcessInfo174 **process);
        
        END_INTERFACE
    } IDebugNonDebugEvent174Vtbl;

    interface IDebugNonDebugEvent174
    {
        CONST_VTBL struct IDebugNonDebugEvent174Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugNonDebugEvent174_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugNonDebugEvent174_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugNonDebugEvent174_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugNonDebugEvent174_GetNonDebugProcess(This,process)	\
    ( (This)->lpVtbl -> GetNonDebugProcess(This,process) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugNonDebugEvent174_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg174_0000_0005 */
/* [local] */ 


enum enum_LAUNCH_FLAGS174
    {
        LAUNCH_INTEGRATED_CONSOLE_SERVICE	= 0x1000
    } ;
typedef DWORD LAUNCH_FLAGS174;



extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg174_0000_0005_v0_0_s_ifspec;

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


