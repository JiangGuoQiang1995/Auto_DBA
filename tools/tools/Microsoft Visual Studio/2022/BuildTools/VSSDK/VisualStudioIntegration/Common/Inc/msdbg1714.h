

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

#ifndef __msdbg1714_h__
#define __msdbg1714_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugBoundBreakpoint1714_FWD_DEFINED__
#define __IDebugBoundBreakpoint1714_FWD_DEFINED__
typedef interface IDebugBoundBreakpoint1714 IDebugBoundBreakpoint1714;

#endif 	/* __IDebugBoundBreakpoint1714_FWD_DEFINED__ */


#ifndef __IListDebugModules_FWD_DEFINED__
#define __IListDebugModules_FWD_DEFINED__
typedef interface IListDebugModules IListDebugModules;

#endif 	/* __IListDebugModules_FWD_DEFINED__ */


#ifndef __IDebugErrorBreakpointResolution1714_FWD_DEFINED__
#define __IDebugErrorBreakpointResolution1714_FWD_DEFINED__
typedef interface IDebugErrorBreakpointResolution1714 IDebugErrorBreakpointResolution1714;

#endif 	/* __IDebugErrorBreakpointResolution1714_FWD_DEFINED__ */


#ifndef __IListModuleInfos_FWD_DEFINED__
#define __IListModuleInfos_FWD_DEFINED__
typedef interface IListModuleInfos IListModuleInfos;

#endif 	/* __IListModuleInfos_FWD_DEFINED__ */


#ifndef __IDebugPendingBreakpoint1714_FWD_DEFINED__
#define __IDebugPendingBreakpoint1714_FWD_DEFINED__
typedef interface IDebugPendingBreakpoint1714 IDebugPendingBreakpoint1714;

#endif 	/* __IDebugPendingBreakpoint1714_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg174.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg1714_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

enum enum_MODULE1714_FLAGS
    {
        MODULE1714_FLAG_CAN_DEOPTIMIZE	= 0x4000
    } ;
typedef DWORD MODULE1713_FLAGS;


