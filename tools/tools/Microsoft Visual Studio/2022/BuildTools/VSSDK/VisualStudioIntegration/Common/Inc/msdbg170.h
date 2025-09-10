

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

#ifndef __msdbg170_h__
#define __msdbg170_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IListSearchPathItemInfo_FWD_DEFINED__
#define __IListSearchPathItemInfo_FWD_DEFINED__
typedef interface IListSearchPathItemInfo IListSearchPathItemInfo;

#endif 	/* __IListSearchPathItemInfo_FWD_DEFINED__ */


#ifndef __IAsyncDebugPropertySearchCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugPropertySearchCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugPropertySearchCompletionHandler IAsyncDebugPropertySearchCompletionHandler;

#endif 	/* __IAsyncDebugPropertySearchCompletionHandler_FWD_DEFINED__ */


#ifndef __IAsyncDebugPropertySearchProvider_FWD_DEFINED__
#define __IAsyncDebugPropertySearchProvider_FWD_DEFINED__
typedef interface IAsyncDebugPropertySearchProvider IAsyncDebugPropertySearchProvider;

#endif 	/* __IAsyncDebugPropertySearchProvider_FWD_DEFINED__ */


#ifndef __IDebugStackFrame170_FWD_DEFINED__
#define __IDebugStackFrame170_FWD_DEFINED__
typedef interface IDebugStackFrame170 IDebugStackFrame170;

#endif 	/* __IDebugStackFrame170_FWD_DEFINED__ */


#ifndef __IDebugStepCompleteWithCaughtExceptionEvent170_FWD_DEFINED__
#define __IDebugStepCompleteWithCaughtExceptionEvent170_FWD_DEFINED__
typedef interface IDebugStepCompleteWithCaughtExceptionEvent170 IDebugStepCompleteWithCaughtExceptionEvent170;

#endif 	/* __IDebugStepCompleteWithCaughtExceptionEvent170_FWD_DEFINED__ */


#ifndef __IDebugSymbolSettings170_FWD_DEFINED__
#define __IDebugSymbolSettings170_FWD_DEFINED__
typedef interface IDebugSymbolSettings170 IDebugSymbolSettings170;

#endif 	/* __IDebugSymbolSettings170_FWD_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings170_FWD_DEFINED__
#define __IVsDebuggerSymbolSettings170_FWD_DEFINED__
typedef interface IVsDebuggerSymbolSettings170 IVsDebuggerSymbolSettings170;

#endif 	/* __IVsDebuggerSymbolSettings170_FWD_DEFINED__ */


#ifndef __IAsyncDebugEnumProcessesCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugEnumProcessesCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugEnumProcessesCompletionHandler IAsyncDebugEnumProcessesCompletionHandler;

#endif 	/* __IAsyncDebugEnumProcessesCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugPort170_FWD_DEFINED__
#define __IDebugPort170_FWD_DEFINED__
typedef interface IDebugPort170 IDebugPort170;

#endif 	/* __IDebugPort170_FWD_DEFINED__ */


#ifndef __IDebugSymbolsDocument_FWD_DEFINED__
#define __IDebugSymbolsDocument_FWD_DEFINED__
typedef interface IDebugSymbolsDocument IDebugSymbolsDocument;

#endif 	/* __IDebugSymbolsDocument_FWD_DEFINED__ */


#ifndef __IListDebugSymbolsDocuments_FWD_DEFINED__
#define __IListDebugSymbolsDocuments_FWD_DEFINED__
typedef interface IListDebugSymbolsDocuments IListDebugSymbolsDocuments;

#endif 	/* __IListDebugSymbolsDocuments_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetSymbolsDocumentsCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetSymbolsDocumentsCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetSymbolsDocumentsCompletionHandler IAsyncDebugGetSymbolsDocumentsCompletionHandler;

#endif 	/* __IAsyncDebugGetSymbolsDocumentsCompletionHandler_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetModuleInfoCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetModuleInfoCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetModuleInfoCompletionHandler IAsyncDebugGetModuleInfoCompletionHandler;

#endif 	/* __IAsyncDebugGetModuleInfoCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugModule170_FWD_DEFINED__
#define __IDebugModule170_FWD_DEFINED__
typedef interface IDebugModule170 IDebugModule170;

#endif 	/* __IDebugModule170_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetSourceLinkDataCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetSourceLinkDataCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetSourceLinkDataCompletionHandler IAsyncDebugGetSourceLinkDataCompletionHandler;

#endif 	/* __IAsyncDebugGetSourceLinkDataCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugSourceLinkModule_FWD_DEFINED__
#define __IDebugSourceLinkModule_FWD_DEFINED__
typedef interface IDebugSourceLinkModule IDebugSourceLinkModule;

#endif 	/* __IDebugSourceLinkModule_FWD_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelFactory170_FWD_DEFINED__
#define __IDebugCustomMsvsmonChannelFactory170_FWD_DEFINED__
typedef interface IDebugCustomMsvsmonChannelFactory170 IDebugCustomMsvsmonChannelFactory170;

#endif 	/* __IDebugCustomMsvsmonChannelFactory170_FWD_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelName170_FWD_DEFINED__
#define __IDebugCustomMsvsmonChannelName170_FWD_DEFINED__
typedef interface IDebugCustomMsvsmonChannelName170 IDebugCustomMsvsmonChannelName170;

#endif 	/* __IDebugCustomMsvsmonChannelName170_FWD_DEFINED__ */


#ifndef __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_FWD_DEFINED__
#define __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_FWD_DEFINED__
typedef interface IAsyncCustomMsvsmonChannelConnectCompletionHandler170 IAsyncCustomMsvsmonChannelConnectCompletionHandler170;

