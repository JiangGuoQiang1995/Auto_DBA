

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

#ifndef __msdbg164_h__
#define __msdbg164_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugProperty164_FWD_DEFINED__
#define __IDebugProperty164_FWD_DEFINED__
typedef interface IDebugProperty164 IDebugProperty164;

#endif 	/* __IDebugProperty164_FWD_DEFINED__ */


#ifndef __IDebugExceptionDetails164_FWD_DEFINED__
#define __IDebugExceptionDetails164_FWD_DEFINED__
typedef interface IDebugExceptionDetails164 IDebugExceptionDetails164;

#endif 	/* __IDebugExceptionDetails164_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg164_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

enum enum_EVALFLAGS164
    {
        EVAL_FILTER_TO_FAVORITES	= 0x10000000,
        EVAL_USE_SHORT_DISPLAY_NAME	= 0x20000000
    } ;
typedef DWORD EVALFLAGS164;


enum enum_DEBUGPROP_INFO_FLAGS164
    {
        DEBUGPROP_INFO_FILTER_TO_FAVORITES	= 0x10000000,
        DEBUGPROP_INFO_USE_SHORT_DISPLAY_NAME	= 0x20000000
    } ;
typedef DWORD DEBUGPROP164_INFO_FLAGS;

#define DBG_EXATTRIB_CAN_FAVORITE  0x0000000000000008
#define DBG_EXATTRIB_IS_FAVORITE  0x0000000000000010
#define DBG_EXATTRIB_HAS_FAVORITES 0x0000000000000020


extern RPC_IF_HANDLE __MIDL_itf_msdbg164_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg164_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugProperty164_INTERFACE_DEFINED__
#define __IDebugProperty164_INTERFACE_DEFINED__

/* interface IDebugProperty164 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProperty164;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B66D2821-1AED-489D-B376-42270D737C78")
    IDebugProperty164 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddToFavorites( 
            /* [in] */ __RPC__in_opt IDebugProperty164 *pChild) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromFavorites( 
            /* [in] */ __RPC__in_opt IDebugProperty164 *pChild) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProperty164Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProperty164 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProperty164 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProperty164 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToFavorites )( 
            __RPC__in IDebugProperty164 * This,
            /* [in] */ __RPC__in_opt IDebugProperty164 *pChild);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromFavorites )( 
            __RPC__in IDebugProperty164 * This,
            /* [in] */ __RPC__in_opt IDebugProperty164 *pChild);
        
        END_INTERFACE
    } IDebugProperty164Vtbl;

    interface IDebugProperty164
    {
        CONST_VTBL struct IDebugProperty164Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProperty164_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProperty164_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProperty164_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProperty164_AddToFavorites(This,pChild)	\
    ( (This)->lpVtbl -> AddToFavorites(This,pChild) ) 

#define IDebugProperty164_RemoveFromFavorites(This,pChild)	\
    ( (This)->lpVtbl -> RemoveFromFavorites(This,pChild) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProperty164_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionDetails164_INTERFACE_DEFINED__
#define __IDebugExceptionDetails164_INTERFACE_DEFINED__

/* interface IDebugExceptionDetails164 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionDetails164;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("766A0544-AE86-4C9A-8DFB-BD0D71F30D9A")
    IDebugExceptionDetails164 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExceptionCodeContext( 
            /* [in] */ int exceptionFrameIndex,
            /* [out] */ IDebugCodeContext2 **pCodeContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRethrownCallStack( 
            /* [in] */ BOOL addFormatting,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwExFlags,
            /* [out] */ BSTR *pbstrCallstack) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionDetails164Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionDetails164 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionDetails164 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionDetails164 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExceptionCodeContext )( 
            IDebugExceptionDetails164 * This,
            /* [in] */ int exceptionFrameIndex,
            /* [out] */ IDebugCodeContext2 **pCodeContext);
        
        HRESULT ( STDMETHODCALLTYPE *GetRethrownCallStack )( 
            IDebugExceptionDetails164 * This,
            /* [in] */ BOOL addFormatting,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwExFlags,
            /* [out] */ BSTR *pbstrCallstack);
        
        END_INTERFACE
    } IDebugExceptionDetails164Vtbl;

    interface IDebugExceptionDetails164
    {
        CONST_VTBL struct IDebugExceptionDetails164Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionDetails164_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionDetails164_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionDetails164_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionDetails164_GetExceptionCodeContext(This,exceptionFrameIndex,pCodeContext)	\
    ( (This)->lpVtbl -> GetExceptionCodeContext(This,exceptionFrameIndex,pCodeContext) ) 

#define IDebugExceptionDetails164_GetRethrownCallStack(This,addFormatting,dwFlags,dwExFlags,pbstrCallstack)	\
    ( (This)->lpVtbl -> GetRethrownCallStack(This,addFormatting,dwFlags,dwExFlags,pbstrCallstack) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionDetails164_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


