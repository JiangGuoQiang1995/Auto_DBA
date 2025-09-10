

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

#ifndef __msdbg156_h__
#define __msdbg156_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAsyncDebugEngineOperation_FWD_DEFINED__
#define __IAsyncDebugEngineOperation_FWD_DEFINED__
typedef interface IAsyncDebugEngineOperation IAsyncDebugEngineOperation;

#endif 	/* __IAsyncDebugEngineOperation_FWD_DEFINED__ */


#ifndef __IAsyncDebugEngineOperationWorkList_FWD_DEFINED__
#define __IAsyncDebugEngineOperationWorkList_FWD_DEFINED__
typedef interface IAsyncDebugEngineOperationWorkList IAsyncDebugEngineOperationWorkList;

#endif 	/* __IAsyncDebugEngineOperationWorkList_FWD_DEFINED__ */


#ifndef __IAsyncDebugWorkListFactory_FWD_DEFINED__
#define __IAsyncDebugWorkListFactory_FWD_DEFINED__
typedef interface IAsyncDebugWorkListFactory IAsyncDebugWorkListFactory;

#endif 	/* __IAsyncDebugWorkListFactory_FWD_DEFINED__ */


#ifndef __IDebugThreadProperties_FWD_DEFINED__
#define __IDebugThreadProperties_FWD_DEFINED__
typedef interface IDebugThreadProperties IDebugThreadProperties;

#endif 	/* __IDebugThreadProperties_FWD_DEFINED__ */


#ifndef __IAsyncDebugGetThreadPropertiesCompletionHandler_FWD_DEFINED__
#define __IAsyncDebugGetThreadPropertiesCompletionHandler_FWD_DEFINED__
typedef interface IAsyncDebugGetThreadPropertiesCompletionHandler IAsyncDebugGetThreadPropertiesCompletionHandler;

#endif 	/* __IAsyncDebugGetThreadPropertiesCompletionHandler_FWD_DEFINED__ */


#ifndef __IDebugThread156_FWD_DEFINED__
#define __IDebugThread156_FWD_DEFINED__
typedef interface IDebugThread156 IDebugThread156;

#endif 	/* __IDebugThread156_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"
#include "msdbg100.h"
#include "msdbg120.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg156_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg156_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg156_0000_0000_v0_0_s_ifspec;

#ifndef __IAsyncDebugEngineOperation_INTERFACE_DEFINED__
#define __IAsyncDebugEngineOperation_INTERFACE_DEFINED__

