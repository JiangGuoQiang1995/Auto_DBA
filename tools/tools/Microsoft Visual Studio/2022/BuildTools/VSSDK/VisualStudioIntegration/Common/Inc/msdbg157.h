

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

#ifndef __msdbg157_h__
#define __msdbg157_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IListDebugFrameInfo_FWD_DEFINED__
#define __IListDebugFrameInfo_FWD_DEFINED__
typedef interface IListDebugFrameInfo IListDebugFrameInfo;

#endif 	/* __IListDebugFrameInfo_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetFramesCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetFramesCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetFramesCompletionHandler IAsyncDebugGetFramesCompletionHandler;

#endif 	/* __IAsyncDebugGetFramesCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugThread157_FWD_DEFINED__
#define __IDebugThread157_FWD_DEFINED__
typedef interface IDebugThread157 IDebugThread157;

#endif 	/* __IDebugThread157_FWD_DEFINED__ */


#ifndef __IListDebugPropertyInfo_FWD_DEFINED__
#define __IListDebugPropertyInfo_FWD_DEFINED__
typedef interface IListDebugPropertyInfo IListDebugPropertyInfo;

#endif 	/* __IListDebugPropertyInfo_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetPropertiesCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetPropertiesCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetPropertiesCompletionHandler IAsyncDebugGetPropertiesCompletionHandler;

#endif 	/* __IAsyncDebugGetPropertiesCompletionHandler_FWD_DEFINED__ */


#ifndef __IAsyncDebugEvaluateCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugEvaluateCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugEvaluateCompletionHandler IAsyncDebugEvaluateCompletionHandler;

#endif 	/* __IAsyncDebugEvaluateCompletionHandler_FWD_DEFINED__ */


#ifndef __IAsyncDebugPropertyInfoProvider_FWD_DEFINED__
#define __IAsyncDebugPropertyInfoProvider_FWD_DEFINED__
typedef interface IAsyncDebugPropertyInfoProvider IAsyncDebugPropertyInfoProvider;

#endif 	/* __IAsyncDebugPropertyInfoProvider_FWD_DEFINED__ */


#ifndef __IDebugStackFrame157_FWD_DEFINED__
#define __IDebugStackFrame157_FWD_DEFINED__
typedef interface IDebugStackFrame157 IDebugStackFrame157;

#endif 	/* __IDebugStackFrame157_FWD_DEFINED__ */


#ifndef __IDebugProperty157_FWD_DEFINED__
#define __IDebugProperty157_FWD_DEFINED__
typedef interface IDebugProperty157 IDebugProperty157;

#endif 	/* __IDebugProperty157_FWD_DEFINED__ */


#ifndef __IDebugExpression157_FWD_DEFINED__
#define __IDebugExpression157_FWD_DEFINED__
typedef interface IDebugExpression157 IDebugExpression157;

#endif 	/* __IDebugExpression157_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg156.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg157_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg157_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg157_0000_0000_v0_0_s_ifspec;

#ifndef __IListDebugFrameInfo_INTERFACE_DEFINED__
#define __IListDebugFrameInfo_INTERFACE_DEFINED__

/* interface IListDebugFrameInfo */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListDebugFrameInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11d2710f-2e6f-4931-8fc8-936bfb5938a3")
    IListDebugFrameInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  FRAMEINFO *pFrameInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  FRAMEINFO *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListDebugFrameInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListDebugFrameInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListDebugFrameInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListDebugFrameInfo * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListDebugFrameInfo * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListDebugFrameInfo * This,
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  FRAMEINFO *pFrameInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListDebugFrameInfo * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  FRAMEINFO *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListDebugFrameInfoVtbl;

    interface IListDebugFrameInfo
    {
        CONST_VTBL struct IListDebugFrameInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListDebugFrameInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListDebugFrameInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListDebugFrameInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListDebugFrameInfo_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListDebugFrameInfo_get_Item(This,lIndex,pFrameInfo)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pFrameInfo) ) 

#define IListDebugFrameInfo_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListDebugFrameInfo_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetFramesCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetFramesCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetFramesCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetFramesCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15C89F68-17D2-4C34-9714-E5A1E0824904")
    IAsyncDebugGetFramesCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListDebugFrameInfo *pStackFrames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetFramesCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetFramesCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetFramesCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetFramesCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetFramesCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IListDebugFrameInfo *pStackFrames);
        
        END_INTERFACE
    } IAsyncDebugGetFramesCompletionHandlerVtbl;

    interface IAsyncDebugGetFramesCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetFramesCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetFramesCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetFramesCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetFramesCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetFramesCompletionHandler_OnComplete(This,hr,pStackFrames)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pStackFrames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetFramesCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugThread157_INTERFACE_DEFINED__