#endif 	/* __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_FWD_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannel170_FWD_DEFINED__
#define __IDebugCustomMsvsmonChannel170_FWD_DEFINED__
typedef interface IDebugCustomMsvsmonChannel170 IDebugCustomMsvsmonChannel170;

#endif 	/* __IDebugCustomMsvsmonChannel170_FWD_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelConnectErrorFilter170_FWD_DEFINED__
#define __IDebugCustomMsvsmonChannelConnectErrorFilter170_FWD_DEFINED__
typedef interface IDebugCustomMsvsmonChannelConnectErrorFilter170 IDebugCustomMsvsmonChannelConnectErrorFilter170;

#endif 	/* __IDebugCustomMsvsmonChannelConnectErrorFilter170_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetSourceServerDataCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetSourceServerDataCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetSourceServerDataCompletionHandler IAsyncDebugGetSourceServerDataCompletionHandler;

#endif 	/* __IAsyncDebugGetSourceServerDataCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugSourceServerModule170_FWD_DEFINED__
#define __IDebugSourceServerModule170_FWD_DEFINED__
typedef interface IDebugSourceServerModule170 IDebugSourceServerModule170;

#endif 	/* __IDebugSourceServerModule170_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg100.h"
#include "msdbg156.h"
#include "msdbg157.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg170_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/





enum enum_DEBUGPROP_INFO_FLAGS170
    {
        DEBUGPROP_INFO_SUPPORT_SEARCHING	= 0x40000000
    } ;
typedef DWORD DEBUGPROP170_INFO_FLAGS;

typedef struct _SEARCH_PATH_ITEM
    {
    UINT32 position;
    UINT32 totalCount;
    } 	SEARCH_PATH_ITEM;



extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0000_v0_0_s_ifspec;

#ifndef __IListSearchPathItemInfo_INTERFACE_DEFINED__
#define __IListSearchPathItemInfo_INTERFACE_DEFINED__

/* interface IListSearchPathItemInfo */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListSearchPathItemInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4994564E-2188-48FF-895A-1FE4541F4F15")
    IListSearchPathItemInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  SEARCH_PATH_ITEM *pPropertyInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  SEARCH_PATH_ITEM *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListSearchPathItemInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListSearchPathItemInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListSearchPathItemInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListSearchPathItemInfo * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListSearchPathItemInfo * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListSearchPathItemInfo * This,
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  SEARCH_PATH_ITEM *pPropertyInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListSearchPathItemInfo * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  SEARCH_PATH_ITEM *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListSearchPathItemInfoVtbl;

    interface IListSearchPathItemInfo
    {
        CONST_VTBL struct IListSearchPathItemInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListSearchPathItemInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListSearchPathItemInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListSearchPathItemInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListSearchPathItemInfo_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListSearchPathItemInfo_get_Item(This,lIndex,pPropertyInfo)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pPropertyInfo) ) 

