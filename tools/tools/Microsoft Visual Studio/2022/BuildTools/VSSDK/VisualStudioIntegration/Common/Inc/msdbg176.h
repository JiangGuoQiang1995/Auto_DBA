

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

#ifndef __msdbg176_h__
#define __msdbg176_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugVisualizerExtensionList176_FWD_DEFINED__
#define __IDebugVisualizerExtensionList176_FWD_DEFINED__
typedef interface IDebugVisualizerExtensionList176 IDebugVisualizerExtensionList176;

#endif 	/* __IDebugVisualizerExtensionList176_FWD_DEFINED__ */


#ifndef __IDebugVisualizerExtensionReceiver176_FWD_DEFINED__
#define __IDebugVisualizerExtensionReceiver176_FWD_DEFINED__
typedef interface IDebugVisualizerExtensionReceiver176 IDebugVisualizerExtensionReceiver176;

#endif 	/* __IDebugVisualizerExtensionReceiver176_FWD_DEFINED__ */


#ifndef __IAsyncDebugOperationProgress176_FWD_DEFINED__
#define __IAsyncDebugOperationProgress176_FWD_DEFINED__
typedef interface IAsyncDebugOperationProgress176 IAsyncDebugOperationProgress176;

#endif 	/* __IAsyncDebugOperationProgress176_FWD_DEFINED__ */


#ifndef __IDebugDocumentContext176_FWD_DEFINED__
#define __IDebugDocumentContext176_FWD_DEFINED__
typedef interface IDebugDocumentContext176 IDebugDocumentContext176;

#endif 	/* __IDebugDocumentContext176_FWD_DEFINED__ */


#ifndef __IDebugSymbolsDocument176_FWD_DEFINED__
#define __IDebugSymbolsDocument176_FWD_DEFINED__
typedef interface IDebugSymbolsDocument176 IDebugSymbolsDocument176;

#endif 	/* __IDebugSymbolsDocument176_FWD_DEFINED__ */


#ifndef __IDebugModule176_FWD_DEFINED__
#define __IDebugModule176_FWD_DEFINED__
typedef interface IDebugModule176 IDebugModule176;

#endif 	/* __IDebugModule176_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg176_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
typedef struct _DotnetVisualizerExtensionInfo
    {
    GUID Id;
    /* [full] */ BSTR DisplayName;
    /* [full] */ BSTR TargetTypeFullName;
    /* [full] */ BSTR TargetTypeAssemblyFullName;
    /* [full] */ BSTR DebuggeeSideVisualizerTypeFullName;
    /* [full] */ BSTR DebuggeeSideVisualizerTypeAssemblyFullName;
    /* [full] */ BSTR InstallDirectory;
    } 	DotnetVisualizerExtensionInfo;



extern RPC_IF_HANDLE __MIDL_itf_msdbg176_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg176_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugVisualizerExtensionList176_INTERFACE_DEFINED__
#define __IDebugVisualizerExtensionList176_INTERFACE_DEFINED__

