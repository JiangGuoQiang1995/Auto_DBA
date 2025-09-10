

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

#ifndef __vsshell153_h__
#define __vsshell153_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsMenuEvents_FWD_DEFINED__
#define __IVsMenuEvents_FWD_DEFINED__
typedef interface IVsMenuEvents IVsMenuEvents;

#endif 	/* __IVsMenuEvents_FWD_DEFINED__ */


#ifndef __IVsMenuEventsService_FWD_DEFINED__
#define __IVsMenuEventsService_FWD_DEFINED__
typedef interface IVsMenuEventsService IVsMenuEventsService;

#endif 	/* __IVsMenuEventsService_FWD_DEFINED__ */


#ifndef __SVsMenuEventsService_FWD_DEFINED__
#define __SVsMenuEventsService_FWD_DEFINED__
typedef interface SVsMenuEventsService SVsMenuEventsService;

#endif 	/* __SVsMenuEventsService_FWD_DEFINED__ */


#ifndef __IVsNavigateToService2_FWD_DEFINED__
#define __IVsNavigateToService2_FWD_DEFINED__
typedef interface IVsNavigateToService2 IVsNavigateToService2;

#endif 	/* __IVsNavigateToService2_FWD_DEFINED__ */


#ifndef __IVsDebugger8_FWD_DEFINED__
#define __IVsDebugger8_FWD_DEFINED__
typedef interface IVsDebugger8 IVsDebugger8;

#endif 	/* __IVsDebugger8_FWD_DEFINED__ */


#ifndef __IVsToolboxItemProvider2_FWD_DEFINED__
#define __IVsToolboxItemProvider2_FWD_DEFINED__
typedef interface IVsToolboxItemProvider2 IVsToolboxItemProvider2;

#endif 	/* __IVsToolboxItemProvider2_FWD_DEFINED__ */


#ifndef __IVsToolbox7_FWD_DEFINED__
#define __IVsToolbox7_FWD_DEFINED__
typedef interface IVsToolbox7 IVsToolbox7;

#endif 	/* __IVsToolbox7_FWD_DEFINED__ */


#ifndef __IVsSolutionBuildManager6_FWD_DEFINED__
#define __IVsSolutionBuildManager6_FWD_DEFINED__
typedef interface IVsSolutionBuildManager6 IVsSolutionBuildManager6;

#endif 	/* __IVsSolutionBuildManager6_FWD_DEFINED__ */


#ifndef __IVsUpdateSolutionEvents5_FWD_DEFINED__
#define __IVsUpdateSolutionEvents5_FWD_DEFINED__
typedef interface IVsUpdateSolutionEvents5 IVsUpdateSolutionEvents5;

#endif 	/* __IVsUpdateSolutionEvents5_FWD_DEFINED__ */


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

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell153_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0000_v0_0_s_ifspec;

#ifndef __IVsMenuEvents_INTERFACE_DEFINED__
#define __IVsMenuEvents_INTERFACE_DEFINED__

/* interface IVsMenuEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsMenuEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD868C04-7979-4DB0-A2E1-F55490A42640")
    IVsMenuEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeforeMenuDisplayed( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsMenuEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsMenuEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsMenuEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsMenuEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeMenuDisplayed )( 
            __RPC__in IVsMenuEvents * This);
        
        END_INTERFACE
    } IVsMenuEventsVtbl;

    interface IVsMenuEvents
    {
        CONST_VTBL struct IVsMenuEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsMenuEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsMenuEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsMenuEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsMenuEvents_OnBeforeMenuDisplayed(This)	\
    ( (This)->lpVtbl -> OnBeforeMenuDisplayed(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsMenuEvents_INTERFACE_DEFINED__ */


#ifndef __IVsMenuEventsService_INTERFACE_DEFINED__
#define __IVsMenuEventsService_INTERFACE_DEFINED__