#define IListSearchPathItemInfo_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListSearchPathItemInfo_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugPropertySearchCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugPropertySearchCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugPropertySearchCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugPropertySearchCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("551021E6-68DD-4869-A6A4-1130362B97FB")
    IAsyncDebugPropertySearchCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnSearchComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListSearchPathItemInfo *pathItems,
            /* [in] */ UINT32 depth) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugPropertySearchCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugPropertySearchCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugPropertySearchCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugPropertySearchCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnSearchComplete )( 
            __RPC__in IAsyncDebugPropertySearchCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListSearchPathItemInfo *pathItems,
            /* [in] */ UINT32 depth);
        
        END_INTERFACE
    } IAsyncDebugPropertySearchCompletionHandlerVtbl;

    interface IAsyncDebugPropertySearchCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugPropertySearchCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugPropertySearchCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugPropertySearchCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugPropertySearchCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugPropertySearchCompletionHandler_OnSearchComplete(This,hr,pathItems,depth)	\
    ( (This)->lpVtbl -> OnSearchComplete(This,hr,pathItems,depth) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugPropertySearchCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugPropertySearchProvider_INTERFACE_DEFINED__
#define __IAsyncDebugPropertySearchProvider_INTERFACE_DEFINED__

/* interface IAsyncDebugPropertySearchProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugPropertySearchProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50291DA6-0DB4-486C-9362-5E42BC711896")
    IAsyncDebugPropertySearchProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SearchPropertiesAsync( 
            /* [in] */ __RPC__in BSTR pSearchTerm,
            /* [in] */ UINT32 searchDepth,
            /* [size_is][in] */ __RPC__in_ecount_full(countItems) IDebugProperty2 **pItems,
            /* [in] */ UINT32 countItems,
            /* [size_is][in] */ __RPC__in_ecount_full(currentPositonDepth) UINT32 *pCurrentPosition,
            /* [in] */ UINT32 currentPositonDepth,
            /* [in] */ __RPC__in_opt IAsyncDebugPropertySearchCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugPropertySearchProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugPropertySearchProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugPropertySearchProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugPropertySearchProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *SearchPropertiesAsync )( 
            __RPC__in IAsyncDebugPropertySearchProvider * This,
            /* [in] */ __RPC__in BSTR pSearchTerm,
            /* [in] */ UINT32 searchDepth,
            /* [size_is][in] */ __RPC__in_ecount_full(countItems) IDebugProperty2 **pItems,
            /* [in] */ UINT32 countItems,
            /* [size_is][in] */ __RPC__in_ecount_full(currentPositonDepth) UINT32 *pCurrentPosition,
            /* [in] */ UINT32 currentPositonDepth,
            /* [in] */ __RPC__in_opt IAsyncDebugPropertySearchCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IAsyncDebugPropertySearchProviderVtbl;

    interface IAsyncDebugPropertySearchProvider
    {
        CONST_VTBL struct IAsyncDebugPropertySearchProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugPropertySearchProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugPropertySearchProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugPropertySearchProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugPropertySearchProvider_SearchPropertiesAsync(This,pSearchTerm,searchDepth,pItems,countItems,pCurrentPosition,currentPositonDepth,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> SearchPropertiesAsync(This,pSearchTerm,searchDepth,pItems,countItems,pCurrentPosition,currentPositonDepth,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugPropertySearchProvider_INTERFACE_DEFINED__ */


#ifndef __IDebugStackFrame170_INTERFACE_DEFINED__
#define __IDebugStackFrame170_INTERFACE_DEFINED__

/* interface IDebugStackFrame170 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStackFrame170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1626D701-3D6E-466E-B8FE-637A3A5DACEA")
    IDebugStackFrame170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertySearchProvider( 
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ UINT nRadix,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertySearchProvider **ppSearchProvider) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStackFrame170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStackFrame170 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStackFrame170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStackFrame170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertySearchProvider )( 
            __RPC__in IDebugStackFrame170 * This,
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ UINT nRadix,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertySearchProvider **ppSearchProvider);
        
        END_INTERFACE
    } IDebugStackFrame170Vtbl;

    interface IDebugStackFrame170
    {
        CONST_VTBL struct IDebugStackFrame170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStackFrame170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStackFrame170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStackFrame170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStackFrame170_GetPropertySearchProvider(This,dwFields,nRadix,dwTimeout,ppSearchProvider)	\
    ( (This)->lpVtbl -> GetPropertySearchProvider(This,dwFields,nRadix,dwTimeout,ppSearchProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStackFrame170_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg170_0000_0004 */
/* [local] */ 


enum enum_EXCEPTION_STATE170
    {
        EXCEPTION_CAUGHT	= 0x20000
    } ;
typedef DWORD EXCEPTION_STATE;



extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0004_v0_0_s_ifspec;

#ifndef __IDebugStepCompleteWithCaughtExceptionEvent170_INTERFACE_DEFINED__
#define __IDebugStepCompleteWithCaughtExceptionEvent170_INTERFACE_DEFINED__

/* interface IDebugStepCompleteWithCaughtExceptionEvent170 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStepCompleteWithCaughtExceptionEvent170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bbd315ad-14dc-4b0c-8e0d-978b9d99a62d")
    IDebugStepCompleteWithCaughtExceptionEvent170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCaughtException( 
            /* [out] */ __RPC__deref_out_opt IDebugExceptionEvent2 **ppCaughtException) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStepCompleteWithCaughtExceptionEvent170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStepCompleteWithCaughtExceptionEvent170 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStepCompleteWithCaughtExceptionEvent170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStepCompleteWithCaughtExceptionEvent170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCaughtException )( 
            __RPC__in IDebugStepCompleteWithCaughtExceptionEvent170 * This,
            /* [out] */ __RPC__deref_out_opt IDebugExceptionEvent2 **ppCaughtException);
        
        END_INTERFACE
    } IDebugStepCompleteWithCaughtExceptionEvent170Vtbl;

    interface IDebugStepCompleteWithCaughtExceptionEvent170
    {
        CONST_VTBL struct IDebugStepCompleteWithCaughtExceptionEvent170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStepCompleteWithCaughtExceptionEvent170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStepCompleteWithCaughtExceptionEvent170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStepCompleteWithCaughtExceptionEvent170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStepCompleteWithCaughtExceptionEvent170_GetCaughtException(This,ppCaughtException)	\
    ( (This)->lpVtbl -> GetCaughtException(This,ppCaughtException) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStepCompleteWithCaughtExceptionEvent170_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg170_0000_0005 */
/* [local] */ 


enum SymbolLoadFlags
    {
        SymbolLoad_None	= 0,
        SymbolLoad_ManualLoad	= 0x1,
        SymbolLoad_LoadAdjacent	= 0x2,
        SymbolLoad_Automatic	= 0x4
    } ;
DEFINE_ENUM_FLAG_OPERATORS(SymbolLoadFlags)


extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0005_v0_0_s_ifspec;

#ifndef __IDebugSymbolSettings170_INTERFACE_DEFINED__
#define __IDebugSymbolSettings170_INTERFACE_DEFINED__

/* interface IDebugSymbolSettings170 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSymbolSettings170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eadebdf6-5fb8-44ff-967c-beac8246d3e0")
    IDebugSymbolSettings170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSymbolLoadState170( 
            /* [in] */ enum SymbolLoadFlags flags,
            /* [in] */ __RPC__in BSTR bstrIncludeList,
            /* [in] */ __RPC__in BSTR bstrExcludeList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSymbolSettings170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSymbolSettings170 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSymbolSettings170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSymbolSettings170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSymbolLoadState170 )( 
            __RPC__in IDebugSymbolSettings170 * This,
            /* [in] */ enum SymbolLoadFlags flags,
            /* [in] */ __RPC__in BSTR bstrIncludeList,
            /* [in] */ __RPC__in BSTR bstrExcludeList);
        
        END_INTERFACE
    } IDebugSymbolSettings170Vtbl;

    interface IDebugSymbolSettings170
    {
        CONST_VTBL struct IDebugSymbolSettings170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSymbolSettings170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSymbolSettings170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSymbolSettings170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSymbolSettings170_SetSymbolLoadState170(This,flags,bstrIncludeList,bstrExcludeList)	\
    ( (This)->lpVtbl -> SetSymbolLoadState170(This,flags,bstrIncludeList,bstrExcludeList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSymbolSettings170_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings170_INTERFACE_DEFINED__
#define __IVsDebuggerSymbolSettings170_INTERFACE_DEFINED__

/* interface IVsDebuggerSymbolSettings170 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerSymbolSettings170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa6086eb-b8f7-4b4a-be6b-37e4dfe1a933")
    IVsDebuggerSymbolSettings170 : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AutomaticSymbolLoad( 
            /* [in] */ VARIANT_BOOL flag) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomaticSymbolLoad( 
            /* [retval][out] */ VARIANT_BOOL *flag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerSymbolSettings170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerSymbolSettings170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerSymbolSettings170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerSymbolSettings170 * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutomaticSymbolLoad )( 
            IVsDebuggerSymbolSettings170 * This,
            /* [in] */ VARIANT_BOOL flag);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomaticSymbolLoad )( 
            IVsDebuggerSymbolSettings170 * This,
            /* [retval][out] */ VARIANT_BOOL *flag);
        
        END_INTERFACE
    } IVsDebuggerSymbolSettings170Vtbl;

    interface IVsDebuggerSymbolSettings170
    {
        CONST_VTBL struct IVsDebuggerSymbolSettings170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerSymbolSettings170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerSymbolSettings170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerSymbolSettings170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerSymbolSettings170_put_AutomaticSymbolLoad(This,flag)	\
    ( (This)->lpVtbl -> put_AutomaticSymbolLoad(This,flag) ) 

#define IVsDebuggerSymbolSettings170_get_AutomaticSymbolLoad(This,flag)	\
    ( (This)->lpVtbl -> get_AutomaticSymbolLoad(This,flag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerSymbolSettings170_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugEnumProcessesCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugEnumProcessesCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugEnumProcessesCompletionHandler */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IAsyncDebugEnumProcessesCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("761BC6BB-D7C0-45A5-8033-3106019426A6")
    IAsyncDebugEnumProcessesCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ IEnumDebugProcesses2 *pEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEnumProcessesCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsyncDebugEnumProcessesCompletionHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsyncDebugEnumProcessesCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsyncDebugEnumProcessesCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            IAsyncDebugEnumProcessesCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ IEnumDebugProcesses2 *pEnum);
        
        END_INTERFACE
    } IAsyncDebugEnumProcessesCompletionHandlerVtbl;

    interface IAsyncDebugEnumProcessesCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugEnumProcessesCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEnumProcessesCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEnumProcessesCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEnumProcessesCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEnumProcessesCompletionHandler_OnComplete(This,hr,pEnum)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEnumProcessesCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugPort170_INTERFACE_DEFINED__
#define __IDebugPort170_INTERFACE_DEFINED__

/* interface IDebugPort170 */
/* [object][unique][version][uuid][local] */ 


EXTERN_C const IID IID_IDebugPort170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59B9DCD4-CB85-47C6-B0F1-12E43E3EBF2E")
    IDebugPort170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumProcessesAsync( 
            /* [in] */ BOOL fIncludeFromAllUsers,
            /* [in] */ IAsyncDebugEnumProcessesCompletionHandler *pCompletionHandler,
            /* [out] */ IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsAutoRefresh( 
            /* [out] */ BOOL *pSupportsAutoRefresh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsFetchingParentProcessIds( 
            /* [out] */ BOOL *pSupportsParentProcessIds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugPort170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugPort170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugPort170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugPort170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumProcessesAsync )( 
            IDebugPort170 * This,
            /* [in] */ BOOL fIncludeFromAllUsers,
            /* [in] */ IAsyncDebugEnumProcessesCompletionHandler *pCompletionHandler,
            /* [out] */ IAsyncDebugEngineOperation **ppDebugOperation);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsAutoRefresh )( 
            IDebugPort170 * This,
            /* [out] */ BOOL *pSupportsAutoRefresh);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsFetchingParentProcessIds )( 
            IDebugPort170 * This,
            /* [out] */ BOOL *pSupportsParentProcessIds);
        
        END_INTERFACE
    } IDebugPort170Vtbl;

    interface IDebugPort170
    {
        CONST_VTBL struct IDebugPort170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugPort170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugPort170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugPort170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugPort170_EnumProcessesAsync(This,fIncludeFromAllUsers,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> EnumProcessesAsync(This,fIncludeFromAllUsers,pCompletionHandler,ppDebugOperation) ) 

#define IDebugPort170_SupportsAutoRefresh(This,pSupportsAutoRefresh)	\
    ( (This)->lpVtbl -> SupportsAutoRefresh(This,pSupportsAutoRefresh) ) 

#define IDebugPort170_SupportsFetchingParentProcessIds(This,pSupportsParentProcessIds)	\
    ( (This)->lpVtbl -> SupportsFetchingParentProcessIds(This,pSupportsParentProcessIds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugPort170_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg170_0000_0009 */
/* [local] */ 


enum enum_PROCESS_PROPERTY_TYPE_170
    {
        PROCESS_PROPERTY_PARENT_PID	= 4,
        PROCESS_PROPERTY_APP_POOL_NAME	= 5,
        PROCESS_PROPERTY_APP_POOL_BINDINGS	= 6
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg170_0000_0009_v0_0_s_ifspec;

#ifndef __IDebugSymbolsDocument_INTERFACE_DEFINED__
#define __IDebugSymbolsDocument_INTERFACE_DEFINED__

/* interface IDebugSymbolsDocument */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugSymbolsDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA134780-7AE3-45BD-9F42-6C1BF0F348C7")
    IDebugSymbolsDocument : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContent( 
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes,
            /* [out] */ ULONG32 *pcBytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChecksumAndAlgorithmId( 
            /* [out] */ GUID *pguidAlgorithmId,
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes,
            /* [out] */ ULONG32 *pcBytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocumentType( 
            /* [out] */ GUID *pguidDocumentType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasEmbeddedSource( 
            /* [out] */ BOOL *pfRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLanguageAndVendor( 
            /* [out] */ GUID *pguidLanguage,
            /* [out] */ GUID *pguidVendor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [out] */ BSTR *pbstrPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSymbolsDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugSymbolsDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugSymbolsDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugSymbolsDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContent )( 
            IDebugSymbolsDocument * This,
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes,
            /* [out] */ ULONG32 *pcBytes);
        
        HRESULT ( STDMETHODCALLTYPE *GetChecksumAndAlgorithmId )( 
            IDebugSymbolsDocument * This,
            /* [out] */ GUID *pguidAlgorithmId,
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes,
            /* [out] */ ULONG32 *pcBytes);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentType )( 
            IDebugSymbolsDocument * This,
            /* [out] */ GUID *pguidDocumentType);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasEmbeddedSource )( 
            IDebugSymbolsDocument * This,
            /* [out] */ BOOL *pfRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLanguageAndVendor )( 
            IDebugSymbolsDocument * This,
            /* [out] */ GUID *pguidLanguage,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IDebugSymbolsDocument * This,
            /* [out] */ BSTR *pbstrPath);
        
        END_INTERFACE
    } IDebugSymbolsDocumentVtbl;

    interface IDebugSymbolsDocument
    {
        CONST_VTBL struct IDebugSymbolsDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSymbolsDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSymbolsDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSymbolsDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSymbolsDocument_GetContent(This,ppBytes,pcBytes)	\
    ( (This)->lpVtbl -> GetContent(This,ppBytes,pcBytes) ) 

#define IDebugSymbolsDocument_GetChecksumAndAlgorithmId(This,pguidAlgorithmId,ppBytes,pcBytes)	\
    ( (This)->lpVtbl -> GetChecksumAndAlgorithmId(This,pguidAlgorithmId,ppBytes,pcBytes) ) 

#define IDebugSymbolsDocument_GetDocumentType(This,pguidDocumentType)	\
    ( (This)->lpVtbl -> GetDocumentType(This,pguidDocumentType) ) 

#define IDebugSymbolsDocument_GetHasEmbeddedSource(This,pfRetVal)	\
    ( (This)->lpVtbl -> GetHasEmbeddedSource(This,pfRetVal) ) 

#define IDebugSymbolsDocument_GetLanguageAndVendor(This,pguidLanguage,pguidVendor)	\
    ( (This)->lpVtbl -> GetLanguageAndVendor(This,pguidLanguage,pguidVendor) ) 

#define IDebugSymbolsDocument_GetPath(This,pbstrPath)	\
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSymbolsDocument_INTERFACE_DEFINED__ */


#ifndef __IListDebugSymbolsDocuments_INTERFACE_DEFINED__
#define __IListDebugSymbolsDocuments_INTERFACE_DEFINED__

/* interface IListDebugSymbolsDocuments */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListDebugSymbolsDocuments;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6C2E3D9-2F52-41FB-B94B-2BC0B3C56D74")
    IListDebugSymbolsDocuments : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  IDebugSymbolsDocument **pDocument) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  IDebugSymbolsDocument **itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListDebugSymbolsDocumentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListDebugSymbolsDocuments * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListDebugSymbolsDocuments * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListDebugSymbolsDocuments * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListDebugSymbolsDocuments * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListDebugSymbolsDocuments * This,
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  IDebugSymbolsDocument **pDocument);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListDebugSymbolsDocuments * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  IDebugSymbolsDocument **itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListDebugSymbolsDocumentsVtbl;

    interface IListDebugSymbolsDocuments
    {
        CONST_VTBL struct IListDebugSymbolsDocumentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListDebugSymbolsDocuments_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListDebugSymbolsDocuments_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListDebugSymbolsDocuments_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListDebugSymbolsDocuments_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListDebugSymbolsDocuments_get_Item(This,lIndex,pDocument)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pDocument) ) 

#define IListDebugSymbolsDocuments_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListDebugSymbolsDocuments_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetSymbolsDocumentsCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetSymbolsDocumentsCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetSymbolsDocumentsCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetSymbolsDocumentsCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEF4A45F-5D9F-41A7-A8CE-80E16BCE6470")
    IAsyncDebugGetSymbolsDocumentsCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListDebugSymbolsDocuments *pDocuments) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetSymbolsDocumentsCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetSymbolsDocumentsCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetSymbolsDocumentsCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetSymbolsDocumentsCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetSymbolsDocumentsCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListDebugSymbolsDocuments *pDocuments);
        
        END_INTERFACE
    } IAsyncDebugGetSymbolsDocumentsCompletionHandlerVtbl;

    interface IAsyncDebugGetSymbolsDocumentsCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetSymbolsDocumentsCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetSymbolsDocumentsCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetSymbolsDocumentsCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetSymbolsDocumentsCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetSymbolsDocumentsCompletionHandler_OnComplete(This,hr,pDocuments)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pDocuments) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetSymbolsDocumentsCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetModuleInfoCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetModuleInfoCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetModuleInfoCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetModuleInfoCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B69C229-C582-4BEF-962C-250A2A6F3FFB")
    IAsyncDebugGetModuleInfoCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in MODULE_INFO *pInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetModuleInfoCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetModuleInfoCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetModuleInfoCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetModuleInfoCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetModuleInfoCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in MODULE_INFO *pInfo);
        
        END_INTERFACE
    } IAsyncDebugGetModuleInfoCompletionHandlerVtbl;

    interface IAsyncDebugGetModuleInfoCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetModuleInfoCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetModuleInfoCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetModuleInfoCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetModuleInfoCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetModuleInfoCompletionHandler_OnComplete(This,hr,pInfo)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetModuleInfoCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugModule170_INTERFACE_DEFINED__
