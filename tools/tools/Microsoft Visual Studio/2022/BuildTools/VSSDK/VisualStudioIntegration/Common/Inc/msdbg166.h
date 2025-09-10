

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

#ifndef __msdbg166_h__
#define __msdbg166_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumDebugEngineMetrics166_FWD_DEFINED__
#define __IEnumDebugEngineMetrics166_FWD_DEFINED__
typedef interface IEnumDebugEngineMetrics166 IEnumDebugEngineMetrics166;

#endif 	/* __IEnumDebugEngineMetrics166_FWD_DEFINED__ */


#ifndef __IDebugEngineMetricsUpdatedEvent166_FWD_DEFINED__
#define __IDebugEngineMetricsUpdatedEvent166_FWD_DEFINED__
typedef interface IDebugEngineMetricsUpdatedEvent166 IDebugEngineMetricsUpdatedEvent166;

#endif 	/* __IDebugEngineMetricsUpdatedEvent166_FWD_DEFINED__ */


#ifndef __IDebugDisconnectableProgram166_FWD_DEFINED__
#define __IDebugDisconnectableProgram166_FWD_DEFINED__
typedef interface IDebugDisconnectableProgram166 IDebugDisconnectableProgram166;

#endif 	/* __IDebugDisconnectableProgram166_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg166_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
typedef struct _tagDEBUG_ENGINE_METRIC
    {
    LPOLESTR metricName;
    VARIANT metricValue;
    } 	DEBUG_ENGINE_METRIC;



extern RPC_IF_HANDLE __MIDL_itf_msdbg166_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg166_0000_0000_v0_0_s_ifspec;

#ifndef __IEnumDebugEngineMetrics166_INTERFACE_DEFINED__
#define __IEnumDebugEngineMetrics166_INTERFACE_DEFINED__

/* interface IEnumDebugEngineMetrics166 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumDebugEngineMetrics166;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB6F6E1A-9862-4B31-B7CD-CD452A84B47F")
    IEnumDebugEngineMetrics166 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) DEBUG_ENGINE_METRIC *metrics,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDebugEngineMetrics166 **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out ULONG *pcelt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumDebugEngineMetrics166Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumDebugEngineMetrics166 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumDebugEngineMetrics166 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumDebugEngineMetrics166 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumDebugEngineMetrics166 * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) DEBUG_ENGINE_METRIC *metrics,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumDebugEngineMetrics166 * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumDebugEngineMetrics166 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumDebugEngineMetrics166 * This,
            /* [out] */ __RPC__deref_out_opt IEnumDebugEngineMetrics166 **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumDebugEngineMetrics166 * This,
            /* [out] */ __RPC__out ULONG *pcelt);
        
        END_INTERFACE
    } IEnumDebugEngineMetrics166Vtbl;

    interface IEnumDebugEngineMetrics166
    {
        CONST_VTBL struct IEnumDebugEngineMetrics166Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDebugEngineMetrics166_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDebugEngineMetrics166_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDebugEngineMetrics166_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDebugEngineMetrics166_Next(This,celt,metrics,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,metrics,pceltFetched) ) 

#define IEnumDebugEngineMetrics166_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumDebugEngineMetrics166_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDebugEngineMetrics166_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumDebugEngineMetrics166_GetCount(This,pcelt)	\
    ( (This)->lpVtbl -> GetCount(This,pcelt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDebugEngineMetrics166_INTERFACE_DEFINED__ */


#ifndef __IDebugEngineMetricsUpdatedEvent166_INTERFACE_DEFINED__
#define __IDebugEngineMetricsUpdatedEvent166_INTERFACE_DEFINED__

/* interface IDebugEngineMetricsUpdatedEvent166 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugEngineMetricsUpdatedEvent166;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45B79D58-0620-410F-8F39-C7C8C155E36C")
    IDebugEngineMetricsUpdatedEvent166 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUpdatedMetrics( 
            /* [out] */ __RPC__deref_out_opt IEnumDebugEngineMetrics166 **ppMetrics) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugEngineMetricsUpdatedEvent166Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugEngineMetricsUpdatedEvent166 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugEngineMetricsUpdatedEvent166 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugEngineMetricsUpdatedEvent166 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUpdatedMetrics )( 
            __RPC__in IDebugEngineMetricsUpdatedEvent166 * This,
            /* [out] */ __RPC__deref_out_opt IEnumDebugEngineMetrics166 **ppMetrics);
        
        END_INTERFACE
    } IDebugEngineMetricsUpdatedEvent166Vtbl;

    interface IDebugEngineMetricsUpdatedEvent166
    {
        CONST_VTBL struct IDebugEngineMetricsUpdatedEvent166Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugEngineMetricsUpdatedEvent166_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugEngineMetricsUpdatedEvent166_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugEngineMetricsUpdatedEvent166_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugEngineMetricsUpdatedEvent166_GetUpdatedMetrics(This,ppMetrics)	\
    ( (This)->lpVtbl -> GetUpdatedMetrics(This,ppMetrics) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugEngineMetricsUpdatedEvent166_INTERFACE_DEFINED__ */


#ifndef __IDebugDisconnectableProgram166_INTERFACE_DEFINED__
#define __IDebugDisconnectableProgram166_INTERFACE_DEFINED__

/* interface IDebugDisconnectableProgram166 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugDisconnectableProgram166;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C53F97B4-FBDF-487E-B4C8-23B6EAA4F72D")
    IDebugDisconnectableProgram166 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanDisconnect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDisconnectableProgram166Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugDisconnectableProgram166 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugDisconnectableProgram166 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugDisconnectableProgram166 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanDisconnect )( 
            __RPC__in IDebugDisconnectableProgram166 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            __RPC__in IDebugDisconnectableProgram166 * This);
        
        END_INTERFACE
    } IDebugDisconnectableProgram166Vtbl;

    interface IDebugDisconnectableProgram166
    {
        CONST_VTBL struct IDebugDisconnectableProgram166Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDisconnectableProgram166_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDisconnectableProgram166_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDisconnectableProgram166_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDisconnectableProgram166_CanDisconnect(This)	\
    ( (This)->lpVtbl -> CanDisconnect(This) ) 

#define IDebugDisconnectableProgram166_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDisconnectableProgram166_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


