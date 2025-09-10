

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

#ifndef __vsshell160_h__
#define __vsshell160_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsToolWindowToolbarHost4_FWD_DEFINED__
#define __IVsToolWindowToolbarHost4_FWD_DEFINED__
typedef interface IVsToolWindowToolbarHost4 IVsToolWindowToolbarHost4;

#endif 	/* __IVsToolWindowToolbarHost4_FWD_DEFINED__ */


#ifndef __IVsServiceInfo2_FWD_DEFINED__
#define __IVsServiceInfo2_FWD_DEFINED__
typedef interface IVsServiceInfo2 IVsServiceInfo2;

#endif 	/* __IVsServiceInfo2_FWD_DEFINED__ */


#ifndef __SVsBuiltInServiceInfoQueryService_FWD_DEFINED__
#define __SVsBuiltInServiceInfoQueryService_FWD_DEFINED__
typedef interface SVsBuiltInServiceInfoQueryService SVsBuiltInServiceInfoQueryService;

#endif 	/* __SVsBuiltInServiceInfoQueryService_FWD_DEFINED__ */


#ifndef __IVsPackageInfo_FWD_DEFINED__
#define __IVsPackageInfo_FWD_DEFINED__
typedef interface IVsPackageInfo IVsPackageInfo;

#endif 	/* __IVsPackageInfo_FWD_DEFINED__ */


#ifndef __IVsPackageInfoQueryService_FWD_DEFINED__
#define __IVsPackageInfoQueryService_FWD_DEFINED__
typedef interface IVsPackageInfoQueryService IVsPackageInfoQueryService;

#endif 	/* __IVsPackageInfoQueryService_FWD_DEFINED__ */


#ifndef __SVsPackageInfoQueryService_FWD_DEFINED__
#define __SVsPackageInfoQueryService_FWD_DEFINED__
typedef interface SVsPackageInfoQueryService SVsPackageInfoQueryService;

#endif 	/* __SVsPackageInfoQueryService_FWD_DEFINED__ */


#ifndef __IVsToolboxClipboardCycler2_FWD_DEFINED__
#define __IVsToolboxClipboardCycler2_FWD_DEFINED__
typedef interface IVsToolboxClipboardCycler2 IVsToolboxClipboardCycler2;

#endif 	/* __IVsToolboxClipboardCycler2_FWD_DEFINED__ */


#ifndef __IVsFontAndColorStorage4_FWD_DEFINED__
#define __IVsFontAndColorStorage4_FWD_DEFINED__
typedef interface IVsFontAndColorStorage4 IVsFontAndColorStorage4;

#endif 	/* __IVsFontAndColorStorage4_FWD_DEFINED__ */


#ifndef __IVsInvalidateCachedCommandState_FWD_DEFINED__
#define __IVsInvalidateCachedCommandState_FWD_DEFINED__
typedef interface IVsInvalidateCachedCommandState IVsInvalidateCachedCommandState;

#endif 	/* __IVsInvalidateCachedCommandState_FWD_DEFINED__ */


#ifndef __SVsInvalidateCachedCommandState_FWD_DEFINED__
#define __SVsInvalidateCachedCommandState_FWD_DEFINED__
typedef interface SVsInvalidateCachedCommandState SVsInvalidateCachedCommandState;

#endif 	/* __SVsInvalidateCachedCommandState_FWD_DEFINED__ */


#ifndef __IVsUIContextEvents_FWD_DEFINED__
#define __IVsUIContextEvents_FWD_DEFINED__
typedef interface IVsUIContextEvents IVsUIContextEvents;

#endif 	/* __IVsUIContextEvents_FWD_DEFINED__ */


#ifndef __IVsUIContextMonitor_FWD_DEFINED__
#define __IVsUIContextMonitor_FWD_DEFINED__
typedef interface IVsUIContextMonitor IVsUIContextMonitor;

#endif 	/* __IVsUIContextMonitor_FWD_DEFINED__ */


#ifndef __SVsUIContextMonitor_FWD_DEFINED__
#define __SVsUIContextMonitor_FWD_DEFINED__
typedef interface SVsUIContextMonitor SVsUIContextMonitor;

