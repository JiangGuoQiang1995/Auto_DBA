

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

#ifndef __msdbg158_h__
#define __msdbg158_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugProcessInfoUpdatedEvent158_FWD_DEFINED__
#define __IDebugProcessInfoUpdatedEvent158_FWD_DEFINED__
typedef interface IDebugProcessInfoUpdatedEvent158 IDebugProcessInfoUpdatedEvent158;

#endif 	/* __IDebugProcessInfoUpdatedEvent158_FWD_DEFINED__ */


#ifndef __IDebugProperty158_FWD_DEFINED__
#define __IDebugProperty158_FWD_DEFINED__
typedef interface IDebugProperty158 IDebugProperty158;

#endif 	/* __IDebugProperty158_FWD_DEFINED__ */


#ifndef __IAsyncDebugEngineOperation158_FWD_DEFINED__
#define __IAsyncDebugEngineOperation158_FWD_DEFINED__
typedef interface IAsyncDebugEngineOperation158 IAsyncDebugEngineOperation158;

#endif 	/* __IAsyncDebugEngineOperation158_FWD_DEFINED__ */


#ifndef __IAsyncDebugEngineOperationWorkList158_FWD_DEFINED__
#define __IAsyncDebugEngineOperationWorkList158_FWD_DEFINED__
typedef interface IAsyncDebugEngineOperationWorkList158 IAsyncDebugEngineOperationWorkList158;

#endif 	/* __IAsyncDebugEngineOperationWorkList158_FWD_DEFINED__ */


#ifndef __IVsDebuggerDelayedEnterBreakSink_FWD_DEFINED__
#define __IVsDebuggerDelayedEnterBreakSink_FWD_DEFINED__
typedef interface IVsDebuggerDelayedEnterBreakSink IVsDebuggerDelayedEnterBreakSink;

#endif 	/* __IVsDebuggerDelayedEnterBreakSink_FWD_DEFINED__ */


#ifndef __IVsDebuggerDelayedEnterBreak_FWD_DEFINED__
#define __IVsDebuggerDelayedEnterBreak_FWD_DEFINED__
typedef interface IVsDebuggerDelayedEnterBreak IVsDebuggerDelayedEnterBreak;

#endif 	/* __IVsDebuggerDelayedEnterBreak_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg158_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugProcessInfoUpdatedEvent158_INTERFACE_DEFINED__
#define __IDebugProcessInfoUpdatedEvent158_INTERFACE_DEFINED__

