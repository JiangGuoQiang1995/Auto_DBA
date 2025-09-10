

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

#ifndef __msdbg178_h__
#define __msdbg178_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugVisualizerExtensionListItem_FWD_DEFINED__
#define __IDebugVisualizerExtensionListItem_FWD_DEFINED__
typedef interface IDebugVisualizerExtensionListItem IDebugVisualizerExtensionListItem;

#endif 	/* __IDebugVisualizerExtensionListItem_FWD_DEFINED__ */


#ifndef __IDebugVisualizerExtensionList178_FWD_DEFINED__
#define __IDebugVisualizerExtensionList178_FWD_DEFINED__
typedef interface IDebugVisualizerExtensionList178 IDebugVisualizerExtensionList178;

#endif 	/* __IDebugVisualizerExtensionList178_FWD_DEFINED__ */


#ifndef __IDebugVisualizerExtensionReceiver178_FWD_DEFINED__
#define __IDebugVisualizerExtensionReceiver178_FWD_DEFINED__
typedef interface IDebugVisualizerExtensionReceiver178 IDebugVisualizerExtensionReceiver178;

#endif 	/* __IDebugVisualizerExtensionReceiver178_FWD_DEFINED__ */


#ifndef __IDebugDefaultPort178_FWD_DEFINED__
#define __IDebugDefaultPort178_FWD_DEFINED__
typedef interface IDebugDefaultPort178 IDebugDefaultPort178;

#endif 	/* __IDebugDefaultPort178_FWD_DEFINED__ */


#ifndef __IDebugExceptionEvent178_FWD_DEFINED__
#define __IDebugExceptionEvent178_FWD_DEFINED__
typedef interface IDebugExceptionEvent178 IDebugExceptionEvent178;

#endif 	/* __IDebugExceptionEvent178_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg178_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
#define DBG_EXATTRIB_TRUNCATED_STRING 0x0000000000000100

enum _DotnetVisualizerStyle
    {
        ModalDialog	= 0,
        ToolWindow	= 0x1
    } ;
typedef DWORD DotnetVisualizerStyle;



extern RPC_IF_HANDLE __MIDL_itf_msdbg178_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg178_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugVisualizerExtensionListItem_INTERFACE_DEFINED__
#define __IDebugVisualizerExtensionListItem_INTERFACE_DEFINED__