/* interface IVsMenuEventsService */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsMenuEventsService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B01B8DEE-677E-4ADC-87C2-3E2517FB6EF7")
    IVsMenuEventsService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseMenuEvents( 
            /* [in] */ __RPC__in_opt IVsMenuEvents *pEventSink,
            /* [in] */ __RPC__in const GUID *pguidCmdGroup,
            /* [in] */ DWORD dwCmdId,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseMenuEvents( 
            /* [in] */ VSCOOKIE dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsMenuEventsServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsMenuEventsService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsMenuEventsService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsMenuEventsService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseMenuEvents )( 
            __RPC__in IVsMenuEventsService * This,
            /* [in] */ __RPC__in_opt IVsMenuEvents *pEventSink,
            /* [in] */ __RPC__in const GUID *pguidCmdGroup,
            /* [in] */ DWORD dwCmdId,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseMenuEvents )( 
            __RPC__in IVsMenuEventsService * This,
            /* [in] */ VSCOOKIE dwCookie);
        
        END_INTERFACE
    } IVsMenuEventsServiceVtbl;

    interface IVsMenuEventsService
    {
        CONST_VTBL struct IVsMenuEventsServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsMenuEventsService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsMenuEventsService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsMenuEventsService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsMenuEventsService_AdviseMenuEvents(This,pEventSink,pguidCmdGroup,dwCmdId,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseMenuEvents(This,pEventSink,pguidCmdGroup,dwCmdId,pdwCookie) ) 

#define IVsMenuEventsService_UnadviseMenuEvents(This,dwCookie)	\
    ( (This)->lpVtbl -> UnadviseMenuEvents(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsMenuEventsService_INTERFACE_DEFINED__ */


#ifndef __SVsMenuEventsService_INTERFACE_DEFINED__
#define __SVsMenuEventsService_INTERFACE_DEFINED__

/* interface SVsMenuEventsService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsMenuEventsService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D646997-5C08-4EF2-B709-B5C70F009A70")
    SVsMenuEventsService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsMenuEventsServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsMenuEventsService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsMenuEventsService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsMenuEventsService * This);
        
        END_INTERFACE
    } SVsMenuEventsServiceVtbl;

    interface SVsMenuEventsService
    {
        CONST_VTBL struct SVsMenuEventsServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsMenuEventsService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsMenuEventsService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsMenuEventsService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsMenuEventsService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell153_0000_0003 */
/* [local] */ 

#define SID_SVsMenuEventsService IID_SVsMenuEventsService


extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0003_v0_0_s_ifspec;

#ifndef __IVsNavigateToService2_INTERFACE_DEFINED__
#define __IVsNavigateToService2_INTERFACE_DEFINED__

/* interface IVsNavigateToService2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsNavigateToService2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6606A1CA-7810-4BB5-A036-725E90A06931")
    IVsNavigateToService2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsResultExpanderVisible( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateResultExpander( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsNavigateToService2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsNavigateToService2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsNavigateToService2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsNavigateToService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsResultExpanderVisible )( 
            __RPC__in IVsNavigateToService2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateResultExpander )( 
            __RPC__in IVsNavigateToService2 * This);
        
        END_INTERFACE
    } IVsNavigateToService2Vtbl;

    interface IVsNavigateToService2
    {
        CONST_VTBL struct IVsNavigateToService2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsNavigateToService2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsNavigateToService2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsNavigateToService2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsNavigateToService2_IsResultExpanderVisible(This,pfResult)	\
    ( (This)->lpVtbl -> IsResultExpanderVisible(This,pfResult) ) 

#define IVsNavigateToService2_ActivateResultExpander(This)	\
    ( (This)->lpVtbl -> ActivateResultExpander(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsNavigateToService2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell153_0000_0004 */
/* [local] */ 

#define szWSS_LIVE_SETTING L"LiveSetting"
extern const __declspec(selectany) GUID UICONTEXT_CloudDebugging = { 0xc22bcf10, 0xe1eb, 0x42c6, { 0x95, 0xa5, 0xe0, 0x14, 0x18, 0xc0, 0x8a, 0x29 } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0004_v0_0_s_ifspec;

#ifndef __IVsDebugger8_INTERFACE_DEFINED__
#define __IVsDebugger8_INTERFACE_DEFINED__

/* interface IVsDebugger8 */
/* [object][local][uuid] */ 


EXTERN_C const IID IID_IVsDebugger8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71AF033C-1C1B-4FD4-87AB-08B441DBCE1D")
    IVsDebugger8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE JumpToText( 
            /* [in] */ VsTextPos *text) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebugger8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebugger8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebugger8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebugger8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *JumpToText )( 
            IVsDebugger8 * This,
            /* [in] */ VsTextPos *text);
        
        END_INTERFACE
    } IVsDebugger8Vtbl;

    interface IVsDebugger8
    {
        CONST_VTBL struct IVsDebugger8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebugger8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebugger8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebugger8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebugger8_JumpToText(This,text)	\
    ( (This)->lpVtbl -> JumpToText(This,text) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebugger8_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell153_0000_0005 */
/* [local] */ 

#define VS_E_USE_ASYNC_ALTERNATIVE_INSTEAD MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x200A)


extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0005_v0_0_s_ifspec;

#ifndef __IVsToolboxItemProvider2_INTERFACE_DEFINED__
#define __IVsToolboxItemProvider2_INTERFACE_DEFINED__

/* interface IVsToolboxItemProvider2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsToolboxItemProvider2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35C56762-5AB2-4C9F-AE5A-BF11E4D8FB88")
    IVsToolboxItemProvider2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItemContentAsync( 
            /* [in] */ __RPC__in LPCWSTR szItemID,
            /* [in] */ unsigned short format,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsToolboxItemProvider2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsToolboxItemProvider2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsToolboxItemProvider2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsToolboxItemProvider2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemContentAsync )( 
            __RPC__in IVsToolboxItemProvider2 * This,
            /* [in] */ __RPC__in LPCWSTR szItemID,
            /* [in] */ unsigned short format,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsToolboxItemProvider2Vtbl;

    interface IVsToolboxItemProvider2
    {
        CONST_VTBL struct IVsToolboxItemProvider2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsToolboxItemProvider2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsToolboxItemProvider2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsToolboxItemProvider2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsToolboxItemProvider2_GetItemContentAsync(This,szItemID,format,ppTask)	\
    ( (This)->lpVtbl -> GetItemContentAsync(This,szItemID,format,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsToolboxItemProvider2_INTERFACE_DEFINED__ */


#ifndef __IVsToolbox7_INTERFACE_DEFINED__
#define __IVsToolbox7_INTERFACE_DEFINED__

/* interface IVsToolbox7 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsToolbox7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58928E40-8514-42EE-8EFA-F5CEEEBBF653")
    IVsToolbox7 : public IVsToolbox6
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddItem2Async( 
            /* [in] */ __RPC__in_opt IDataObject *pDO,
            /* [in] */ __RPC__in TBXITEMINFO *ptif,
            /* [in] */ __RPC__in LPCOLESTR lpszTab,
            /* [in] */ __RPC__in REFGUID guidPkg,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsToolbox7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsToolbox7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsToolbox7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddItemToDesigner )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem);
        
        HRESULT ( STDMETHODCALLTYPE *CopyToClipboard )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTabIDs )( 
            __RPC__in IVsToolbox7 * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumToolboxTabs **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitmapBackground )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [retval][out] */ __RPC__out DWORD *pRgbColor);
        
        HRESULT ( STDMETHODCALLTYPE *GetUnresolvedItemName )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        HRESULT ( STDMETHODCALLTYPE *GetUnresolvedTabName )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in LPCWSTR szID,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFiltered )( 
            __RPC__in IVsToolbox7 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pFiltered);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFiltered )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ VARIANT_BOOL filtered);
        
        HRESULT ( STDMETHODCALLTYPE *IsTabVisible )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in LPCWSTR szID,
            /* [in] */ VARIANT_BOOL fRefresh,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsVisible);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [in] */ __RPC__in_opt IDataObject *pInsertionPoint);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItemToTab )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [in] */ __RPC__in LPCWSTR szTabID);
        
        HRESULT ( STDMETHODCALLTYPE *MoveTab )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in LPCWSTR szID,
            /* [in] */ __RPC__in LPCWSTR szInsertionPoint);
        
        HRESULT ( STDMETHODCALLTYPE *PasteFromClipboard )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in LPCWSTR szTabID,
            /* [out] */ __RPC__deref_out_opt IDataObject **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [in] */ __RPC__in LPCWSTR szName);
        
        HRESULT ( STDMETHODCALLTYPE *RenameTab )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in LPCWSTR szID,
            /* [in] */ __RPC__in LPCWSTR szName);
        
        HRESULT ( STDMETHODCALLTYPE *ResetToolbox )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ VARIANT_BOOL promptUser,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePackageContent )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in REFGUID package);
        
        HRESULT ( STDMETHODCALLTYPE *IsItemFilteredInvisible )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pItem,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pInvisible);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncState )( 
            __RPC__in IVsToolbox7 * This,
            /* [retval][out] */ __RPC__out VSASYNCTOOLBOXSTATE *pState);
        
        HRESULT ( STDMETHODCALLTYPE *AddItem2Async )( 
            __RPC__in IVsToolbox7 * This,
            /* [in] */ __RPC__in_opt IDataObject *pDO,
            /* [in] */ __RPC__in TBXITEMINFO *ptif,
            /* [in] */ __RPC__in LPCOLESTR lpszTab,
            /* [in] */ __RPC__in REFGUID guidPkg,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsToolbox7Vtbl;

    interface IVsToolbox7
    {
        CONST_VTBL struct IVsToolbox7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsToolbox7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsToolbox7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsToolbox7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsToolbox7_AddItemToDesigner(This,pItem)	\
    ( (This)->lpVtbl -> AddItemToDesigner(This,pItem) ) 

#define IVsToolbox7_CopyToClipboard(This,pItem)	\
    ( (This)->lpVtbl -> CopyToClipboard(This,pItem) ) 

#define IVsToolbox7_EnumTabIDs(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumTabIDs(This,ppEnum) ) 

#define IVsToolbox7_GetBitmapBackground(This,pItem,pRgbColor)	\
    ( (This)->lpVtbl -> GetBitmapBackground(This,pItem,pRgbColor) ) 

#define IVsToolbox7_GetUnresolvedItemName(This,pItem,pName)	\
    ( (This)->lpVtbl -> GetUnresolvedItemName(This,pItem,pName) ) 

#define IVsToolbox7_GetUnresolvedTabName(This,szID,pName)	\
    ( (This)->lpVtbl -> GetUnresolvedTabName(This,szID,pName) ) 

#define IVsToolbox7_get_IsFiltered(This,pFiltered)	\
    ( (This)->lpVtbl -> get_IsFiltered(This,pFiltered) ) 

#define IVsToolbox7_put_IsFiltered(This,filtered)	\
    ( (This)->lpVtbl -> put_IsFiltered(This,filtered) ) 

#define IVsToolbox7_IsTabVisible(This,szID,fRefresh,pIsVisible)	\
    ( (This)->lpVtbl -> IsTabVisible(This,szID,fRefresh,pIsVisible) ) 

#define IVsToolbox7_MoveItem(This,pItem,pInsertionPoint)	\
    ( (This)->lpVtbl -> MoveItem(This,pItem,pInsertionPoint) ) 

#define IVsToolbox7_MoveItemToTab(This,pItem,szTabID)	\
    ( (This)->lpVtbl -> MoveItemToTab(This,pItem,szTabID) ) 

#define IVsToolbox7_MoveTab(This,szID,szInsertionPoint)	\
    ( (This)->lpVtbl -> MoveTab(This,szID,szInsertionPoint) ) 

#define IVsToolbox7_PasteFromClipboard(This,szTabID,ppItem)	\
    ( (This)->lpVtbl -> PasteFromClipboard(This,szTabID,ppItem) ) 

#define IVsToolbox7_RenameItem(This,pItem,szName)	\
    ( (This)->lpVtbl -> RenameItem(This,pItem,szName) ) 

#define IVsToolbox7_RenameTab(This,szID,szName)	\
    ( (This)->lpVtbl -> RenameTab(This,szID,szName) ) 

#define IVsToolbox7_ResetToolbox(This,promptUser,ppTask)	\
    ( (This)->lpVtbl -> ResetToolbox(This,promptUser,ppTask) ) 

#define IVsToolbox7_RemovePackageContent(This,package)	\
    ( (This)->lpVtbl -> RemovePackageContent(This,package) ) 

#define IVsToolbox7_IsItemFilteredInvisible(This,pItem,pInvisible)	\
    ( (This)->lpVtbl -> IsItemFilteredInvisible(This,pItem,pInvisible) ) 

#define IVsToolbox7_GetAsyncState(This,pState)	\
    ( (This)->lpVtbl -> GetAsyncState(This,pState) ) 


#define IVsToolbox7_AddItem2Async(This,pDO,ptif,lpszTab,guidPkg,ppTask)	\
    ( (This)->lpVtbl -> AddItem2Async(This,pDO,ptif,lpszTab,guidPkg,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsToolbox7_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell153_0000_0007 */
/* [local] */ 


enum __VSPROPID8
    {
        VSPROPID_StartupProjectFiles	= -8049,
        VSPROPID_PermanentSolutionGuid	= -8050,
        VSPROPID_FIRST8	= -8050
    } ;
typedef /* [public] */ DWORD VSPROPID8;


enum __VSSPROPID8
    {
        VSSPROPID_PromptForFileMove	= -9083,
        VSSPROPID_FIRST8	= -9083
    } ;
typedef LONG VSSPROPID8;

typedef 
enum __VSSOLNBUILDUPDATEFLAGS3
    {
        SBF_FLAGS_NONE	= 0,
        SBF_FLAGS_DEFERRED_BUILD	= 0x100,
        SBF_FLAGS_UPTODATE_CHECK	= 0x200,
        SBF_FLAGS_MASK	= 0xff00
    } 	VSSOLNBUILDUPDATEFLAGS3;



extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0007_v0_0_s_ifspec;

#ifndef __IVsSolutionBuildManager6_INTERFACE_DEFINED__
#define __IVsSolutionBuildManager6_INTERFACE_DEFINED__

/* interface IVsSolutionBuildManager6 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSolutionBuildManager6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("61AA4EA9-018F-4394-AD31-1E76D1BF80C8")
    IVsSolutionBuildManager6 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseUpdateSolutionEventsEx( 
            /* [in] */ __RPC__in REFGUID guidActivityId,
            /* [in] */ __RPC__in_opt IUnknown *pSink,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSolutionBuildManager6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSolutionBuildManager6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSolutionBuildManager6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSolutionBuildManager6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseUpdateSolutionEventsEx )( 
            __RPC__in IVsSolutionBuildManager6 * This,
            /* [in] */ __RPC__in REFGUID guidActivityId,
            /* [in] */ __RPC__in_opt IUnknown *pSink,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        END_INTERFACE
    } IVsSolutionBuildManager6Vtbl;

    interface IVsSolutionBuildManager6
    {
        CONST_VTBL struct IVsSolutionBuildManager6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSolutionBuildManager6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSolutionBuildManager6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSolutionBuildManager6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSolutionBuildManager6_AdviseUpdateSolutionEventsEx(This,guidActivityId,pSink,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseUpdateSolutionEventsEx(This,guidActivityId,pSink,pdwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSolutionBuildManager6_INTERFACE_DEFINED__ */


#ifndef __IVsUpdateSolutionEvents5_INTERFACE_DEFINED__
#define __IVsUpdateSolutionEvents5_INTERFACE_DEFINED__

/* interface IVsUpdateSolutionEvents5 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUpdateSolutionEvents5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95498691-CB06-4BC1-8A83-F84C6D565E21")
    IVsUpdateSolutionEvents5 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateSolution_QueryDelayBuildAction( 
            /* [in] */ DWORD dwAction,
            /* [out] */ __RPC__deref_out_opt IVsTask **pDelayTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUpdateSolutionEvents5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUpdateSolutionEvents5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUpdateSolutionEvents5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUpdateSolutionEvents5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateSolution_QueryDelayBuildAction )( 
            __RPC__in IVsUpdateSolutionEvents5 * This,
            /* [in] */ DWORD dwAction,
            /* [out] */ __RPC__deref_out_opt IVsTask **pDelayTask);
        
        END_INTERFACE
    } IVsUpdateSolutionEvents5Vtbl;

    interface IVsUpdateSolutionEvents5
    {
        CONST_VTBL struct IVsUpdateSolutionEvents5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUpdateSolutionEvents5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUpdateSolutionEvents5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUpdateSolutionEvents5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUpdateSolutionEvents5_UpdateSolution_QueryDelayBuildAction(This,dwAction,pDelayTask)	\
    ( (This)->lpVtbl -> UpdateSolution_QueryDelayBuildAction(This,dwAction,pDelayTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUpdateSolutionEvents5_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell153_0000_0009 */
/* [local] */ 

extern const __declspec(selectany) GUID GUID_AdditionalContrastColorTheme = { 0xCE94D289, 0x8481, 0x498B, { 0x8C, 0xA9, 0x9B, 0x61, 0x91, 0xA3, 0x15, 0xB9} };

enum _VSProjectUnloadStatus3
    {
        UNLOADSTATUS_ProjectIncompatible	= 7
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell153_0000_0009_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     __RPC__in unsigned long *, __RPC__in HBITMAP * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


