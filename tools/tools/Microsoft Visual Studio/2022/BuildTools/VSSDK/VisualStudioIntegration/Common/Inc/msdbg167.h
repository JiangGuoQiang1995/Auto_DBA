

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

#ifndef __msdbg167_h__
#define __msdbg167_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumMessagablePrograms_FWD_DEFINED__
#define __IEnumMessagablePrograms_FWD_DEFINED__
typedef interface IEnumMessagablePrograms IEnumMessagablePrograms;

#endif 	/* __IEnumMessagablePrograms_FWD_DEFINED__ */


#ifndef __IAsyncDebuggerHostMessageCompletionHandler_FWD_DEFINED__
#define __IAsyncDebuggerHostMessageCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebuggerHostMessageCompletionHandler IAsyncDebuggerHostMessageCompletionHandler;

#endif 	/* __IAsyncDebuggerHostMessageCompletionHandler_FWD_DEFINED__ */


#ifndef __IVsDebuggerHostMessageEvents_FWD_DEFINED__
#define __IVsDebuggerHostMessageEvents_FWD_DEFINED__
typedef interface IVsDebuggerHostMessageEvents IVsDebuggerHostMessageEvents;

#endif 	/* __IVsDebuggerHostMessageEvents_FWD_DEFINED__ */


#ifndef __IVsDebuggerHostMessageService_FWD_DEFINED__
#define __IVsDebuggerHostMessageService_FWD_DEFINED__
typedef interface IVsDebuggerHostMessageService IVsDebuggerHostMessageService;

#endif 	/* __IVsDebuggerHostMessageService_FWD_DEFINED__ */


#ifndef __IDebugMessagableProgram167_FWD_DEFINED__
#define __IDebugMessagableProgram167_FWD_DEFINED__
typedef interface IDebugMessagableProgram167 IDebugMessagableProgram167;

#endif 	/* __IDebugMessagableProgram167_FWD_DEFINED__ */


#ifndef __IDebugMessagableProgramReadyEvent167_FWD_DEFINED__
#define __IDebugMessagableProgramReadyEvent167_FWD_DEFINED__
typedef interface IDebugMessagableProgramReadyEvent167 IDebugMessagableProgramReadyEvent167;

#endif 	/* __IDebugMessagableProgramReadyEvent167_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg110.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg167_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

enum FRAMEINFO_FLAGS_EX167
    {
        FIF_EX_SHOW_CURRENT_TASK_ONLY	= 0x8
    } ;
typedef struct MessagableProgramInfo
    {
    GUID ProgramId;
    DWORD LocalPid;
    BSTR Name;
    } 	MessagableProgramInfo;



extern RPC_IF_HANDLE __MIDL_itf_msdbg167_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg167_0000_0000_v0_0_s_ifspec;

#ifndef __IEnumMessagablePrograms_INTERFACE_DEFINED__
#define __IEnumMessagablePrograms_INTERFACE_DEFINED__