/* interface IAsyncDebugEngineOperation */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugEngineOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08C85523-1F56-4CCD-8315-DF2C657A245F")
    IAsyncDebugEngineOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginExecute( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEngineOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugEngineOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugEngineOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugEngineOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginExecute )( 
            __RPC__in IAsyncDebugEngineOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IAsyncDebugEngineOperation * This);
        
        END_INTERFACE
    } IAsyncDebugEngineOperationVtbl;

    interface IAsyncDebugEngineOperation
    {
        CONST_VTBL struct IAsyncDebugEngineOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEngineOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEngineOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEngineOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEngineOperation_BeginExecute(This)	\
    ( (This)->lpVtbl -> BeginExecute(This) ) 

#define IAsyncDebugEngineOperation_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEngineOperation_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugEngineOperationWorkList_INTERFACE_DEFINED__
#define __IAsyncDebugEngineOperationWorkList_INTERFACE_DEFINED__

/* interface IAsyncDebugEngineOperationWorkList */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugEngineOperationWorkList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4401B380-016E-4B61-8532-B3B0F41A3B47")
    IAsyncDebugEngineOperationWorkList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddOperation( 
            /* [in] */ __RPC__in_opt IAsyncDebugEngineOperation *pDebugOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginExecute( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugEngineOperationWorkListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddOperation )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This,
            /* [in] */ __RPC__in_opt IAsyncDebugEngineOperation *pDebugOperation);
        
        HRESULT ( STDMETHODCALLTYPE *BeginExecute )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IAsyncDebugEngineOperationWorkList * This);
        
        END_INTERFACE
    } IAsyncDebugEngineOperationWorkListVtbl;

    interface IAsyncDebugEngineOperationWorkList
    {
        CONST_VTBL struct IAsyncDebugEngineOperationWorkListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugEngineOperationWorkList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugEngineOperationWorkList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugEngineOperationWorkList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugEngineOperationWorkList_AddOperation(This,pDebugOperation)	\
    ( (This)->lpVtbl -> AddOperation(This,pDebugOperation) ) 

#define IAsyncDebugEngineOperationWorkList_BeginExecute(This)	\
    ( (This)->lpVtbl -> BeginExecute(This) ) 

#define IAsyncDebugEngineOperationWorkList_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugEngineOperationWorkList_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugWorkListFactory_INTERFACE_DEFINED__
#define __IAsyncDebugWorkListFactory_INTERFACE_DEFINED__

/* interface IAsyncDebugWorkListFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugWorkListFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("119CD2BC-74EC-4510-A0CD-6276A8A87737")
    IAsyncDebugWorkListFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDebugOperationWorkList( 
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperationWorkList **ppWorkList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugWorkListFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugWorkListFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugWorkListFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugWorkListFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDebugOperationWorkList )( 
            __RPC__in IAsyncDebugWorkListFactory * This,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperationWorkList **ppWorkList);
        
        END_INTERFACE
    } IAsyncDebugWorkListFactoryVtbl;

    interface IAsyncDebugWorkListFactory
    {
        CONST_VTBL struct IAsyncDebugWorkListFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugWorkListFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugWorkListFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugWorkListFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugWorkListFactory_CreateDebugOperationWorkList(This,ppWorkList)	\
    ( (This)->lpVtbl -> CreateDebugOperationWorkList(This,ppWorkList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugWorkListFactory_INTERFACE_DEFINED__ */


#ifndef __IDebugThreadProperties_INTERFACE_DEFINED__
#define __IDebugThreadProperties_INTERFACE_DEFINED__

/* interface IDebugThreadProperties */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IDebugThreadProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30FFAEC1-C24C-440A-A9C5-1CC1CFD99DC8")
    IDebugThreadProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ THREADPROPERTIES100 *pProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugThreadPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugThreadProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugThreadProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugThreadProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IDebugThreadProperties * This,
            /* [out] */ THREADPROPERTIES100 *pProperties);
        
        END_INTERFACE
    } IDebugThreadPropertiesVtbl;

    interface IDebugThreadProperties
    {
        CONST_VTBL struct IDebugThreadPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugThreadProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugThreadProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugThreadProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugThreadProperties_GetProperties(This,pProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,pProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugThreadProperties_INTERFACE_DEFINED__ */


#ifndef __IAsyncDebugGetThreadPropertiesCompletionHandler_INTERFACE_DEFINED__
#define __IAsyncDebugGetThreadPropertiesCompletionHandler_INTERFACE_DEFINED__

/* interface IAsyncDebugGetThreadPropertiesCompletionHandler */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAsyncDebugGetThreadPropertiesCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00EB372D-8DC7-404A-AF65-17262FD3B330")
    IAsyncDebugGetThreadPropertiesCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IDebugThreadProperties *pStackFrames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncDebugGetThreadPropertiesCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncDebugGetThreadPropertiesCompletionHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncDebugGetThreadPropertiesCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncDebugGetThreadPropertiesCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IAsyncDebugGetThreadPropertiesCompletionHandler * This,
            /* [in] */ HRESULT hr,
            /* [in] */ __RPC__in_opt IDebugThreadProperties *pStackFrames);
        
        END_INTERFACE
    } IAsyncDebugGetThreadPropertiesCompletionHandlerVtbl;

    interface IAsyncDebugGetThreadPropertiesCompletionHandler
    {
        CONST_VTBL struct IAsyncDebugGetThreadPropertiesCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncDebugGetThreadPropertiesCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncDebugGetThreadPropertiesCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncDebugGetThreadPropertiesCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncDebugGetThreadPropertiesCompletionHandler_OnComplete(This,hr,pStackFrames)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,pStackFrames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncDebugGetThreadPropertiesCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IDebugThread156_INTERFACE_DEFINED__
#define __IDebugThread156_INTERFACE_DEFINED__

/* interface IDebugThread156 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugThread156;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6CD61C6-B706-488A-96C0-1FC3F10AE514")
    IDebugThread156 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThreadPropertiesAsync( 
            /* [in] */ THREADPROPERTY_FIELDS100 dwFields,
            /* [in] */ __RPC__in_opt IAsyncDebugGetThreadPropertiesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugThread156Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugThread156 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugThread156 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugThread156 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadPropertiesAsync )( 
            __RPC__in IDebugThread156 * This,
            /* [in] */ THREADPROPERTY_FIELDS100 dwFields,
            /* [in] */ __RPC__in_opt IAsyncDebugGetThreadPropertiesCompletionHandler *pCompletionHandler,
            /* [out] */ __RPC__deref_out_opt IAsyncDebugEngineOperation **ppDebugOperation);
        
        END_INTERFACE
    } IDebugThread156Vtbl;

    interface IDebugThread156
    {
        CONST_VTBL struct IDebugThread156Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugThread156_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugThread156_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugThread156_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugThread156_GetThreadPropertiesAsync(This,dwFields,pCompletionHandler,ppDebugOperation)	\
    ( (This)->lpVtbl -> GetThreadPropertiesAsync(This,dwFields,pCompletionHandler,ppDebugOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugThread156_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