#define __IDebugModule170_INTERFACE_DEFINED__

/* interface IDebugModule170 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugModule170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0916E6E-B220-4FA7-BFC1-E2117DF6695C")
    IDebugModule170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAllSymbolsDocumentsAsync( 
            /* [in] */ __RPC__in_opt IAsyncDebugGetSymbolsDocumentsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInfoAsync( 
            /* [in] */ MODULE_INFO_FIELDS dwFields,
            /* [in] */ __RPC__in_opt IAsyncDebugGetModuleInfoCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugModule170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugModule170 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugModule170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugModule170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAllSymbolsDocumentsAsync )( 
            __RPC__in IDebugModule170 * This,
            /* [in] */ __RPC__in_opt IAsyncDebugGetSymbolsDocumentsCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfoAsync )( 
            __RPC__in IDebugModule170 * This,
            /* [in] */ MODULE_INFO_FIELDS dwFields,
            /* [in] */ __RPC__in_opt IAsyncDebugGetModuleInfoCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugModule170Vtbl;

    interface IDebugModule170
    {
        CONST_VTBL struct IDebugModule170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugModule170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugModule170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugModule170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugModule170_GetAllSymbolsDocumentsAsync(This,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetAllSymbolsDocumentsAsync(This,pCompletionHandler,ppDebugOperation) ) 

#define IDebugModule170_GetInfoAsync(This,dwFields,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetInfoAsync(This,dwFields,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugModule170_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetSourceLinkDataCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetSourceLinkDataCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetSourceLinkDataCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetSourceLinkDataCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94AC04BA-75CF-4DD6-8A5C-0A7F8A33E1C0")
    IAsyncDebugGetSourceLinkDataCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in LPCOLESTR pbstrData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetSourceLinkDataCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetSourceLinkDataCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetSourceLinkDataCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetSourceLinkDataCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetSourceLinkDataCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in LPCOLESTR pbstrData);
        
        END_INTERFACE
    } IAsyncDebugGetSourceLinkDataCompletionHandlerVtbl;

    interface IAsyncDebugGetSourceLinkDataCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetSourceLinkDataCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetSourceLinkDataCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetSourceLinkDataCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetSourceLinkDataCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetSourceLinkDataCompletionHandler_OnComplete(This,hr,pbstrData)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pbstrData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetSourceLinkDataCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugSourceLinkModule_INTERFACE_DEFINED__