/* interface IEnumMessagablePrograms */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IEnumMessagablePrograms;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B867DB0-C6F9-46F5-BC66-EFA846D5D7FE")
    IEnumMessagablePrograms : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) MessagableProgramInfo *rgelt,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumMessagablePrograms **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out ULONG *pcelt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumMessagableProgramsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumMessagablePrograms * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumMessagablePrograms * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumMessagablePrograms * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumMessagablePrograms * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) MessagableProgramInfo *rgelt,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumMessagablePrograms * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumMessagablePrograms * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumMessagablePrograms * This,
            /* [out] */ __RPC__deref_out_opt IEnumMessagablePrograms **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumMessagablePrograms * This,
            /* [out] */ __RPC__out ULONG *pcelt);
        
        END_INTERFACE
    } IEnumMessagableProgramsVtbl;

    interface IEnumMessagablePrograms
    {
        CONST_VTBL struct IEnumMessagableProgramsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumMessagablePrograms_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumMessagablePrograms_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumMessagablePrograms_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumMessagablePrograms_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumMessagablePrograms_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumMessagablePrograms_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumMessagablePrograms_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumMessagablePrograms_GetCount(This,pcelt)	\
    ( (This)->lpVtbl -> GetCount(This,pcelt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumMessagablePrograms_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebuggerHostMessageCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebuggerHostMessageCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebuggerHostMessageCompletionHandler */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IAsyncDebuggerHostMessageCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("282F3F38-B956-4D38-9412-AA6600882904")
    IAsyncDebuggerHostMessageCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in struct VsComponentMessage *responseMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebuggerHostMessageCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebuggerHostMessageCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebuggerHostMessageCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebuggerHostMessageCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebuggerHostMessageCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in struct VsComponentMessage *responseMessage);
        
        END_INTERFACE
    } IAsyncDebuggerHostMessageCompletionHandlerVtbl;

    interface IAsyncDebuggerHostMessageCompletionHandler
    {
        CONST_VTBL struct IAsyncDebuggerHostMessageCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebuggerHostMessageCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebuggerHostMessageCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebuggerHostMessageCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebuggerHostMessageCompletionHandler_OnComplete(This,hr,responseMessage)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,responseMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebuggerHostMessageCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerHostMessageEvents_INTERFACE_DEFINED__
#define __IVsDebuggerHostMessageEvents_INTERFACE_DEFINED__

/* interface IVsDebuggerHostMessageEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerHostMessageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AFFF99BB-15B2-4DF4-8BF8-04F2C71BF1FF")
    IVsDebuggerHostMessageEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnNewMessagableProgram( 
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnMessagableProgramDestroyed( 
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnMessagableProgramInfoUpdated( 
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerHostMessageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerHostMessageEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerHostMessageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerHostMessageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnNewMessagableProgram )( 
            __RPC__in IVsDebuggerHostMessageEvents * This,
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnMessagableProgramDestroyed )( 
            __RPC__in IVsDebuggerHostMessageEvents * This,
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnMessagableProgramInfoUpdated )( 
            __RPC__in IVsDebuggerHostMessageEvents * This,
            /* [in] */ __RPC__in MessagableProgramInfo *pMessagableProgramInfo);
        
        END_INTERFACE
    } IVsDebuggerHostMessageEventsVtbl;

    interface IVsDebuggerHostMessageEvents
    {
        CONST_VTBL struct IVsDebuggerHostMessageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerHostMessageEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerHostMessageEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerHostMessageEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerHostMessageEvents_OnNewMessagableProgram(This,pMessagableProgramInfo)	\
    ( (This)->lpVtbl -> OnNewMessagableProgram(This,pMessagableProgramInfo) ) 

#define IVsDebuggerHostMessageEvents_OnMessagableProgramDestroyed(This,pMessagableProgramInfo)	\
    ( (This)->lpVtbl -> OnMessagableProgramDestroyed(This,pMessagableProgramInfo) ) 

#define IVsDebuggerHostMessageEvents_OnMessagableProgramInfoUpdated(This,pMessagableProgramInfo)	\
    ( (This)->lpVtbl -> OnMessagableProgramInfoUpdated(This,pMessagableProgramInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerHostMessageEvents_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerHostMessageService_INTERFACE_DEFINED__
#define __IVsDebuggerHostMessageService_INTERFACE_DEFINED__

/* interface IVsDebuggerHostMessageService */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerHostMessageService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC0906E9-AF59-49EF-896E-A37A100AEF84")
    IVsDebuggerHostMessageService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SendDebuggerHostMessageAsync( 
            /* [in] */ __RPC__in REFGUID messagableProgramId,
            /* [in] */ struct VsComponentMessage message,
            /* [in] */ __RPC__in_opt IAsyncDebuggerHostMessageCompletionHandler *pCompletionHandler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMessagablePrograms( 
            /* [out] */ __RPC__deref_out_opt IEnumMessagablePrograms **ppEnumMessagablePrograms) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseMessagableProgramEvents( 
            /* [in] */ __RPC__in_opt IVsDebuggerHostMessageEvents *pEvents,
            /* [out] */ __RPC__out DWORD *cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseMessagableProgramEvents( 
            /* [in] */ DWORD cookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerHostMessageServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerHostMessageService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerHostMessageService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerHostMessageService * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendDebuggerHostMessageAsync )( 
            __RPC__in IVsDebuggerHostMessageService * This,
            /* [in] */ __RPC__in REFGUID messagableProgramId,
            /* [in] */ struct VsComponentMessage message,
            /* [in] */ __RPC__in_opt IAsyncDebuggerHostMessageCompletionHandler *pCompletionHandler);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMessagablePrograms )( 
            __RPC__in IVsDebuggerHostMessageService * This,
            /* [out] */ __RPC__deref_out_opt IEnumMessagablePrograms **ppEnumMessagablePrograms);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseMessagableProgramEvents )( 
            __RPC__in IVsDebuggerHostMessageService * This,
            /* [in] */ __RPC__in_opt IVsDebuggerHostMessageEvents *pEvents,
            /* [out] */ __RPC__out DWORD *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseMessagableProgramEvents )( 
            __RPC__in IVsDebuggerHostMessageService * This,
            /* [in] */ DWORD cookie);
        
        END_INTERFACE
    } IVsDebuggerHostMessageServiceVtbl;

    interface IVsDebuggerHostMessageService
    {
        CONST_VTBL struct IVsDebuggerHostMessageServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerHostMessageService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerHostMessageService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerHostMessageService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerHostMessageService_SendDebuggerHostMessageAsync(This,messagableProgramId,message,pCompletionHandler)	\
    ( (This)->lpVtbl -> SendDebuggerHostMessageAsync(This,messagableProgramId,message,pCompletionHandler) ) 

#define IVsDebuggerHostMessageService_EnumMessagablePrograms(This,ppEnumMessagablePrograms)	\
    ( (This)->lpVtbl -> EnumMessagablePrograms(This,ppEnumMessagablePrograms) ) 

#define IVsDebuggerHostMessageService_AdviseMessagableProgramEvents(This,pEvents,cookie)	\
    ( (This)->lpVtbl -> AdviseMessagableProgramEvents(This,pEvents,cookie) ) 

#define IVsDebuggerHostMessageService_UnadviseMessagableProgramEvents(This,cookie)	\
    ( (This)->lpVtbl -> UnadviseMessagableProgramEvents(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerHostMessageService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg167_0000_0004 */
/* [local] */ 

#define SID_SVsDebuggerHostMessageService __uuidof(IVsDebuggerHostMessageService)


extern RPC_IF_HANDLE __MIDL_itf_msdbg167_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg167_0000_0004_v0_0_s_ifspec;

#ifndef __IDebugMessagableProgram167_INTERFACE_DEFINED__
#define __IDebugMessagableProgram167_INTERFACE_DEFINED__

/* interface IDebugMessagableProgram167 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugMessagableProgram167;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC16D49F-4781-4FC0-826D-C5AE8DA99747")
    IDebugMessagableProgram167 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SendDebuggerHostMessageAsync( 
            /* [in] */ struct VsComponentMessage message,
            /* [in] */ __RPC__in_opt IAsyncDebuggerHostMessageCompletionHandler *pCompletionHandler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMessagableProgramInfo( 
            /* [out] */ __RPC__out MessagableProgramInfo *pMessagableProgramInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugMessagableProgram167Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugMessagableProgram167 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugMessagableProgram167 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugMessagableProgram167 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendDebuggerHostMessageAsync )( 
            __RPC__in IDebugMessagableProgram167 * This,
            /* [in] */ struct VsComponentMessage message,
            /* [in] */ __RPC__in_opt IAsyncDebuggerHostMessageCompletionHandler *pCompletionHandler);
        
        HRESULT ( STDMETHODCALLTYPE *GetMessagableProgramInfo )( 
            __RPC__in IDebugMessagableProgram167 * This,
            /* [out] */ __RPC__out MessagableProgramInfo *pMessagableProgramInfo);
        
        END_INTERFACE
    } IDebugMessagableProgram167Vtbl;

    interface IDebugMessagableProgram167
    {
        CONST_VTBL struct IDebugMessagableProgram167Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugMessagableProgram167_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugMessagableProgram167_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugMessagableProgram167_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugMessagableProgram167_SendDebuggerHostMessageAsync(This,message,pCompletionHandler)	\
    ( (This)->lpVtbl -> SendDebuggerHostMessageAsync(This,message,pCompletionHandler) ) 

#define IDebugMessagableProgram167_GetMessagableProgramInfo(This,pMessagableProgramInfo)	\
    ( (This)->lpVtbl -> GetMessagableProgramInfo(This,pMessagableProgramInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugMessagableProgram167_INTERFACE_DEFINED__ */


#ifndef __IDebugMessagableProgramReadyEvent167_INTERFACE_DEFINED__
#define __IDebugMessagableProgramReadyEvent167_INTERFACE_DEFINED__

/* interface IDebugMessagableProgramReadyEvent167 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugMessagableProgramReadyEvent167;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68BDC978-C107-46E1-80AD-29EB7AF9472D")
    IDebugMessagableProgramReadyEvent167 : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugMessagableProgramReadyEvent167Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugMessagableProgramReadyEvent167 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugMessagableProgramReadyEvent167 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugMessagableProgramReadyEvent167 * This);
        
        END_INTERFACE
    } IDebugMessagableProgramReadyEvent167Vtbl;

    interface IDebugMessagableProgramReadyEvent167
    {
        CONST_VTBL struct IDebugMessagableProgramReadyEvent167Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugMessagableProgramReadyEvent167_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugMessagableProgramReadyEvent167_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugMessagableProgramReadyEvent167_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugMessagableProgramReadyEvent167_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