#endif 	/* __SVsUIContextMonitor_FWD_DEFINED__ */


#ifndef __IVsDpiAware_FWD_DEFINED__
#define __IVsDpiAware_FWD_DEFINED__
typedef interface IVsDpiAware IVsDpiAware;

#endif 	/* __IVsDpiAware_FWD_DEFINED__ */


#ifndef __IUIHostLocale3_FWD_DEFINED__
#define __IUIHostLocale3_FWD_DEFINED__
typedef interface IUIHostLocale3 IUIHostLocale3;

#endif 	/* __IUIHostLocale3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vsshell.h"
#include "vsshell2.h"
#include "vsshell80.h"
#include "vsshell90.h"
#include "vsshell100.h"
#include "vsshell110.h"
#include "vsshell120.h"
#include "vsshell140.h"
#include "vsshell150.h"
#include "uilocale.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell160_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSDBGLAUNCHFLAGS160
    {
        DBGLAUNCH_BypassAttachSecurity	= 0x10000000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS160;


enum __VSSEARCHPLACEMENT2
    {
        SP_DYNAMIC_LEFT	= 4
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0000_v0_0_s_ifspec;

#ifndef __IVsToolWindowToolbarHost4_INTERFACE_DEFINED__
#define __IVsToolWindowToolbarHost4_INTERFACE_DEFINED__

/* interface IVsToolWindowToolbarHost4 */
/* [object][custom][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsToolWindowToolbarHost4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4d6ca502-1fb1-4a49-81c7-8d2d423f7f0f")
    IVsToolWindowToolbarHost4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessMouseActivation2( 
            /* [in] */ HWND hwnd,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wp,
            /* [in] */ LPARAM lp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessMouseActivationModal2( 
            /* [in] */ HWND hwnd,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wp,
            /* [in] */ LPARAM lp,
            /* [out] */ LRESULT *plResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsToolWindowToolbarHost4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsToolWindowToolbarHost4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsToolWindowToolbarHost4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsToolWindowToolbarHost4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMouseActivation2 )( 
            IVsToolWindowToolbarHost4 * This,
            /* [in] */ HWND hwnd,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wp,
            /* [in] */ LPARAM lp);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMouseActivationModal2 )( 
            IVsToolWindowToolbarHost4 * This,
            /* [in] */ HWND hwnd,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wp,
            /* [in] */ LPARAM lp,
            /* [out] */ LRESULT *plResult);
        
        END_INTERFACE
    } IVsToolWindowToolbarHost4Vtbl;

    interface IVsToolWindowToolbarHost4
    {
        CONST_VTBL struct IVsToolWindowToolbarHost4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsToolWindowToolbarHost4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsToolWindowToolbarHost4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsToolWindowToolbarHost4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsToolWindowToolbarHost4_ProcessMouseActivation2(This,hwnd,msg,wp,lp)	\
    ( (This)->lpVtbl -> ProcessMouseActivation2(This,hwnd,msg,wp,lp) ) 

#define IVsToolWindowToolbarHost4_ProcessMouseActivationModal2(This,hwnd,msg,wp,lp,plResult)	\
    ( (This)->lpVtbl -> ProcessMouseActivationModal2(This,hwnd,msg,wp,lp,plResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsToolWindowToolbarHost4_INTERFACE_DEFINED__ */


#ifndef __IVsServiceInfo2_INTERFACE_DEFINED__
#define __IVsServiceInfo2_INTERFACE_DEFINED__

/* interface IVsServiceInfo2 */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IVsServiceInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0161283a-d9b6-4c8e-8c9b-121d0e413dd1")
    IVsServiceInfo2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsFreeThreaded( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsFreeThreaded) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsCacheable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsCacheable) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsServiceInfo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsServiceInfo2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsServiceInfo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsServiceInfo2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFreeThreaded )( 
            __RPC__in IVsServiceInfo2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsFreeThreaded);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCacheable )( 
            __RPC__in IVsServiceInfo2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsCacheable);
        
        END_INTERFACE
    } IVsServiceInfo2Vtbl;

    interface IVsServiceInfo2
    {
        CONST_VTBL struct IVsServiceInfo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsServiceInfo2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsServiceInfo2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsServiceInfo2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsServiceInfo2_get_IsFreeThreaded(This,pIsFreeThreaded)	\
    ( (This)->lpVtbl -> get_IsFreeThreaded(This,pIsFreeThreaded) ) 

#define IVsServiceInfo2_get_IsCacheable(This,pIsCacheable)	\
    ( (This)->lpVtbl -> get_IsCacheable(This,pIsCacheable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsServiceInfo2_INTERFACE_DEFINED__ */


#ifndef __SVsBuiltInServiceInfoQueryService_INTERFACE_DEFINED__
#define __SVsBuiltInServiceInfoQueryService_INTERFACE_DEFINED__

/* interface SVsBuiltInServiceInfoQueryService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsBuiltInServiceInfoQueryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11d239a8-47cd-4fac-9841-d4c0e1e4b5f4")
    SVsBuiltInServiceInfoQueryService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsBuiltInServiceInfoQueryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsBuiltInServiceInfoQueryService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsBuiltInServiceInfoQueryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsBuiltInServiceInfoQueryService * This);
        
        END_INTERFACE
    } SVsBuiltInServiceInfoQueryServiceVtbl;

    interface SVsBuiltInServiceInfoQueryService
    {
        CONST_VTBL struct SVsBuiltInServiceInfoQueryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsBuiltInServiceInfoQueryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsBuiltInServiceInfoQueryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsBuiltInServiceInfoQueryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsBuiltInServiceInfoQueryService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0003 */
/* [local] */ 

#define SID_SVsBuiltInServiceInfoQueryService IID_SVsBuiltInServiceInfoQueryService


extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0003_v0_0_s_ifspec;

#ifndef __IVsPackageInfo_INTERFACE_DEFINED__
#define __IVsPackageInfo_INTERFACE_DEFINED__

/* interface IVsPackageInfo */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IVsPackageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9248b73c-1a06-414e-a926-9fea3f38a375")
    IVsPackageInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ __RPC__out GUID *id) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *productName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CompanyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *companyName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsBackgroundLoadSafe( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isBackgroundLoadSafe) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLoaded( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isLoaded) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPackageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPackageInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPackageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPackageInfo * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__out GUID *id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *productName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompanyName )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *companyName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsBackgroundLoadSafe )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isBackgroundLoadSafe);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLoaded )( 
            __RPC__in IVsPackageInfo * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isLoaded);
        
        END_INTERFACE
    } IVsPackageInfoVtbl;

    interface IVsPackageInfo
    {
        CONST_VTBL struct IVsPackageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPackageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPackageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPackageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPackageInfo_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IVsPackageInfo_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IVsPackageInfo_get_ProductName(This,productName)	\
    ( (This)->lpVtbl -> get_ProductName(This,productName) ) 

#define IVsPackageInfo_get_CompanyName(This,companyName)	\
    ( (This)->lpVtbl -> get_CompanyName(This,companyName) ) 

#define IVsPackageInfo_get_IsBackgroundLoadSafe(This,isBackgroundLoadSafe)	\
    ( (This)->lpVtbl -> get_IsBackgroundLoadSafe(This,isBackgroundLoadSafe) ) 

#define IVsPackageInfo_get_IsLoaded(This,isLoaded)	\
    ( (This)->lpVtbl -> get_IsLoaded(This,isLoaded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPackageInfo_INTERFACE_DEFINED__ */


#ifndef __IVsPackageInfoQueryService_INTERFACE_DEFINED__
#define __IVsPackageInfoQueryService_INTERFACE_DEFINED__

/* interface IVsPackageInfoQueryService */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IVsPackageInfoQueryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1669c91d-923e-4cfe-82c5-e99075abb0ef")
    IVsPackageInfoQueryService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageInfo( 
            /* [in] */ __RPC__in REFGUID packageGuid,
            /* [retval][out] */ __RPC__deref_out_opt IVsPackageInfo **ppPackageInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPackageInfoQueryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPackageInfoQueryService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPackageInfoQueryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPackageInfoQueryService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageInfo )( 
            __RPC__in IVsPackageInfoQueryService * This,
            /* [in] */ __RPC__in REFGUID packageGuid,
            /* [retval][out] */ __RPC__deref_out_opt IVsPackageInfo **ppPackageInfo);
        
        END_INTERFACE
    } IVsPackageInfoQueryServiceVtbl;

    interface IVsPackageInfoQueryService
    {
        CONST_VTBL struct IVsPackageInfoQueryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPackageInfoQueryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPackageInfoQueryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPackageInfoQueryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPackageInfoQueryService_GetPackageInfo(This,packageGuid,ppPackageInfo)	\
    ( (This)->lpVtbl -> GetPackageInfo(This,packageGuid,ppPackageInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPackageInfoQueryService_INTERFACE_DEFINED__ */


#ifndef __SVsPackageInfoQueryService_INTERFACE_DEFINED__
#define __SVsPackageInfoQueryService_INTERFACE_DEFINED__

/* interface SVsPackageInfoQueryService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsPackageInfoQueryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5477757-d697-4dfe-a8ef-04e2992f7d26")
    SVsPackageInfoQueryService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsPackageInfoQueryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsPackageInfoQueryService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsPackageInfoQueryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsPackageInfoQueryService * This);
        
        END_INTERFACE
    } SVsPackageInfoQueryServiceVtbl;

    interface SVsPackageInfoQueryService
    {
        CONST_VTBL struct SVsPackageInfoQueryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsPackageInfoQueryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsPackageInfoQueryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsPackageInfoQueryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsPackageInfoQueryService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0006 */
/* [local] */ 

#define SID_SVSPackageInfoQueryService IID_SVsPackageInfoQueryService


extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0006_v0_0_s_ifspec;

#ifndef __IVsToolboxClipboardCycler2_INTERFACE_DEFINED__
#define __IVsToolboxClipboardCycler2_INTERFACE_DEFINED__

/* interface IVsToolboxClipboardCycler2 */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsToolboxClipboardCycler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3ED19650-63FE-440E-A3D2-87BC421B04D2")
    IVsToolboxClipboardCycler2 : public IVsToolboxClipboardCycler
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCountOfClipboardItems( 
            /* [in] */ __RPC__in_opt IVsToolboxUser *pTarget,
            /* [out] */ __RPC__out UINT *pLength) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsToolboxClipboardCycler2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsToolboxClipboardCycler2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsToolboxClipboardCycler2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsToolboxClipboardCycler2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AreDataObjectsAvailable )( 
            __RPC__in IVsToolboxClipboardCycler2 * This,
            /* [in] */ __RPC__in_opt IVsToolboxUser *pTarget,
            /* [out] */ __RPC__out BOOL *pbItemsAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *GetAndSelectNextDataObject )( 
            __RPC__in IVsToolboxClipboardCycler2 * This,
            /* [in] */ __RPC__in_opt IVsToolboxUser *pTarget,
            /* [out] */ __RPC__deref_out_opt IDataObject **ppDO);
        
        HRESULT ( STDMETHODCALLTYPE *BeginCycle )( 
            __RPC__in IVsToolboxClipboardCycler2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCountOfClipboardItems )( 
            __RPC__in IVsToolboxClipboardCycler2 * This,
            /* [in] */ __RPC__in_opt IVsToolboxUser *pTarget,
            /* [out] */ __RPC__out UINT *pLength);
        
        END_INTERFACE
    } IVsToolboxClipboardCycler2Vtbl;

    interface IVsToolboxClipboardCycler2
    {
        CONST_VTBL struct IVsToolboxClipboardCycler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsToolboxClipboardCycler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsToolboxClipboardCycler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsToolboxClipboardCycler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsToolboxClipboardCycler2_AreDataObjectsAvailable(This,pTarget,pbItemsAvailable)	\
    ( (This)->lpVtbl -> AreDataObjectsAvailable(This,pTarget,pbItemsAvailable) ) 

#define IVsToolboxClipboardCycler2_GetAndSelectNextDataObject(This,pTarget,ppDO)	\
    ( (This)->lpVtbl -> GetAndSelectNextDataObject(This,pTarget,ppDO) ) 

#define IVsToolboxClipboardCycler2_BeginCycle(This)	\
    ( (This)->lpVtbl -> BeginCycle(This) ) 


#define IVsToolboxClipboardCycler2_GetCountOfClipboardItems(This,pTarget,pLength)	\
    ( (This)->lpVtbl -> GetCountOfClipboardItems(This,pTarget,pLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsToolboxClipboardCycler2_INTERFACE_DEFINED__ */


#ifndef __IVsFontAndColorStorage4_INTERFACE_DEFINED__
#define __IVsFontAndColorStorage4_INTERFACE_DEFINED__

/* interface IVsFontAndColorStorage4 */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsFontAndColorStorage4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF43601B-FA34-4CCB-8C81-436566368517")
    IVsFontAndColorStorage4 : public IVsFontAndColorStorage3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFont( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [out][in] */ __RPC__inout LOGFONTW *pLOGFONT,
            /* [out][in] */ __RPC__inout FontInfo *pInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsFontAndColorStorage4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsFontAndColorStorage4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsFontAndColorStorage4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsFontAndColorStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RevertFontToDefault )( 
            __RPC__in IVsFontAndColorStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RevertItemToDefault )( 
            __RPC__in IVsFontAndColorStorage4 * This,
            /* [in] */ __RPC__in LPCOLESTR szName);
        
        HRESULT ( STDMETHODCALLTYPE *RevertAllItemsToDefault )( 
            __RPC__in IVsFontAndColorStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RevertAllCategoriesToDefault )( 
            __RPC__in IVsFontAndColorStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            __RPC__in IVsFontAndColorStorage4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [out][in] */ __RPC__inout LOGFONTW *pLOGFONT,
            /* [out][in] */ __RPC__inout FontInfo *pInfo);
        
        END_INTERFACE
    } IVsFontAndColorStorage4Vtbl;

    interface IVsFontAndColorStorage4
    {
        CONST_VTBL struct IVsFontAndColorStorage4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsFontAndColorStorage4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsFontAndColorStorage4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsFontAndColorStorage4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsFontAndColorStorage4_RevertFontToDefault(This)	\
    ( (This)->lpVtbl -> RevertFontToDefault(This) ) 

#define IVsFontAndColorStorage4_RevertItemToDefault(This,szName)	\
    ( (This)->lpVtbl -> RevertItemToDefault(This,szName) ) 

#define IVsFontAndColorStorage4_RevertAllItemsToDefault(This)	\
    ( (This)->lpVtbl -> RevertAllItemsToDefault(This) ) 


#define IVsFontAndColorStorage4_RevertAllCategoriesToDefault(This)	\
    ( (This)->lpVtbl -> RevertAllCategoriesToDefault(This) ) 


#define IVsFontAndColorStorage4_GetFont(This,hwnd,pLOGFONT,pInfo)	\
    ( (This)->lpVtbl -> GetFont(This,hwnd,pLOGFONT,pInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsFontAndColorStorage4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0008 */
/* [local] */ 


enum __VSSPROPID10
    {
        VSSPROPID_GlobalRestoreSolutionExplorerStateOption	= -9085,
        VSSPROPID_FIRST10	= -9085
    } ;
extern const __declspec(selectany) GUID UICONTEXT_SolutionClosing = {0xda9f8018, 0x6ea4, 0x48df, {0xbd, 0xb6, 0xb8, 0x5a, 0xbd, 0x8f, 0xc5, 0x1e}};
typedef struct _VSCOMMANDID
    {
    GUID CommandSet;
    DWORD CommandId;
    } 	VSCommandId;



extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0008_v0_0_s_ifspec;

#ifndef __IVsInvalidateCachedCommandState_INTERFACE_DEFINED__
#define __IVsInvalidateCachedCommandState_INTERFACE_DEFINED__

/* interface IVsInvalidateCachedCommandState */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInvalidateCachedCommandState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0a026971-5a0e-45c9-9479-e62ab18b7de6")
    IVsInvalidateCachedCommandState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InvalidateCommandUIState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvalidateSpecificCommandUIState( 
            VSCommandId command) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInvalidateCachedCommandStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInvalidateCachedCommandState * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInvalidateCachedCommandState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInvalidateCachedCommandState * This);
        
        HRESULT ( STDMETHODCALLTYPE *InvalidateCommandUIState )( 
            __RPC__in IVsInvalidateCachedCommandState * This);
        
        HRESULT ( STDMETHODCALLTYPE *InvalidateSpecificCommandUIState )( 
            __RPC__in IVsInvalidateCachedCommandState * This,
            VSCommandId command);
        
        END_INTERFACE
    } IVsInvalidateCachedCommandStateVtbl;

    interface IVsInvalidateCachedCommandState
    {
        CONST_VTBL struct IVsInvalidateCachedCommandStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInvalidateCachedCommandState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInvalidateCachedCommandState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInvalidateCachedCommandState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInvalidateCachedCommandState_InvalidateCommandUIState(This)	\
    ( (This)->lpVtbl -> InvalidateCommandUIState(This) ) 

#define IVsInvalidateCachedCommandState_InvalidateSpecificCommandUIState(This,command)	\
    ( (This)->lpVtbl -> InvalidateSpecificCommandUIState(This,command) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInvalidateCachedCommandState_INTERFACE_DEFINED__ */


#ifndef __SVsInvalidateCachedCommandState_INTERFACE_DEFINED__
#define __SVsInvalidateCachedCommandState_INTERFACE_DEFINED__

/* interface SVsInvalidateCachedCommandState */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsInvalidateCachedCommandState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74590f40-42ef-4df4-b762-902b09884657")
    SVsInvalidateCachedCommandState : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsInvalidateCachedCommandStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsInvalidateCachedCommandState * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsInvalidateCachedCommandState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsInvalidateCachedCommandState * This);
        
        END_INTERFACE
    } SVsInvalidateCachedCommandStateVtbl;

    interface SVsInvalidateCachedCommandState
    {
        CONST_VTBL struct SVsInvalidateCachedCommandStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsInvalidateCachedCommandState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsInvalidateCachedCommandState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsInvalidateCachedCommandState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsInvalidateCachedCommandState_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0010 */
/* [local] */ 

#define SID_SVsInvalidateCachedCommandState IID_SVsInvalidateCachedCommandState


extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0010_v0_0_s_ifspec;

#ifndef __IVsUIContextEvents_INTERFACE_DEFINED__
#define __IVsUIContextEvents_INTERFACE_DEFINED__

/* interface IVsUIContextEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUIContextEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0393d191-94ac-4997-9310-2eac67495816")
    IVsUIContextEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnContextChanged( 
            /* [in] */ GUID uiContext,
            /* [in] */ VARIANT_BOOL active) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUIContextEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUIContextEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUIContextEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUIContextEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnContextChanged )( 
            __RPC__in IVsUIContextEvents * This,
            /* [in] */ GUID uiContext,
            /* [in] */ VARIANT_BOOL active);
        
        END_INTERFACE
    } IVsUIContextEventsVtbl;

    interface IVsUIContextEvents
    {
        CONST_VTBL struct IVsUIContextEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUIContextEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUIContextEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUIContextEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUIContextEvents_OnContextChanged(This,uiContext,active)	\
    ( (This)->lpVtbl -> OnContextChanged(This,uiContext,active) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUIContextEvents_INTERFACE_DEFINED__ */


#ifndef __IVsUIContextMonitor_INTERFACE_DEFINED__
#define __IVsUIContextMonitor_INTERFACE_DEFINED__

/* interface IVsUIContextMonitor */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUIContextMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2b663830-25e6-4a21-94a3-24322fa4f01d")
    IVsUIContextMonitor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AreUIContextsAvailable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfAvailable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUIContextActive( 
            /* [in] */ GUID uiContext,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfActive) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseContextEvents( 
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [retval][out] */ __RPC__out VSCOOKIE *cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UndaviseContextEvents(
            /* [in] */ VSCOOKIE cookie) = 0;
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUIContextMonitorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUIContextMonitor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUIContextMonitor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUIContextMonitor * This);
        
        HRESULT ( STDMETHODCALLTYPE *AreUIContextsAvailable )( 
            __RPC__in IVsUIContextMonitor * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *IsUIContextActive )( 
            __RPC__in IVsUIContextMonitor * This,
            /* [in] */ GUID uiContext,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfActive);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseContextEvents )( 
            __RPC__in IVsUIContextMonitor * This,
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [retval][out] */ __RPC__out VSCOOKIE *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseContextEvents )(
            __RPC__in IVsUIContextMonitor * This,
            /* [in] */ VSCOOKIE cookie);
        
        END_INTERFACE
    } IVsUIContextMonitorVtbl;

    interface IVsUIContextMonitor
    {
        CONST_VTBL struct IVsUIContextMonitorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUIContextMonitor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUIContextMonitor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUIContextMonitor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUIContextMonitor_AreUIContextsAvailable(This,pfAvailable)	\
    ( (This)->lpVtbl -> AreUIContextsAvailable(This,pfAvailable) ) 

#define IVsUIContextMonitor_IsUIContextActive(This,uiContext,pfActive)	\
    ( (This)->lpVtbl -> IsUIContextActive(This,uiContext,pfActive) ) 

#define IVsUIContextMonitor_AdviseContextEvents(This,callback,cookie)	\
    ( (This)->lpVtbl -> AdviseContextEvents(This,callback,cookie) ) 

#define IVsUIContextMonitor_UnadviseContextEvents(This,cookie)	\
    ( (This)->lpVtbl -> UnadviseContextEvents(This,cookie) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUIContextMonitor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0012 */
/* [local] */ 

struct __declspec(deprecated("IVsUIContextMonitor is deprecated, please use IVsUIContextManager.")) IVsUIContextMonitor;
extern const __declspec(selectany) GUID UICONTEXT_DocumentWindowActive = { 0x8f0f3ed3, 0x2241, 0x4638, { 0x95, 0xce, 0xd8, 0xd5, 0xc5, 0x22, 0x2c, 0x1d } };
extern const __declspec(selectany) GUID UICONTEXT_ToolWindowActive = { 0x30840431, 0x1832, 0x47a3, { 0x94, 0xa4, 0x64, 0xe5, 0xec, 0x71, 0xb0, 0xcd } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0012_v0_0_s_ifspec;

#ifndef __SVsUIContextMonitor_INTERFACE_DEFINED__
#define __SVsUIContextMonitor_INTERFACE_DEFINED__

/* interface SVsUIContextMonitor */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsUIContextMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63b07ba0-b399-4b71-aa69-0d97c097b69c")
    SVsUIContextMonitor : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsUIContextMonitorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsUIContextMonitor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsUIContextMonitor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsUIContextMonitor * This);
        
        END_INTERFACE
    } SVsUIContextMonitorVtbl;

    interface SVsUIContextMonitor
    {
        CONST_VTBL struct SVsUIContextMonitorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsUIContextMonitor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsUIContextMonitor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsUIContextMonitor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsUIContextMonitor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell160_0000_0013 */
/* [local] */ 

#define SID_SVsUIContextMonitor IID_SVsUIContextMonitor

enum __VSDPIMODE
    {
        VSDM_Unaware	= 0x1,
        VSDM_System	= 0x2,
        VSDM_PerMonitor	= 0x3
    } ;
typedef DWORD VSDPIMODE;



extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell160_0000_0013_v0_0_s_ifspec;

#ifndef __IVsDpiAware_INTERFACE_DEFINED__
#define __IVsDpiAware_INTERFACE_DEFINED__

/* interface IVsDpiAware */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDpiAware;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2283D00F-C00F-405E-8C23-8D31CC714FDD")
    IVsDpiAware : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ __RPC__out VSDPIMODE *dwMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDpiAwareVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDpiAware * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDpiAware * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDpiAware * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            __RPC__in IVsDpiAware * This,
            /* [retval][out] */ __RPC__out VSDPIMODE *dwMode);
        
        END_INTERFACE
    } IVsDpiAwareVtbl;

    interface IVsDpiAware
    {
        CONST_VTBL struct IVsDpiAwareVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDpiAware_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDpiAware_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDpiAware_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDpiAware_get_Mode(This,dwMode)	\
    ( (This)->lpVtbl -> get_Mode(This,dwMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDpiAware_INTERFACE_DEFINED__ */


#ifndef __IUIHostLocale3_INTERFACE_DEFINED__
#define __IUIHostLocale3_INTERFACE_DEFINED__

/* interface IUIHostLocale3 */
/* [object][custom][version][uuid] */ 


EXTERN_C const IID IID_IUIHostLocale3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C2EA033-02BE-11d1-8C85-00C04FC2AA89")
    IUIHostLocale3 : public IUIHostLocale2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDialogFontEx( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [out] */ __RPC__out UIDLGLOGFONT *plogfont) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIHostLocale3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUIHostLocale3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUIHostLocale3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUILocale )( 
            __RPC__in IUIHostLocale3 * This,
            /* [retval][out] */ __RPC__out LCID *plcid);
        
        HRESULT ( STDMETHODCALLTYPE *GetDialogFont )( 
            __RPC__in IUIHostLocale3 * This,
            /* [out] */ __RPC__out UIDLGLOGFONT *plogfont);
        
        HRESULT ( STDMETHODCALLTYPE *LoadUILibrary )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ __RPC__in LPCOLESTR lpstrPath,
            /* [in] */ __RPC__in LPCOLESTR lpstrDllName,
            /* [in] */ DWORD dwExFlags,
            /* [retval][out] */ __RPC__out DWORD_PTR *phinstOut);
        
        HRESULT ( STDMETHODCALLTYPE *MungeDialogFont )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ DWORD dwSize,
            /* [size_is][in] */ __RPC__in_ecount_full(dwSize) const BYTE *pDlgTemplate,
            /* [out] */ __RPC__deref_out_opt BYTE **ppDlgTemplateOut);
        
        HRESULT ( STDMETHODCALLTYPE *LoadDialog )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ DWORD_PTR hMod,
            /* [in] */ DWORD dwDlgResId,
            /* [out] */ __RPC__deref_out_opt BYTE **ppDlgTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *GetUILibraryFileName )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ __RPC__in LPCOLESTR lpstrPath,
            /* [in] */ __RPC__in LPCOLESTR lpstrDllName,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetDialogFontEx )( 
            __RPC__in IUIHostLocale3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [out] */ __RPC__out UIDLGLOGFONT *plogfont);
        
        END_INTERFACE
    } IUIHostLocale3Vtbl;

    interface IUIHostLocale3
    {
        CONST_VTBL struct IUIHostLocale3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIHostLocale3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIHostLocale3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIHostLocale3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIHostLocale3_GetUILocale(This,plcid)	\
    ( (This)->lpVtbl -> GetUILocale(This,plcid) ) 

#define IUIHostLocale3_GetDialogFont(This,plogfont)	\
    ( (This)->lpVtbl -> GetDialogFont(This,plogfont) ) 


#define IUIHostLocale3_LoadUILibrary(This,lpstrPath,lpstrDllName,dwExFlags,phinstOut)	\
    ( (This)->lpVtbl -> LoadUILibrary(This,lpstrPath,lpstrDllName,dwExFlags,phinstOut) ) 

#define IUIHostLocale3_MungeDialogFont(This,dwSize,pDlgTemplate,ppDlgTemplateOut)	\
    ( (This)->lpVtbl -> MungeDialogFont(This,dwSize,pDlgTemplate,ppDlgTemplateOut) ) 

#define IUIHostLocale3_LoadDialog(This,hMod,dwDlgResId,ppDlgTemplate)	\
    ( (This)->lpVtbl -> LoadDialog(This,hMod,dwDlgResId,ppDlgTemplate) ) 

#define IUIHostLocale3_GetUILibraryFileName(This,lpstrPath,lpstrDllName,pbstrOut)	\
    ( (This)->lpVtbl -> GetUILibraryFileName(This,lpstrPath,lpstrDllName,pbstrOut) ) 


#define IUIHostLocale3_GetDialogFontEx(This,hwnd,plogfont)	\
    ( (This)->lpVtbl -> GetDialogFontEx(This,hwnd,plogfont) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIHostLocale3_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