#define __IDebugSourceLinkModule_INTERFACE_DEFINED__

/* interface IDebugSourceLinkModule */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSourceLinkModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47F45BEC-3040-4AB6-8B41-CBD33DA8D956")
    IDebugSourceLinkModule : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSourceLinkDataAsync( 
            /* [in] */ __RPC__in_opt IAsyncDebugGetSourceLinkDataCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSourceLinkModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSourceLinkModule * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSourceLinkModule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSourceLinkModule * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceLinkDataAsync )( 
            __RPC__in IDebugSourceLinkModule * This,
            /* [in] */ __RPC__in_opt IAsyncDebugGetSourceLinkDataCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugSourceLinkModuleVtbl;

    interface IDebugSourceLinkModule
    {
        CONST_VTBL struct IDebugSourceLinkModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSourceLinkModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSourceLinkModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSourceLinkModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSourceLinkModule_GetSourceLinkDataAsync(This,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetSourceLinkDataAsync(This,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSourceLinkModule_INTERFACE_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelFactory170_INTERFACE_DEFINED__
#define __IDebugCustomMsvsmonChannelFactory170_INTERFACE_DEFINED__

/* interface IDebugCustomMsvsmonChannelFactory170 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugCustomMsvsmonChannelFactory170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36B23826-0287-483A-9050-53CFDB249477")
    IDebugCustomMsvsmonChannelFactory170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParsePortName( 
            /* [annotation][in] */ 
            _In_  LPCWSTR userText,
            /* [annotation][out] */ 
            _Outptr_  IDebugCustomMsvsmonChannelName170 **channelName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRegistryRoot( 
            /* [annotation][in] */ 
            _In_  LPCOLESTR registryRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLocale( 
            /* [in] */ WORD wLangID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCustomMsvsmonChannelFactory170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugCustomMsvsmonChannelFactory170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugCustomMsvsmonChannelFactory170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugCustomMsvsmonChannelFactory170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParsePortName )( 
            IDebugCustomMsvsmonChannelFactory170 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR userText,
            /* [annotation][out] */ 
            _Outptr_  IDebugCustomMsvsmonChannelName170 **channelName);
        
        HRESULT ( STDMETHODCALLTYPE *SetRegistryRoot )( 
            IDebugCustomMsvsmonChannelFactory170 * This,
            /* [annotation][in] */ 
            _In_  LPCOLESTR registryRoot);
        
        HRESULT ( STDMETHODCALLTYPE *SetLocale )( 
            IDebugCustomMsvsmonChannelFactory170 * This,
            /* [in] */ WORD wLangID);
        
        END_INTERFACE
    } IDebugCustomMsvsmonChannelFactory170Vtbl;

    interface IDebugCustomMsvsmonChannelFactory170
    {
        CONST_VTBL struct IDebugCustomMsvsmonChannelFactory170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCustomMsvsmonChannelFactory170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCustomMsvsmonChannelFactory170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCustomMsvsmonChannelFactory170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCustomMsvsmonChannelFactory170_ParsePortName(This,userText,channelName)	\
    ( (This)->lpVtbl -> ParsePortName(This,userText,channelName) ) 

#define IDebugCustomMsvsmonChannelFactory170_SetRegistryRoot(This,registryRoot)	\
    ( (This)->lpVtbl -> SetRegistryRoot(This,registryRoot) ) 

#define IDebugCustomMsvsmonChannelFactory170_SetLocale(This,wLangID)	\
    ( (This)->lpVtbl -> SetLocale(This,wLangID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCustomMsvsmonChannelFactory170_INTERFACE_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelName170_INTERFACE_DEFINED__
#define __IDebugCustomMsvsmonChannelName170_INTERFACE_DEFINED__

/* interface IDebugCustomMsvsmonChannelName170 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugCustomMsvsmonChannelName170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5D56ADBA-5737-44F4-AEA8-79BED4B7F7A6")
    IDebugCustomMsvsmonChannelName170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFullName( 
            /* [annotation][out] */ 
            _Outptr_  BSTR *fullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectAsync( 
            /* [in] */ UINT16 msvsmonArchitecture,
            /* [annotation][in] */ 
            _In_  IDebugEventCallback2 *eventCallback,
            /* [annotation][in] */ 
            _In_  IAsyncCustomMsvsmonChannelConnectCompletionHandler170 *completionHandler,
            /* [annotation][out] */ 
            _Outptr_  IAsyncDebugEngineOperation **asyncOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCustomMsvsmonChannelName170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugCustomMsvsmonChannelName170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugCustomMsvsmonChannelName170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugCustomMsvsmonChannelName170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFullName )( 
            IDebugCustomMsvsmonChannelName170 * This,
            /* [annotation][out] */ 
            _Outptr_  BSTR *fullName);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectAsync )( 
            IDebugCustomMsvsmonChannelName170 * This,
            /* [in] */ UINT16 msvsmonArchitecture,
            /* [annotation][in] */ 
            _In_  IDebugEventCallback2 *eventCallback,
            /* [annotation][in] */ 
            _In_  IAsyncCustomMsvsmonChannelConnectCompletionHandler170 *completionHandler,
            /* [annotation][out] */ 
            _Outptr_  IAsyncDebugEngineOperation **asyncOperation);
        
        END_INTERFACE
    } IDebugCustomMsvsmonChannelName170Vtbl;

    interface IDebugCustomMsvsmonChannelName170
    {
        CONST_VTBL struct IDebugCustomMsvsmonChannelName170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCustomMsvsmonChannelName170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCustomMsvsmonChannelName170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCustomMsvsmonChannelName170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCustomMsvsmonChannelName170_GetFullName(This,fullName)	\
    ( (This)->lpVtbl -> GetFullName(This,fullName) ) 

#define IDebugCustomMsvsmonChannelName170_ConnectAsync(This,msvsmonArchitecture,eventCallback,completionHandler,asyncOperation)	\
    ( (This)->lpVtbl -> ConnectAsync(This,msvsmonArchitecture,eventCallback,completionHandler,asyncOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCustomMsvsmonChannelName170_INTERFACE_DEFINED__ */


#ifndef __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_INTERFACE_DEFINED__
#define __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_INTERFACE_DEFINED__

/* interface IAsyncCustomMsvsmonChannelConnectCompletionHandler170 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IAsyncCustomMsvsmonChannelConnectCompletionHandler170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9022194D-CF84-43AE-9743-90CFCDD9B42F")
    IAsyncCustomMsvsmonChannelConnectCompletionHandler170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [annotation][in] */ 
            _In_opt_  IDebugCustomMsvsmonChannel170 *channel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncCustomMsvsmonChannelConnectCompletionHandler170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsyncCustomMsvsmonChannelConnectCompletionHandler170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsyncCustomMsvsmonChannelConnectCompletionHandler170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsyncCustomMsvsmonChannelConnectCompletionHandler170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            IAsyncCustomMsvsmonChannelConnectCompletionHandler170 * This,
            /* [in] */ HRESULT hr,
            /* [annotation][in] */ 
            _In_opt_  IDebugCustomMsvsmonChannel170 *channel);
        
        END_INTERFACE
    } IAsyncCustomMsvsmonChannelConnectCompletionHandler170Vtbl;

    interface IAsyncCustomMsvsmonChannelConnectCompletionHandler170
    {
        CONST_VTBL struct IAsyncCustomMsvsmonChannelConnectCompletionHandler170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncCustomMsvsmonChannelConnectCompletionHandler170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncCustomMsvsmonChannelConnectCompletionHandler170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncCustomMsvsmonChannelConnectCompletionHandler170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncCustomMsvsmonChannelConnectCompletionHandler170_OnComplete(This,hr,channel)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,channel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncCustomMsvsmonChannelConnectCompletionHandler170_INTERFACE_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannel170_INTERFACE_DEFINED__
#define __IDebugCustomMsvsmonChannel170_INTERFACE_DEFINED__

/* interface IDebugCustomMsvsmonChannel170 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugCustomMsvsmonChannel170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD55206A-CF46-4436-8B78-74F2A9AFD836")
    IDebugCustomMsvsmonChannel170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryIsText( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QuerySupportsMultipleMsvsmonCPUArchitectures( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Read( 
            /* [annotation] */ 
            _Out_writes_bytes_to_(bufferSize, *bytesRead)  void *buffer,
            /* [annotation][in] */ 
            _In_  ULONG bufferSize,
            /* [annotation] */ 
            _Out_  ULONG *bytesRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Write( 
            /* [annotation] */ 
            _In_reads_bytes_(bufferSize)  const void *buffer,
            /* [annotation][in] */ 
            _In_  ULONG bufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCustomMsvsmonChannel170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugCustomMsvsmonChannel170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugCustomMsvsmonChannel170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugCustomMsvsmonChannel170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryIsText )( 
            IDebugCustomMsvsmonChannel170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QuerySupportsMultipleMsvsmonCPUArchitectures )( 
            IDebugCustomMsvsmonChannel170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IDebugCustomMsvsmonChannel170 * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(bufferSize, *bytesRead)  void *buffer,
            /* [annotation][in] */ 
            _In_  ULONG bufferSize,
            /* [annotation] */ 
            _Out_  ULONG *bytesRead);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IDebugCustomMsvsmonChannel170 * This,
            /* [annotation] */ 
            _In_reads_bytes_(bufferSize)  const void *buffer,
            /* [annotation][in] */ 
            _In_  ULONG bufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDebugCustomMsvsmonChannel170 * This);
        
        END_INTERFACE
    } IDebugCustomMsvsmonChannel170Vtbl;

    interface IDebugCustomMsvsmonChannel170
    {
        CONST_VTBL struct IDebugCustomMsvsmonChannel170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCustomMsvsmonChannel170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCustomMsvsmonChannel170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCustomMsvsmonChannel170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCustomMsvsmonChannel170_QueryIsText(This)	\
    ( (This)->lpVtbl -> QueryIsText(This) ) 

#define IDebugCustomMsvsmonChannel170_QuerySupportsMultipleMsvsmonCPUArchitectures(This)	\
    ( (This)->lpVtbl -> QuerySupportsMultipleMsvsmonCPUArchitectures(This) ) 

#define IDebugCustomMsvsmonChannel170_Read(This,buffer,bufferSize,bytesRead)	\
    ( (This)->lpVtbl -> Read(This,buffer,bufferSize,bytesRead) ) 

#define IDebugCustomMsvsmonChannel170_Write(This,buffer,bufferSize)	\
    ( (This)->lpVtbl -> Write(This,buffer,bufferSize) ) 

#define IDebugCustomMsvsmonChannel170_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCustomMsvsmonChannel170_INTERFACE_DEFINED__ */


#ifndef __IDebugCustomMsvsmonChannelConnectErrorFilter170_INTERFACE_DEFINED__
#define __IDebugCustomMsvsmonChannelConnectErrorFilter170_INTERFACE_DEFINED__

/* interface IDebugCustomMsvsmonChannelConnectErrorFilter170 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugCustomMsvsmonChannelConnectErrorFilter170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D8F6B5A-3FA9-44D6-BB7E-5086FB0A91FC")
    IDebugCustomMsvsmonChannelConnectErrorFilter170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnectFailure( 
            /* [annotation][out][in] */ 
            _Inout_  HRESULT *failureCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCustomMsvsmonChannelConnectErrorFilter170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugCustomMsvsmonChannelConnectErrorFilter170 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugCustomMsvsmonChannelConnectErrorFilter170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugCustomMsvsmonChannelConnectErrorFilter170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnConnectFailure )( 
            IDebugCustomMsvsmonChannelConnectErrorFilter170 * This,
            /* [annotation][out][in] */ 
            _Inout_  HRESULT *failureCode);
        
        END_INTERFACE
    } IDebugCustomMsvsmonChannelConnectErrorFilter170Vtbl;

    interface IDebugCustomMsvsmonChannelConnectErrorFilter170
    {
        CONST_VTBL struct IDebugCustomMsvsmonChannelConnectErrorFilter170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCustomMsvsmonChannelConnectErrorFilter170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCustomMsvsmonChannelConnectErrorFilter170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCustomMsvsmonChannelConnectErrorFilter170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCustomMsvsmonChannelConnectErrorFilter170_OnConnectFailure(This,failureCode)	\
    ( (This)->lpVtbl -> OnConnectFailure(This,failureCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCustomMsvsmonChannelConnectErrorFilter170_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetSourceServerDataCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetSourceServerDataCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetSourceServerDataCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetSourceServerDataCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A7BC4E0C-8529-4079-B3EE-59F2B974CDEA")
    IAsyncDebugGetSourceServerDataCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG pDataByteCount,
            /* [size_is][in] */ __RPC__in_ecount_full(pDataByteCount) BYTE *ppData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetSourceServerDataCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetSourceServerDataCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetSourceServerDataCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetSourceServerDataCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetSourceServerDataCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG pDataByteCount,
            /* [size_is][in] */ __RPC__in_ecount_full(pDataByteCount) BYTE *ppData);
        
        END_INTERFACE
    } IAsyncDebugGetSourceServerDataCompletionHandlerVtbl;

    interface IAsyncDebugGetSourceServerDataCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetSourceServerDataCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetSourceServerDataCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetSourceServerDataCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetSourceServerDataCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetSourceServerDataCompletionHandler_OnComplete(This,hr,pDataByteCount,ppData)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pDataByteCount,ppData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetSourceServerDataCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugSourceServerModule170_INTERFACE_DEFINED__
#define __IDebugSourceServerModule170_INTERFACE_DEFINED__

/* interface IDebugSourceServerModule170 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSourceServerModule170;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5D5D170-F854-417C-BF14-DD07AFC4B8CA")
    IDebugSourceServerModule170 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSourceServerDataAsync( 
            /* [in] */ __RPC__in_opt IAsyncDebugGetSourceServerDataCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSourceServerModule170Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSourceServerModule170 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSourceServerModule170 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSourceServerModule170 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceServerDataAsync )( 
            __RPC__in IDebugSourceServerModule170 * This,
            /* [in] */ __RPC__in_opt IAsyncDebugGetSourceServerDataCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugSourceServerModule170Vtbl;

    interface IDebugSourceServerModule170
    {
        CONST_VTBL struct IDebugSourceServerModule170Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSourceServerModule170_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSourceServerModule170_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSourceServerModule170_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSourceServerModule170_GetSourceServerDataAsync(This,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetSourceServerDataAsync(This,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSourceServerModule170_INTERFACE_DEFINED__ */


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


