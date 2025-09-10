

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

#ifndef __msdbg169_h__
#define __msdbg169_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IListDebugPortRequests2_FWD_DEFINED__
#define __IListDebugPortRequests2_FWD_DEFINED__
typedef interface IListDebugPortRequests2 IListDebugPortRequests2;

#endif 	/* __IListDebugPortRequests2_FWD_DEFINED__ */


#ifndef __IDebugPortSupplier169_FWD_DEFINED__
#define __IDebugPortSupplier169_FWD_DEFINED__
typedef interface IDebugPortSupplier169 IDebugPortSupplier169;

#endif 	/* __IDebugPortSupplier169_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg100.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg169_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg169_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg169_0000_0000_v0_0_s_ifspec;

#ifndef __IListDebugPortRequests2_INTERFACE_DEFINED__
#define __IListDebugPortRequests2_INTERFACE_DEFINED__

/* interface IListDebugPortRequests2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IListDebugPortRequests2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3444553D-927A-40BA-B256-44BC4F8E678A")
    IListDebugPortRequests2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out ULONG32 *result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG32 lIndex,
            /* [retval][out] */ __RPC__deref_out_opt IDebugPortRequest2 **pRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(count, *pCountReturned) IDebugPortRequest2 **itemsArray,
            /* [out][in] */ __RPC__inout ULONG32 *pCountReturned) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListDebugPortRequests2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IListDebugPortRequests2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IListDebugPortRequests2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IListDebugPortRequests2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IListDebugPortRequests2 * This,
            /* [retval][out] */ __RPC__out ULONG32 *result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IListDebugPortRequests2 * This,
            /* [in] */ ULONG32 lIndex,
            /* [retval][out] */ __RPC__deref_out_opt IDebugPortRequest2 **pRequest);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            __RPC__in IListDebugPortRequests2 * This,
            /* [in] */ ULONG32 index,
            /* [in] */ ULONG32 count,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(count, *pCountReturned) IDebugPortRequest2 **itemsArray,
            /* [out][in] */ __RPC__inout ULONG32 *pCountReturned);
        
        END_INTERFACE
    } IListDebugPortRequests2Vtbl;

    interface IListDebugPortRequests2
    {
        CONST_VTBL struct IListDebugPortRequests2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListDebugPortRequests2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListDebugPortRequests2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListDebugPortRequests2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListDebugPortRequests2_get_Count(This,result)	\
    ( (This)->lpVtbl -> get_Count(This,result) ) 

#define IListDebugPortRequests2_get_Item(This,lIndex,pRequest)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pRequest) ) 

#define IListDebugPortRequests2_GetItems(This,index,count,itemsArray,pCountReturned)	\
    ( (This)->lpVtbl -> GetItems(This,index,count,itemsArray,pCountReturned) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListDebugPortRequests2_INTERFACE_DEFINED__ */


#ifndef __IDebugPortSupplier169_INTERFACE_DEFINED__
#define __IDebugPortSupplier169_INTERFACE_DEFINED__

/* interface IDebugPortSupplier169 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugPortSupplier169;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AF3F5A0-057E-45B2-AD74-CE77C31B2A7E")
    IDebugPortSupplier169 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRecentPortRequests( 
            /* [out] */ __RPC__deref_out_opt IListDebugPortRequests2 **ppList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugPortSupplier169Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugPortSupplier169 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugPortSupplier169 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugPortSupplier169 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecentPortRequests )( 
            __RPC__in IDebugPortSupplier169 * This,
            /* [out] */ __RPC__deref_out_opt IListDebugPortRequests2 **ppList);
        
        END_INTERFACE
    } IDebugPortSupplier169Vtbl;

    interface IDebugPortSupplier169
    {
        CONST_VTBL struct IDebugPortSupplier169Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugPortSupplier169_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugPortSupplier169_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugPortSupplier169_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugPortSupplier169_GetRecentPortRequests(This,ppList)	\
    ( (This)->lpVtbl -> GetRecentPortRequests(This,ppList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugPortSupplier169_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