/* interface IDebugVisualizerExtensionListItem */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugVisualizerExtensionListItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6184BE5C-3CB1-4B98-A610-4F61764483F1")
    IDebugVisualizerExtensionListItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [annotation][out] */ 
            _Out_  GUID *pId,
            /* [annotation][out] */ 
            _Out_  BSTR *pDisplayName,
            /* [annotation][out] */ 
            _Out_  BSTR *pTargetTypeFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pTargetTypeAssemblyFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pDebuggeeSideVisualizerTypeFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pDebuggeeSideVisualizerTypeAssemblyFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pInstallDirectory,
            /* [annotation][out] */ 
            _Out_  DotnetVisualizerStyle *pStyle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugVisualizerExtensionListItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugVisualizerExtensionListItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugVisualizerExtensionListItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugVisualizerExtensionListItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IDebugVisualizerExtensionListItem * This,
            /* [annotation][out] */ 
            _Out_  GUID *pId,
            /* [annotation][out] */ 
            _Out_  BSTR *pDisplayName,
            /* [annotation][out] */ 
            _Out_  BSTR *pTargetTypeFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pTargetTypeAssemblyFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pDebuggeeSideVisualizerTypeFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pDebuggeeSideVisualizerTypeAssemblyFullName,
            /* [annotation][out] */ 
            _Out_  BSTR *pInstallDirectory,
            /* [annotation][out] */ 
            _Out_  DotnetVisualizerStyle *pStyle);
        
        END_INTERFACE
    } IDebugVisualizerExtensionListItemVtbl;

    interface IDebugVisualizerExtensionListItem
    {
        CONST_VTBL struct IDebugVisualizerExtensionListItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugVisualizerExtensionListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugVisualizerExtensionListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugVisualizerExtensionListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugVisualizerExtensionListItem_GetInfo(This,pId,pDisplayName,pTargetTypeFullName,pTargetTypeAssemblyFullName,pDebuggeeSideVisualizerTypeFullName,pDebuggeeSideVisualizerTypeAssemblyFullName,pInstallDirectory,pStyle)	\
    ( (This)->lpVtbl -> GetInfo(This,pId,pDisplayName,pTargetTypeFullName,pTargetTypeAssemblyFullName,pDebuggeeSideVisualizerTypeFullName,pDebuggeeSideVisualizerTypeAssemblyFullName,pInstallDirectory,pStyle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugVisualizerExtensionListItem_INTERFACE_DEFINED__ */


#ifndef __IDebugVisualizerExtensionList178_INTERFACE_DEFINED__
#define __IDebugVisualizerExtensionList178_INTERFACE_DEFINED__

/* interface IDebugVisualizerExtensionList178 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugVisualizerExtensionList178;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFA6CA0A-9CDE-4F48-BFD3-3E02FE316D1D")
    IDebugVisualizerExtensionList178 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *pCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 index,
            /* [annotation][retval][out] */ 
            _Outptr_  IDebugVisualizerExtensionListItem **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  IDebugVisualizerExtensionListItem **ppItemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugVisualizerExtensionList178Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugVisualizerExtensionList178 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugVisualizerExtensionList178 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugVisualizerExtensionList178 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDebugVisualizerExtensionList178 * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *pCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDebugVisualizerExtensionList178 * This,
            /* [in] */ ULONG32 index,
            /* [annotation][retval][out] */ 
            _Outptr_  IDebugVisualizerExtensionListItem **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IDebugVisualizerExtensionList178 * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  IDebugVisualizerExtensionListItem **ppItemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IDebugVisualizerExtensionList178Vtbl;

    interface IDebugVisualizerExtensionList178
    {
        CONST_VTBL struct IDebugVisualizerExtensionList178Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugVisualizerExtensionList178_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugVisualizerExtensionList178_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugVisualizerExtensionList178_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugVisualizerExtensionList178_get_Count(This,pCount)	\
    ( (This)->lpVtbl -> get_Count(This,pCount) ) 

#define IDebugVisualizerExtensionList178_get_Item(This,index,ppItem)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppItem) ) 

#define IDebugVisualizerExtensionList178_GetItems(This,index,count,ppItemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,ppItemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugVisualizerExtensionList178_INTERFACE_DEFINED__ */


#ifndef __IDebugVisualizerExtensionReceiver178_INTERFACE_DEFINED__
#define __IDebugVisualizerExtensionReceiver178_INTERFACE_DEFINED__

/* interface IDebugVisualizerExtensionReceiver178 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugVisualizerExtensionReceiver178;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36CD3D35-790A-45FC-8B4B-62D056C838A9")
    IDebugVisualizerExtensionReceiver178 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetVisualizerExtensions( 
            /* [in] */ IDebugVisualizerExtensionList178 *collection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugVisualizerExtensionReceiver178Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugVisualizerExtensionReceiver178 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugVisualizerExtensionReceiver178 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugVisualizerExtensionReceiver178 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetVisualizerExtensions )( 
            IDebugVisualizerExtensionReceiver178 * This,
            /* [in] */ IDebugVisualizerExtensionList178 *collection);
        
        END_INTERFACE
    } IDebugVisualizerExtensionReceiver178Vtbl;

    interface IDebugVisualizerExtensionReceiver178
    {
        CONST_VTBL struct IDebugVisualizerExtensionReceiver178Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugVisualizerExtensionReceiver178_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugVisualizerExtensionReceiver178_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugVisualizerExtensionReceiver178_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugVisualizerExtensionReceiver178_SetVisualizerExtensions(This,collection)	\
    ( (This)->lpVtbl -> SetVisualizerExtensions(This,collection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugVisualizerExtensionReceiver178_INTERFACE_DEFINED__ */


#ifndef __IDebugDefaultPort178_INTERFACE_DEFINED__
#define __IDebugDefaultPort178_INTERFACE_DEFINED__

/* interface IDebugDefaultPort178 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugDefaultPort178;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f48e9dae-f61d-4fa6-9396-eee7b269bbbf")
    IDebugDefaultPort178 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChannelPortSupplierId( 
            /* [annotation][retval][out] */ 
            _Out_  GUID *pId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDefaultPort178Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugDefaultPort178 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugDefaultPort178 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugDefaultPort178 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChannelPortSupplierId )( 
            IDebugDefaultPort178 * This,
            /* [annotation][retval][out] */ 
            _Out_  GUID *pId);
        
        END_INTERFACE
    } IDebugDefaultPort178Vtbl;

    interface IDebugDefaultPort178
    {
        CONST_VTBL struct IDebugDefaultPort178Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDefaultPort178_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDefaultPort178_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDefaultPort178_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDefaultPort178_GetChannelPortSupplierId(This,pId)	\
    ( (This)->lpVtbl -> GetChannelPortSupplierId(This,pId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDefaultPort178_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionEvent178_INTERFACE_DEFINED__
#define __IDebugExceptionEvent178_INTERFACE_DEFINED__

/* interface IDebugExceptionEvent178 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionEvent178;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2bf9dac6-eb17-42d9-90eb-4e23e3dbd997")
    IDebugExceptionEvent178 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrameworkAPIMethodName( 
            /* [annotation][out] */ 
            _Deref_out_opt_  BSTR *methodName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameworkAPIStack( 
            /* [annotation][out] */ 
            _Deref_out_opt_  BSTR *callStack) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionEvent178Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionEvent178 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionEvent178 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionEvent178 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameworkAPIMethodName )( 
            IDebugExceptionEvent178 * This,
            /* [annotation][out] */ 
            _Deref_out_opt_  BSTR *methodName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameworkAPIStack )( 
            IDebugExceptionEvent178 * This,
            /* [annotation][out] */ 
            _Deref_out_opt_  BSTR *callStack);
        
        END_INTERFACE
    } IDebugExceptionEvent178Vtbl;

    interface IDebugExceptionEvent178
    {
        CONST_VTBL struct IDebugExceptionEvent178Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionEvent178_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionEvent178_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionEvent178_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionEvent178_GetFrameworkAPIMethodName(This,methodName)	\
    ( (This)->lpVtbl -> GetFrameworkAPIMethodName(This,methodName) ) 

#define IDebugExceptionEvent178_GetFrameworkAPIStack(This,callStack)	\
    ( (This)->lpVtbl -> GetFrameworkAPIStack(This,callStack) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionEvent178_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