/* interface IDebugProcessInfoUpdatedEvent158 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProcessInfoUpdatedEvent158;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96C242FC-F584-4C3E-8FED-384D3D13EF36")
    IDebugProcessInfoUpdatedEvent158 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUpdatedProcessInfo( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName,
            /* [out] */ __RPC__out DWORD *pdwSystemProcessId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProcessInfoUpdatedEvent158Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProcessInfoUpdatedEvent158 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProcessInfoUpdatedEvent158 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProcessInfoUpdatedEvent158 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUpdatedProcessInfo )( 
            __RPC__in IDebugProcessInfoUpdatedEvent158 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName,
            /* [out] */ __RPC__out DWORD *pdwSystemProcessId);
        
        END_INTERFACE
    } IDebugProcessInfoUpdatedEvent158Vtbl;

    interface IDebugProcessInfoUpdatedEvent158
    {
        CONST_VTBL struct IDebugProcessInfoUpdatedEvent158Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProcessInfoUpdatedEvent158_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProcessInfoUpdatedEvent158_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProcessInfoUpdatedEvent158_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProcessInfoUpdatedEvent158_GetUpdatedProcessInfo(This,pbstrName,pdwSystemProcessId)	\
    ( (This)->lpVtbl -> GetUpdatedProcessInfo(This,pbstrName,pdwSystemProcessId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProcessInfoUpdatedEvent158_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg158_0000_0001 */
/* [local] */ 


enum FRAMEINFO_FLAGS_EX158
    {
        FIF_EX_SHOW_TASK_IDS	= 0x2
    } ;
#define DBG_ATTRIB_HAS_DATA_BREAKPOINT 0x1000000000000000
#define DBG_ATTRIB_HAS_EXTENDED_ATTRIBS  0x8000000000000000
#define DBG_EXATTRIB_MEM_FUTURE  0x0000000000000001
#define DBG_EXATTRIB_MEM_PAST  0x0000000000000002
#define DBG_EXATTRIB_MEM_GAP  0x0000000000000004
typedef UINT64 DBG_EXATTRIB_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0001_v0_0_s_ifspec;

#ifndef __IDebugProperty158_INTERFACE_DEFINED__
#define __IDebugProperty158_INTERFACE_DEFINED__

/* interface IDebugProperty158 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProperty158;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E02453B1-F68A-47C1-B243-25760004A4B9")
    IDebugProperty158 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExtendedAttribs( 
            /* [out] */ __RPC__out DBG_EXATTRIB_FLAGS *pExFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataBreakpointInfo( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrAddress,
            /* [out] */ __RPC__out DWORD *pSize,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProperty158Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProperty158 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProperty158 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProperty158 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtendedAttribs )( 
            __RPC__in IDebugProperty158 * This,
            /* [out] */ __RPC__out DBG_EXATTRIB_FLAGS *pExFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataBreakpointInfo )( 
            __RPC__in IDebugProperty158 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrAddress,
            /* [out] */ __RPC__out DWORD *pSize,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrError);
        
        END_INTERFACE
    } IDebugProperty158Vtbl;

    interface IDebugProperty158
    {
        CONST_VTBL struct IDebugProperty158Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProperty158_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProperty158_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProperty158_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProperty158_GetExtendedAttribs(This,pExFlags)	\
    ( (This)->lpVtbl -> GetExtendedAttribs(This,pExFlags) ) 

#define IDebugProperty158_GetDataBreakpointInfo(This,pbstrAddress,pSize,pbstrError)	\
    ( (This)->lpVtbl -> GetDataBreakpointInfo(This,pbstrAddress,pSize,pbstrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProperty158_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg158_0000_0002 */
/* [local] */ 


enum enum_LAUNCH_FLAGS158
    {
        LAUNCH_FORCE_PSEUDO_REMOTE_DEBUG	= 0x200,
        LAUNCH_INTEGRATED_CONSOLE	= 0x400
    } ;
typedef DWORD LAUNCH_FLAGS158;


enum enum_EXECUTION_PRIORITY
    {
        WLP_HIGH_PRIORITY_CLASS	= 0x10,
        WLP_ABOVE_NORMAL_PRIORITY_CLASS	= 0x20,
        WLP_NORMAL_PRIORITY_CLASS	= 0x30,
        WLP_BELOW_NORMAL_PRIORITY_CLASS	= 0x40,
        WLP_IDLE_PRIORITY_CLASS	= 0x50
    } ;
typedef DWORD EXECUTION_PRIORITY;



extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0002_v0_0_s_ifspec;

#ifndef __IAsyncDebugEngineOperation158_INTERFACE_DEFINED__
#define __IAsyncDebugEngineOperation158_INTERFACE_DEFINED__

/* interface IAsyncDebugEngineOperation158 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugEngineOperation158;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FDDD94E-01DA-4409-844C-36C63AAD3FC9")
    IAsyncDebugEngineOperation158 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginExecute( 
            /* [in] */ EXECUTION_PRIORITY priority) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEngineOperation158Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugEngineOperation158 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugEngineOperation158 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugEngineOperation158 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginExecute )( 
            __RPC__in IAsyncDebugEngineOperation158 * This,
            /* [in] */ EXECUTION_PRIORITY priority);
        
        END_INTERFACE
    } IAsyncDebugEngineOperation158Vtbl;

    interface IAsyncDebugEngineOperation158
    {
        CONST_VTBL struct IAsyncDebugEngineOperation158Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEngineOperation158_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEngineOperation158_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEngineOperation158_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEngineOperation158_BeginExecute(This,priority)	\
    ( (This)->lpVtbl -> BeginExecute(This,priority) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEngineOperation158_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugEngineOperationWorkList158_INTERFACE_DEFINED__
#define __IAsyncDebugEngineOperationWorkList158_INTERFACE_DEFINED__

/* interface IAsyncDebugEngineOperationWorkList158 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugEngineOperationWorkList158;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44DFF079-4364-4D72-9997-CD3FE128CE39")
    IAsyncDebugEngineOperationWorkList158 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginExecute( 
            /* [in] */ EXECUTION_PRIORITY priority) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEngineOperationWorkList158Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugEngineOperationWorkList158 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugEngineOperationWorkList158 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugEngineOperationWorkList158 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginExecute )( 
            __RPC__in IAsyncDebugEngineOperationWorkList158 * This,
            /* [in] */ EXECUTION_PRIORITY priority);
        
        END_INTERFACE
    } IAsyncDebugEngineOperationWorkList158Vtbl;

    interface IAsyncDebugEngineOperationWorkList158
    {
        CONST_VTBL struct IAsyncDebugEngineOperationWorkList158Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEngineOperationWorkList158_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEngineOperationWorkList158_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEngineOperationWorkList158_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEngineOperationWorkList158_BeginExecute(This,priority)	\
    ( (This)->lpVtbl -> BeginExecute(This,priority) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEngineOperationWorkList158_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerDelayedEnterBreakSink_INTERFACE_DEFINED__
#define __IVsDebuggerDelayedEnterBreakSink_INTERFACE_DEFINED__

/* interface IVsDebuggerDelayedEnterBreakSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVsDebuggerDelayedEnterBreakSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B00E6E5A-7A25-454D-858A-396F7D24E17F")
    IVsDebuggerDelayedEnterBreakSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnDelayedEnterBreak( 
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerDelayedEnterBreakSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerDelayedEnterBreakSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerDelayedEnterBreakSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerDelayedEnterBreakSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDelayedEnterBreak )( 
            __RPC__in IVsDebuggerDelayedEnterBreakSink * This,
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread);
        
        END_INTERFACE
    } IVsDebuggerDelayedEnterBreakSinkVtbl;

    interface IVsDebuggerDelayedEnterBreakSink
    {
        CONST_VTBL struct IVsDebuggerDelayedEnterBreakSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerDelayedEnterBreakSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerDelayedEnterBreakSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerDelayedEnterBreakSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerDelayedEnterBreakSink_OnDelayedEnterBreak(This,pThread)	\
    ( (This)->lpVtbl -> OnDelayedEnterBreak(This,pThread) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerDelayedEnterBreakSink_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerDelayedEnterBreak_INTERFACE_DEFINED__
#define __IVsDebuggerDelayedEnterBreak_INTERFACE_DEFINED__

/* interface IVsDebuggerDelayedEnterBreak */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVsDebuggerDelayedEnterBreak;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A01C5DF6-ED76-4BCE-B38D-50563C2E59F0")
    IVsDebuggerDelayedEnterBreak : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Subscribe( 
            /* [in] */ EXECUTION_PRIORITY priority,
            /* [in] */ __RPC__in_opt IVsDebuggerDelayedEnterBreakSink *pEventsSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unsubscribe( 
            /* [in] */ __RPC__in_opt IVsDebuggerDelayedEnterBreakSink *pEventsSink) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerDelayedEnterBreakVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerDelayedEnterBreak * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerDelayedEnterBreak * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerDelayedEnterBreak * This);
        
        HRESULT ( STDMETHODCALLTYPE *Subscribe )( 
            __RPC__in IVsDebuggerDelayedEnterBreak * This,
            /* [in] */ EXECUTION_PRIORITY priority,
            /* [in] */ __RPC__in_opt IVsDebuggerDelayedEnterBreakSink *pEventsSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unsubscribe )( 
            __RPC__in IVsDebuggerDelayedEnterBreak * This,
            /* [in] */ __RPC__in_opt IVsDebuggerDelayedEnterBreakSink *pEventsSink);
        
        END_INTERFACE
    } IVsDebuggerDelayedEnterBreakVtbl;

    interface IVsDebuggerDelayedEnterBreak
    {
        CONST_VTBL struct IVsDebuggerDelayedEnterBreakVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerDelayedEnterBreak_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerDelayedEnterBreak_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerDelayedEnterBreak_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerDelayedEnterBreak_Subscribe(This,priority,pEventsSink)	\
    ( (This)->lpVtbl -> Subscribe(This,priority,pEventsSink) ) 

#define IVsDebuggerDelayedEnterBreak_Unsubscribe(This,pEventsSink)	\
    ( (This)->lpVtbl -> Unsubscribe(This,pEventsSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerDelayedEnterBreak_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg158_0000_0006 */
/* [local] */ 


enum enum_FRAMEINFO_FLAGS_VALUES158
    {
        FIFV_INLINE_FRAME	= 0x400
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg158_0000_0006_v0_0_s_ifspec;

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