/* interface IDebugVisualizerExtensionList176 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugVisualizerExtensionList176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("844E2523-0720-40FB-AD73-F0C9B6DB5E25")
    IDebugVisualizerExtensionList176 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *pCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 index,
            /* [annotation][retval][out] */ 
            _Out_  DotnetVisualizerExtensionInfo *pItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  DotnetVisualizerExtensionInfo *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugVisualizerExtensionList176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugVisualizerExtensionList176 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugVisualizerExtensionList176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugVisualizerExtensionList176 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDebugVisualizerExtensionList176 * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *pCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDebugVisualizerExtensionList176 * This,
            /* [in] */ ULONG32 index,
            /* [annotation][retval][out] */ 
            _Out_  DotnetVisualizerExtensionInfo *pItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IDebugVisualizerExtensionList176 * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(count, *pCountReturned)  DotnetVisualizerExtensionInfo *itemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IDebugVisualizerExtensionList176Vtbl;

    interface IDebugVisualizerExtensionList176
    {
        CONST_VTBL struct IDebugVisualizerExtensionList176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugVisualizerExtensionList176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugVisualizerExtensionList176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugVisualizerExtensionList176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugVisualizerExtensionList176_get_Count(This,pCount)	\
    ( (This)->lpVtbl -> get_Count(This,pCount) ) 

#define IDebugVisualizerExtensionList176_get_Item(This,index,pItem)	\
    ( (This)->lpVtbl -> get_Item(This,index,pItem) ) 

#define IDebugVisualizerExtensionList176_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugVisualizerExtensionList176_INTERFACE_DEFINED__ */


#ifndef __IDebugVisualizerExtensionReceiver176_INTERFACE_DEFINED__
#define __IDebugVisualizerExtensionReceiver176_INTERFACE_DEFINED__

/* interface IDebugVisualizerExtensionReceiver176 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugVisualizerExtensionReceiver176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A597E936-021B-4CE7-A628-0FCC2E5A4029")
    IDebugVisualizerExtensionReceiver176 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetVisualizerExtensions( 
            /* [in] */ IDebugVisualizerExtensionList176 *collection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugVisualizerExtensionReceiver176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugVisualizerExtensionReceiver176 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugVisualizerExtensionReceiver176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugVisualizerExtensionReceiver176 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetVisualizerExtensions )( 
            IDebugVisualizerExtensionReceiver176 * This,
            /* [in] */ IDebugVisualizerExtensionList176 *collection);
        
        END_INTERFACE
    } IDebugVisualizerExtensionReceiver176Vtbl;

    interface IDebugVisualizerExtensionReceiver176
    {
        CONST_VTBL struct IDebugVisualizerExtensionReceiver176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugVisualizerExtensionReceiver176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugVisualizerExtensionReceiver176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugVisualizerExtensionReceiver176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugVisualizerExtensionReceiver176_SetVisualizerExtensions(This,collection)	\
    ( (This)->lpVtbl -> SetVisualizerExtensions(This,collection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugVisualizerExtensionReceiver176_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugOperationProgress176_INTERFACE_DEFINED__
#define __IAsyncDebugOperationProgress176_INTERFACE_DEFINED__

/* interface IAsyncDebugOperationProgress176 */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IAsyncDebugOperationProgress176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D31EB85-1D92-489D-ACE7-BE1C753EBE73")
    IAsyncDebugOperationProgress176 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProgress( 
            BOOL isIndeterminate,
            int percentComplete,
            LPCOLESTR message,
            LPCOLESTR title) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugOperationProgress176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAsyncDebugOperationProgress176 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAsyncDebugOperationProgress176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAsyncDebugOperationProgress176 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgress )( 
            IAsyncDebugOperationProgress176 * This,
            BOOL isIndeterminate,
            int percentComplete,
            LPCOLESTR message,
            LPCOLESTR title);
        
        END_INTERFACE
    } IAsyncDebugOperationProgress176Vtbl;

    interface IAsyncDebugOperationProgress176
    {
        CONST_VTBL struct IAsyncDebugOperationProgress176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugOperationProgress176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugOperationProgress176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugOperationProgress176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugOperationProgress176_SetProgress(This,isIndeterminate,percentComplete,message,title)	\
    ( (This)->lpVtbl -> SetProgress(This,isIndeterminate,percentComplete,message,title) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugOperationProgress176_INTERFACE_DEFINED__ */


#ifndef __IDebugDocumentContext176_INTERFACE_DEFINED__
#define __IDebugDocumentContext176_INTERFACE_DEFINED__

/* interface IDebugDocumentContext176 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugDocumentContext176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("548C7265-1B64-4571-9197-FDB7D9F1EEBC")
    IDebugDocumentContext176 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetModule( 
            /* [out] */ __RPC__deref_out_opt IDebugModule2 **ppModule) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDocumentContext176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugDocumentContext176 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugDocumentContext176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugDocumentContext176 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetModule )( 
            __RPC__in IDebugDocumentContext176 * This,
            /* [out] */ __RPC__deref_out_opt IDebugModule2 **ppModule);
        
        END_INTERFACE
    } IDebugDocumentContext176Vtbl;

    interface IDebugDocumentContext176
    {
        CONST_VTBL struct IDebugDocumentContext176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDocumentContext176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDocumentContext176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDocumentContext176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDocumentContext176_GetModule(This,ppModule)	\
    ( (This)->lpVtbl -> GetModule(This,ppModule) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDocumentContext176_INTERFACE_DEFINED__ */


#ifndef __IDebugSymbolsDocument176_INTERFACE_DEFINED__
#define __IDebugSymbolsDocument176_INTERFACE_DEFINED__

/* interface IDebugSymbolsDocument176 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSymbolsDocument176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92C66D33-18A0-406B-9519-EBE650238FAB")
    IDebugSymbolsDocument176 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetModule( 
            /* [out] */ __RPC__deref_out_opt IDebugModule2 **ppModule) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSymbolsDocument176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSymbolsDocument176 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSymbolsDocument176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSymbolsDocument176 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetModule )( 
            __RPC__in IDebugSymbolsDocument176 * This,
            /* [out] */ __RPC__deref_out_opt IDebugModule2 **ppModule);
        
        END_INTERFACE
    } IDebugSymbolsDocument176Vtbl;

    interface IDebugSymbolsDocument176
    {
        CONST_VTBL struct IDebugSymbolsDocument176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSymbolsDocument176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSymbolsDocument176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSymbolsDocument176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSymbolsDocument176_GetModule(This,ppModule)	\
    ( (This)->lpVtbl -> GetModule(This,ppModule) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSymbolsDocument176_INTERFACE_DEFINED__ */


#ifndef __IDebugModule176_INTERFACE_DEFINED__
#define __IDebugModule176_INTERFACE_DEFINED__

/* interface IDebugModule176 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugModule176;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6E37753-BB22-4DBA-B33F-3C581EC19BF9")
    IDebugModule176 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetModuleId( 
            /* [out] */ __RPC__deref_out_opt BSTR *moduleId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugModule176Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugModule176 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugModule176 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugModule176 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleId )( 
            __RPC__in IDebugModule176 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *moduleId);
        
        END_INTERFACE
    } IDebugModule176Vtbl;

    interface IDebugModule176
    {
        CONST_VTBL struct IDebugModule176Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugModule176_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugModule176_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugModule176_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugModule176_GetModuleId(This,moduleId)	\
    ( (This)->lpVtbl -> GetModuleId(This,moduleId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugModule176_INTERFACE_DEFINED__ */


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


