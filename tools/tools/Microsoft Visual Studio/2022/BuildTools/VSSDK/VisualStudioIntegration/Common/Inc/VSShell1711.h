

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

#ifndef __VSShell1711_h__
#define __VSShell1711_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsUIContextManager_FWD_DEFINED__
#define __IVsUIContextManager_FWD_DEFINED__
typedef interface IVsUIContextManager IVsUIContextManager;

#endif 	/* __IVsUIContextManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "context.h"
#include "vsshell.h"
#include "vsshell2.h"
#include "vsshell80.h"
#include "vsshell90.h"
#include "vsshell100.h"
#include "vsshell110.h"
#include "vsshell120.h"
#include "vsshell140.h"
#include "vsshell150.h"
#include "vsshell153.h"
#include "vsshell155.h"
#include "vsshell156.h"
#include "vsshell157.h"
#include "vsshell158.h"
#include "vsshell160.h"
#include "vsshell161.h"
#include "vsshell162.h"
#include "vsshell169.h"
#include "vsshell1610.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSShell1711_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus
/* [v1_enum] */ 
enum __VSOSEFLAGS3
    {
        OSE_AvoidExternalEditors	= 0x80000000
    } ;
/* [v1_enum] */ 
enum __UIContextState
    {
        UIContextState_NeverSet	= 0,
        UIContextState_Active	= 0x1,
        UIContextState_Inactive	= 0x2
    } ;
typedef DWORD UIContextState;



extern RPC_IF_HANDLE __MIDL_itf_VSShell1711_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1711_0000_0000_v0_0_s_ifspec;

#ifndef __IVsUIContextManager_INTERFACE_DEFINED__
#define __IVsUIContextManager_INTERFACE_DEFINED__

/* interface IVsUIContextManager */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUIContextManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eceae828-2b6f-48ad-be7d-61b99c2ec466")
    IVsUIContextManager : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AreUIContextsAvailable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfAvailable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIContextState( 
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [retval][out] */ __RPC__out UIContextState *pState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUIContextState( 
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [in] */ VARIANT_BOOL isActive) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseUIContextEvents( 
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseSpecificUIContextEvents( 
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseUIContextEvents( 
            /* [in] */ VSCOOKIE cookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUIContextManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUIContextManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUIContextManager * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AreUIContextsAvailable )( 
            __RPC__in IVsUIContextManager * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIContextState )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [retval][out] */ __RPC__out UIContextState *pState);
        
        HRESULT ( STDMETHODCALLTYPE *SetUIContextState )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [in] */ VARIANT_BOOL isActive);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseUIContextEvents )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseSpecificUIContextEvents )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ __RPC__in_opt IVsUIContextEvents *callback,
            /* [in] */ __RPC__in REFGUID uiContext,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseUIContextEvents )( 
            __RPC__in IVsUIContextManager * This,
            /* [in] */ VSCOOKIE cookie);
        
        END_INTERFACE
    } IVsUIContextManagerVtbl;

    interface IVsUIContextManager
    {
        CONST_VTBL struct IVsUIContextManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUIContextManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUIContextManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUIContextManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUIContextManager_get_AreUIContextsAvailable(This,pfAvailable)	\
    ( (This)->lpVtbl -> get_AreUIContextsAvailable(This,pfAvailable) ) 

#define IVsUIContextManager_GetUIContextState(This,uiContext,pState)	\
    ( (This)->lpVtbl -> GetUIContextState(This,uiContext,pState) ) 

#define IVsUIContextManager_SetUIContextState(This,uiContext,isActive)	\
    ( (This)->lpVtbl -> SetUIContextState(This,uiContext,isActive) ) 

#define IVsUIContextManager_AdviseUIContextEvents(This,callback,pCookie)	\
    ( (This)->lpVtbl -> AdviseUIContextEvents(This,callback,pCookie) ) 

#define IVsUIContextManager_AdviseSpecificUIContextEvents(This,callback,uiContext,pCookie)	\
    ( (This)->lpVtbl -> AdviseSpecificUIContextEvents(This,callback,uiContext,pCookie) ) 

#define IVsUIContextManager_UnadviseUIContextEvents(This,cookie)	\
    ( (This)->lpVtbl -> UnadviseUIContextEvents(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUIContextManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell1711_0000_0001 */
/* [local] */ 

extern const __declspec(selectany) GUID SID_SVsUIContextManager = { 0xf215afcd, 0xdc11, 0x4dc5, { 0x99, 0xd4, 0x9d, 0x0b, 0x6b, 0xc8, 0x49, 0x57 } };
/* [v1_enum] */ 
enum __VSBLDCFGPROPID2
    {
        VSBLDCFGPROPID_LAST2	= -15999,
        VSBLDCFGPROPID_SupportsMTClean	= -15999
    } ;
typedef DWORD VSBLDCFGPROPID2;



extern RPC_IF_HANDLE __MIDL_itf_VSShell1711_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1711_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


