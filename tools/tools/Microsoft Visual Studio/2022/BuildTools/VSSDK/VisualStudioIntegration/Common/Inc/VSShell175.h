

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

#ifndef __VSShell175_h__
#define __VSShell175_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsProjectAsyncOpen_FWD_DEFINED__
#define __IVsProjectAsyncOpen_FWD_DEFINED__
typedef interface IVsProjectAsyncOpen IVsProjectAsyncOpen;

#endif 	/* __IVsProjectAsyncOpen_FWD_DEFINED__ */


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


/* interface __MIDL_itf_VSShell175_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus

enum __VSDBGLAUNCHFLAGS175
    {
        DBGLAUNCH_UseIntegratedTerminalService	= 0x20000000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS175;



extern RPC_IF_HANDLE __MIDL_itf_VSShell175_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell175_0000_0000_v0_0_s_ifspec;

#ifndef __IVsProjectAsyncOpen_INTERFACE_DEFINED__
#define __IVsProjectAsyncOpen_INTERFACE_DEFINED__

/* interface IVsProjectAsyncOpen */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsProjectAsyncOpen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("101d210d-5b28-4e02-b220-19949ff4023b")
    IVsProjectAsyncOpen : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OpenItemAsync( 
            /* [in] */ VSITEMID itemid,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReopenItemAsync( 
            /* [in] */ VSITEMID itemId,
            /* [in] */ GUID rguidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenItemWithSpecificAsync( 
            /* [in] */ VSITEMID itemId,
            /* [in] */ VSSPECIFICEDITORFLAGS fEditorFlags,
            /* [in] */ GUID rguidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsProjectAsyncOpenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsProjectAsyncOpen * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsProjectAsyncOpen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsProjectAsyncOpen * This);
        
        HRESULT ( STDMETHODCALLTYPE *OpenItemAsync )( 
            __RPC__in IVsProjectAsyncOpen * This,
            /* [in] */ VSITEMID itemid,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *ReopenItemAsync )( 
            __RPC__in IVsProjectAsyncOpen * This,
            /* [in] */ VSITEMID itemId,
            /* [in] */ GUID rguidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OpenItemWithSpecificAsync )( 
            __RPC__in IVsProjectAsyncOpen * This,
            /* [in] */ VSITEMID itemId,
            /* [in] */ VSSPECIFICEDITORFLAGS fEditorFlags,
            /* [in] */ GUID rguidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID rguidLogicalView,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsProjectAsyncOpenVtbl;

    interface IVsProjectAsyncOpen
    {
        CONST_VTBL struct IVsProjectAsyncOpenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsProjectAsyncOpen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsProjectAsyncOpen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsProjectAsyncOpen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsProjectAsyncOpen_OpenItemAsync(This,itemid,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask)	\
    ( (This)->lpVtbl -> OpenItemAsync(This,itemid,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask) ) 

#define IVsProjectAsyncOpen_ReopenItemAsync(This,itemId,rguidEditorType,pszPhysicalView,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask)	\
    ( (This)->lpVtbl -> ReopenItemAsync(This,itemId,rguidEditorType,pszPhysicalView,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask) ) 

#define IVsProjectAsyncOpen_OpenItemWithSpecificAsync(This,itemId,fEditorFlags,rguidEditorType,pszPhysicalView,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask)	\
    ( (This)->lpVtbl -> OpenItemWithSpecificAsync(This,itemId,fEditorFlags,rguidEditorType,pszPhysicalView,rguidLogicalView,fShouldGetDocDataFromRdt,punkDocData,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsProjectAsyncOpen_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell175_0000_0001 */
/* [local] */ 

/* [v1_enum] */ 
enum __FONTCOLORFLAGS2
    {
        FCF_ONLYFIXEDPITCHFONTS	= 0x20
    } ;
typedef DWORD FONTCOLORFLAGS2;

/* [v1_enum] */ 
enum __VSSPROPID14
    {
        VSSPROPID_ShutdownReason	= -9090,
        VSSPROPID_FIRST14	= -9090
    } ;
typedef DWORD VSSPROPID14;

/* [v1_enum] */ 
enum __VSSHUTDOWNREASON
    {
        VSSHUTDOWNREASON_SHUTDOWNREASON_ReasonNormalUserInitiated	= 0,
        VSSHUTDOWNREASON_SHUTDOWNREASON_ReasonCrash	= 0x2,
        VSSHUTDOWNREASON_SHUTDOWNREASON_ReasonHang	= 0x3,
        VSSHUTDOWNREASON_SHUTDOWNREASON_ReasonUnknown	= 0x4,
        VSSHUTDOWNREASON_SHUTDOWNREASON_NormalNonUserInitiated	= 0x5,
        VSSHUTDOWNREASON_SHUTDOWNREASON_AppRestart	= 0x6,
        VSSHUTDOWNREASON_SHUTDOWNREASON_Automation	= 0x7,
        VSSHUTDOWNREASON_SHUTDOWNREASON_OSRequest	= 0x8,
        VSSHUTDOWNREASON_SHUTDOWNREASON_LicenseValidationFailed	= 0x9,
        VSSHUTDOWNREASON_SHUTDOWNREASON_DefaultIdentityConfigurationBlocked	= 0xa
    } ;
typedef DWORD VSSHUTDOWNREASON;



extern RPC_IF_HANDLE __MIDL_itf_VSShell175_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell175_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