enum FRAMEINFO_FLAGS_EX1714
    {
        FIF_EX_BINDABLE_NAME	= 0x10,
        FIF_EX_INCLUDE_STOPPED_EXCEPTION_FRAME	= 0x20
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg1714_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg1714_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugBoundBreakpoint1714_INTERFACE_DEFINED__
#define __IDebugBoundBreakpoint1714_INTERFACE_DEFINED__

/* interface IDebugBoundBreakpoint1714 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugBoundBreakpoint1714;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E165D0B-1F66-474E-BCAF-19716856807E")
    IDebugBoundBreakpoint1714 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE WasConditionMet( 
            /* [out] */ BOOL *wasMet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugBoundBreakpoint1714Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugBoundBreakpoint1714 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugBoundBreakpoint1714 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugBoundBreakpoint1714 * This);
        
        HRESULT ( STDMETHODCALLTYPE *WasConditionMet )( 
            IDebugBoundBreakpoint1714 * This,
            /* [out] */ BOOL *wasMet);
        
        END_INTERFACE
    } IDebugBoundBreakpoint1714Vtbl;

    interface IDebugBoundBreakpoint1714
    {
        CONST_VTBL struct IDebugBoundBreakpoint1714Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugBoundBreakpoint1714_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugBoundBreakpoint1714_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugBoundBreakpoint1714_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugBoundBreakpoint1714_WasConditionMet(This,wasMet)	\
    ( (This)->lpVtbl -> WasConditionMet(This,wasMet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugBoundBreakpoint1714_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg1714_0000_0001 */
/* [local] */ 


enum enum_FRAMEINFO_FLAGS_VALUES1714
    {
        FIFV_STOPPED_EXCEPTION_FRAME	= 0x8000
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg1714_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg1714_0000_0001_v0_0_s_ifspec;

#ifndef __IListDebugModules_INTERFACE_DEFINED__
#define __IListDebugModules_INTERFACE_DEFINED__

/* interface IListDebugModules */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListDebugModules;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58E35BF7-00B9-4E86-AE6D-561F18B8447C")
    IListDebugModules : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 Index,
            /* [custom][annotation][retval][out] */ 
            _Out_  IDebugModule2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 numItems,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(numItems, *pCountReturned)  IDebugModule2 **ppItemArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListDebugModulesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListDebugModules * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListDebugModules * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListDebugModules * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListDebugModules * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListDebugModules * This,
            /* [in] */ ULONG32 Index,
            /* [custom][annotation][retval][out] */ 
            _Out_  IDebugModule2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListDebugModules * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 numItems,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(numItems, *pCountReturned)  IDebugModule2 **ppItemArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListDebugModulesVtbl;

    interface IListDebugModules
    {
        CONST_VTBL struct IListDebugModulesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListDebugModules_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListDebugModules_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListDebugModules_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListDebugModules_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListDebugModules_get_Item(This,Index,ppItem)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppItem) ) 

#define IListDebugModules_GetItems(This,index,numItems,ppItemArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,numItems,ppItemArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListDebugModules_INTERFACE_DEFINED__ */


#ifndef __IDebugErrorBreakpointResolution1714_INTERFACE_DEFINED__
#define __IDebugErrorBreakpointResolution1714_INTERFACE_DEFINED__

/* interface IDebugErrorBreakpointResolution1714 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugErrorBreakpointResolution1714;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("185B810E-6AC6-4091-A253-D7C39ADC1EB3")
    IDebugErrorBreakpointResolution1714 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDebugModules( 
            /* [annotation][out] */ 
            _Outptr_  IListDebugModules **ppDebugModuleList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugErrorBreakpointResolution1714Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugErrorBreakpointResolution1714 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugErrorBreakpointResolution1714 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugErrorBreakpointResolution1714 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDebugModules )( 
            IDebugErrorBreakpointResolution1714 * This,
            /* [annotation][out] */ 
            _Outptr_  IListDebugModules **ppDebugModuleList);
        
        END_INTERFACE
    } IDebugErrorBreakpointResolution1714Vtbl;

    interface IDebugErrorBreakpointResolution1714
    {
        CONST_VTBL struct IDebugErrorBreakpointResolution1714Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugErrorBreakpointResolution1714_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugErrorBreakpointResolution1714_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugErrorBreakpointResolution1714_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugErrorBreakpointResolution1714_GetDebugModules(This,ppDebugModuleList)	\
    ( (This)->lpVtbl -> GetDebugModules(This,ppDebugModuleList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugErrorBreakpointResolution1714_INTERFACE_DEFINED__ */


#ifndef __IListModuleInfos_INTERFACE_DEFINED__
#define __IListModuleInfos_INTERFACE_DEFINED__

/* interface IListModuleInfos */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IListModuleInfos;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E26F64EF-A046-4069-BBBC-BB43A5771715")
    IListModuleInfos : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 Index,
            /* [custom][annotation][retval][out] */ 
            _Out_  MODULE_INFO *pItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 numItems,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(numItems, *pCountReturned)  MODULE_INFO *pItemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListModuleInfosVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListModuleInfos * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListModuleInfos * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListModuleInfos * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IListModuleInfos * This,
            /* [annotation][retval][out] */ 
            _Out_  ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IListModuleInfos * This,
            /* [in] */ ULONG32 Index,
            /* [custom][annotation][retval][out] */ 
            _Out_  MODULE_INFO *pItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IListModuleInfos * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 numItems,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(numItems, *pCountReturned)  MODULE_INFO *pItemsArray,
            /* [annotation][out][in] */ 
            _Out_  ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListModuleInfosVtbl;

    interface IListModuleInfos
    {
        CONST_VTBL struct IListModuleInfosVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListModuleInfos_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListModuleInfos_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListModuleInfos_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListModuleInfos_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListModuleInfos_get_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pItem) ) 

#define IListModuleInfos_GetItems(This,index,numItems,pItemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,numItems,pItemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListModuleInfos_INTERFACE_DEFINED__ */


#ifndef __IDebugPendingBreakpoint1714_INTERFACE_DEFINED__
#define __IDebugPendingBreakpoint1714_INTERFACE_DEFINED__

/* interface IDebugPendingBreakpoint1714 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugPendingBreakpoint1714;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE243399-05EF-4BC1-BD24-8725C4795B21")
    IDebugPendingBreakpoint1714 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetErrorResolutionInfo1714( 
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo,
            /* [annotation][optional][out] */ 
            _Outptr_opt_  IListModuleInfos **ppModuleInfoList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugPendingBreakpoint1714Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugPendingBreakpoint1714 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugPendingBreakpoint1714 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugPendingBreakpoint1714 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorResolutionInfo1714 )( 
            IDebugPendingBreakpoint1714 * This,
            /* [in] */ BPERESI_FIELDS174 dwFields,
            /* [out] */ BP_ERROR_RESOLUTION_INFO174 *pErrorResolutionInfo,
            /* [annotation][optional][out] */ 
            _Outptr_opt_  IListModuleInfos **ppModuleInfoList);
        
        END_INTERFACE
    } IDebugPendingBreakpoint1714Vtbl;

    interface IDebugPendingBreakpoint1714
    {
        CONST_VTBL struct IDebugPendingBreakpoint1714Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugPendingBreakpoint1714_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugPendingBreakpoint1714_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugPendingBreakpoint1714_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugPendingBreakpoint1714_GetErrorResolutionInfo1714(This,dwFields,pErrorResolutionInfo,ppModuleInfoList)	\
    ( (This)->lpVtbl -> GetErrorResolutionInfo1714(This,dwFields,pErrorResolutionInfo,ppModuleInfoList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugPendingBreakpoint1714_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