#define __IDebugThread157_INTERFACE_DEFINED__

/* interface IDebugThread157 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugThread157;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43C7542B-F624-4E1F-9761-BB5A9396CAFF")
    IDebugThread157 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAllFramesAsync( 
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFlags,
            /* [in] */ DWORD dwFlagsEx,
            /* [in] */ UINT radix,
            /* [in] */ __RPC__in_opt IAsyncDebugGetFramesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugThread157Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugThread157 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugThread157 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugThread157 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAllFramesAsync )( 
            __RPC__in IDebugThread157 * This,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFlags,
            /* [in] */ DWORD dwFlagsEx,
            /* [in] */ UINT radix,
            /* [in] */ __RPC__in_opt IAsyncDebugGetFramesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugThread157Vtbl;

    interface IDebugThread157
    {
        CONST_VTBL struct IDebugThread157Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugThread157_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugThread157_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugThread157_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugThread157_GetAllFramesAsync(This,dwFlags,dwFlagsEx,radix,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetAllFramesAsync(This,dwFlags,dwFlagsEx,radix,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugThread157_INTERFACE_DEFINED__ */


#ifndef __IListDebugPropertyInfo_INTERFACE_DEFINED__
#define __IListDebugPropertyInfo_INTERFACE_DEFINED__

/* interface IListDebugPropertyInfo */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListDebugPropertyInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A9DDAD2-BF0F-4406-B57D-BE93AD78EE05")
    IListDebugPropertyInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  DEBUG_PROPERTY_INFO *pPropertyInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  DEBUG_PROPERTY_INFO *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListDebugPropertyInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListDebugPropertyInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListDebugPropertyInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListDebugPropertyInfo * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListDebugPropertyInfo * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListDebugPropertyInfo * This,
            /* [in] */ ULONG32 lIndex,
            /* [annotation][retval][out] */ 
            _Out_  DEBUG_PROPERTY_INFO *pPropertyInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListDebugPropertyInfo * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  DEBUG_PROPERTY_INFO *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListDebugPropertyInfoVtbl;

    interface IListDebugPropertyInfo
    {
        CONST_VTBL struct IListDebugPropertyInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListDebugPropertyInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListDebugPropertyInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListDebugPropertyInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListDebugPropertyInfo_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListDebugPropertyInfo_get_Item(This,lIndex,pPropertyInfo)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pPropertyInfo) ) 

#define IListDebugPropertyInfo_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListDebugPropertyInfo_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetPropertiesCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetPropertiesCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetPropertiesCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetPropertiesCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C9AFC5D-FD11-43F9-A6AA-345625DEA2A3")
    IAsyncDebugGetPropertiesCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ DWORD countTotal,
            /* [in] */ __RPC__in_opt IListDebugPropertyInfo *pDebugPropertyInfos) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetPropertiesCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetPropertiesCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetPropertiesCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetPropertiesCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetPropertiesCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ DWORD countTotal,
            /* [in] */ __RPC__in_opt IListDebugPropertyInfo *pDebugPropertyInfos);
        
        END_INTERFACE
    } IAsyncDebugGetPropertiesCompletionHandlerVtbl;

    interface IAsyncDebugGetPropertiesCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetPropertiesCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetPropertiesCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetPropertiesCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetPropertiesCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetPropertiesCompletionHandler_OnComplete(This,hr,countTotal,pDebugPropertyInfos)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,countTotal,pDebugPropertyInfos) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetPropertiesCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugEvaluateCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugEvaluateCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugEvaluateCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugEvaluateCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF75AC59-E3CF-456B-A5A2-B8B8FBDFB7A7")
    IAsyncDebugEvaluateCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IDebugProperty2 *pDebugProperty) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEvaluateCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugEvaluateCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugEvaluateCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugEvaluateCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugEvaluateCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IDebugProperty2 *pDebugProperty);
        
        END_INTERFACE
    } IAsyncDebugEvaluateCompletionHandlerVtbl;

    interface IAsyncDebugEvaluateCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugEvaluateCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEvaluateCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEvaluateCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEvaluateCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEvaluateCompletionHandler_OnComplete(This,hr,pDebugProperty)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pDebugProperty) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEvaluateCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugPropertyInfoProvider_INTERFACE_DEFINED__
#define __IAsyncDebugPropertyInfoProvider_INTERFACE_DEFINED__

/* interface IAsyncDebugPropertyInfoProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugPropertyInfoProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB7E4DEC-D761-41E6-8281-8976641EFE90")
    IAsyncDebugPropertyInfoProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertiesAsync( 
            /* [in] */ ULONG firstIndex,
            /* [in] */ ULONG count,
            /* [in] */ __RPC__in_opt IAsyncDebugGetPropertiesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugPropertyInfoProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugPropertyInfoProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugPropertyInfoProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugPropertyInfoProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )( 
            __RPC__in IAsyncDebugPropertyInfoProvider * This,
            /* [in] */ ULONG firstIndex,
            /* [in] */ ULONG count,
            /* [in] */ __RPC__in_opt IAsyncDebugGetPropertiesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IAsyncDebugPropertyInfoProviderVtbl;

    interface IAsyncDebugPropertyInfoProvider
    {
        CONST_VTBL struct IAsyncDebugPropertyInfoProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugPropertyInfoProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugPropertyInfoProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugPropertyInfoProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugPropertyInfoProvider_GetPropertiesAsync(This,firstIndex,count,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetPropertiesAsync(This,firstIndex,count,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugPropertyInfoProvider_INTERFACE_DEFINED__ */


#ifndef __IDebugStackFrame157_INTERFACE_DEFINED__
#define __IDebugStackFrame157_INTERFACE_DEFINED__

/* interface IDebugStackFrame157 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStackFrame157;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C0FE564-2DFA-40D4-842E-1B7747C4C3EA")
    IDebugStackFrame157 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyProvider( 
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ UINT nRadix,
            /* [in] */ __RPC__in REFGUID guidFilter,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertyInfoProvider **ppPropertiesProvider) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStackFrame157Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStackFrame157 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStackFrame157 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStackFrame157 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProvider )( 
            __RPC__in IDebugStackFrame157 * This,
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ UINT nRadix,
            /* [in] */ __RPC__in REFGUID guidFilter,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertyInfoProvider **ppPropertiesProvider);
        
        END_INTERFACE
    } IDebugStackFrame157Vtbl;

    interface IDebugStackFrame157
    {
        CONST_VTBL struct IDebugStackFrame157Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStackFrame157_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStackFrame157_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStackFrame157_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStackFrame157_GetPropertyProvider(This,dwFields,nRadix,guidFilter,dwTimeout,ppPropertiesProvider)	\
    ( (This)->lpVtbl -> GetPropertyProvider(This,dwFields,nRadix,guidFilter,dwTimeout,ppPropertiesProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStackFrame157_INTERFACE_DEFINED__ */


#ifndef __IDebugProperty157_INTERFACE_DEFINED__
#define __IDebugProperty157_INTERFACE_DEFINED__

/* interface IDebugProperty157 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProperty157;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("790D60A3-2F26-426F-8A3C-53DB57D4CD29")
    IDebugProperty157 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChildPropertyProvider( 
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ DWORD dwRadix,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertyInfoProvider **ppPropertiesProvider) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProperty157Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProperty157 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProperty157 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProperty157 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildPropertyProvider )( 
            __RPC__in IDebugProperty157 * This,
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ DWORD dwRadix,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugPropertyInfoProvider **ppPropertiesProvider);
        
        END_INTERFACE
    } IDebugProperty157Vtbl;

    interface IDebugProperty157
    {
        CONST_VTBL struct IDebugProperty157Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProperty157_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProperty157_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProperty157_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProperty157_GetChildPropertyProvider(This,dwFields,dwRadix,dwTimeout,ppPropertiesProvider)	\
    ( (This)->lpVtbl -> GetChildPropertyProvider(This,dwFields,dwRadix,dwTimeout,ppPropertiesProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProperty157_INTERFACE_DEFINED__ */


#ifndef __IDebugExpression157_INTERFACE_DEFINED__
#define __IDebugExpression157_INTERFACE_DEFINED__

/* interface IDebugExpression157 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugExpression157;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15FA3968-A6EB-481D-A55D-EB6927DAC066")
    IDebugExpression157 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEvaluateAsyncOp( 
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ DWORD dwRadix,
            /* [in] */ EVALFLAGS dwFlags,
            /* [in] */ DWORD dwTimeout,
            /* [in] */ __RPC__in_opt IAsyncDebugEvaluateCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExpression157Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExpression157 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExpression157 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExpression157 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEvaluateAsyncOp )( 
            __RPC__in IDebugExpression157 * This,
            /* [in] */ DEBUGPROP_INFO_FLAGS dwFields,
            /* [in] */ DWORD dwRadix,
            /* [in] */ EVALFLAGS dwFlags,
            /* [in] */ DWORD dwTimeout,
            /* [in] */ __RPC__in_opt IAsyncDebugEvaluateCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugExpression157Vtbl;

    interface IDebugExpression157
    {
        CONST_VTBL struct IDebugExpression157Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExpression157_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExpression157_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExpression157_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExpression157_GetEvaluateAsyncOp(This,dwFields,dwRadix,dwFlags,dwTimeout,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetEvaluateAsyncOp(This,dwFields,dwRadix,dwFlags,dwTimeout,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExpression157_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


