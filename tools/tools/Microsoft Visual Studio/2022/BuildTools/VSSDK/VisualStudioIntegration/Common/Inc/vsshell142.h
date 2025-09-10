

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

#ifndef __vsshell142_h__
#define __vsshell142_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsSccProviderRegisteredSettings_FWD_DEFINED__
#define __IVsSccProviderRegisteredSettings_FWD_DEFINED__
typedef interface IVsSccProviderRegisteredSettings IVsSccProviderRegisteredSettings;

#endif 	/* __IVsSccProviderRegisteredSettings_FWD_DEFINED__ */


#ifndef __IVsSccProviderSettings_FWD_DEFINED__
#define __IVsSccProviderSettings_FWD_DEFINED__
typedef interface IVsSccProviderSettings IVsSccProviderSettings;

#endif 	/* __IVsSccProviderSettings_FWD_DEFINED__ */


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

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell142_0000_0000 */
/* [local] */ 

#pragma once
extern const __declspec(selectany) GUID UICONTEXT_RepositoryOpen = { 0xD8CDD15A, 0xD1F0, 0x4AD5, { 0xB0, 0xF4, 0x2D, 0xE6, 0x54, 0x54, 0x6D, 0x5B } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell142_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell142_0000_0000_v0_0_s_ifspec;

#ifndef __IVsSccProviderRegisteredSettings_INTERFACE_DEFINED__
#define __IVsSccProviderRegisteredSettings_INTERFACE_DEFINED__

/* interface IVsSccProviderRegisteredSettings */
/* [unique][version][uuid][object] */ 


EXTERN_C const IID IID_IVsSccProviderRegisteredSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEB3BC40-5C07-4A90-86DD-6A9977B78867")
    IVsSccProviderRegisteredSettings : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrDisplayName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UIContext( 
            /* [retval][out] */ __RPC__out GUID *pgUiContext) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ServiceId( 
            /* [retval][out] */ __RPC__out GUID *pgServiceId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MsScciRegKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrMsScciRegKey) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsPublishSupported( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfIsPublishSupported) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSccProviderRegisteredSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSccProviderRegisteredSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSccProviderRegisteredSettings * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrDisplayName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContext )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [retval][out] */ __RPC__out GUID *pgUiContext);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceId )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [retval][out] */ __RPC__out GUID *pgServiceId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsScciRegKey )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrMsScciRegKey);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPublishSupported )( 
            __RPC__in IVsSccProviderRegisteredSettings * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfIsPublishSupported);
        
        END_INTERFACE
    } IVsSccProviderRegisteredSettingsVtbl;

    interface IVsSccProviderRegisteredSettings
    {
        CONST_VTBL struct IVsSccProviderRegisteredSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSccProviderRegisteredSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSccProviderRegisteredSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSccProviderRegisteredSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSccProviderRegisteredSettings_get_DisplayName(This,pbstrDisplayName)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) ) 

#define IVsSccProviderRegisteredSettings_get_UIContext(This,pgUiContext)	\
    ( (This)->lpVtbl -> get_UIContext(This,pgUiContext) ) 

#define IVsSccProviderRegisteredSettings_get_ServiceId(This,pgServiceId)	\
    ( (This)->lpVtbl -> get_ServiceId(This,pgServiceId) ) 

#define IVsSccProviderRegisteredSettings_get_MsScciRegKey(This,pbstrMsScciRegKey)	\
    ( (This)->lpVtbl -> get_MsScciRegKey(This,pbstrMsScciRegKey) ) 

#define IVsSccProviderRegisteredSettings_get_IsPublishSupported(This,pfIsPublishSupported)	\
    ( (This)->lpVtbl -> get_IsPublishSupported(This,pfIsPublishSupported) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSccProviderRegisteredSettings_INTERFACE_DEFINED__ */


#ifndef __IVsSccProviderSettings_INTERFACE_DEFINED__
#define __IVsSccProviderSettings_INTERFACE_DEFINED__

/* interface IVsSccProviderSettings */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSccProviderSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74995C8C-F619-4638-AC6C-371E98731D6C")
    IVsSccProviderSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSccProviderRegisteredSettings( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppSccProviderRegisteredSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSccProviderSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSccProviderSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSccProviderSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSccProviderSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSccProviderRegisteredSettings )( 
            __RPC__in IVsSccProviderSettings * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppSccProviderRegisteredSettings);
        
        END_INTERFACE
    } IVsSccProviderSettingsVtbl;

    interface IVsSccProviderSettings
    {
        CONST_VTBL struct IVsSccProviderSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSccProviderSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSccProviderSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSccProviderSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSccProviderSettings_GetSccProviderRegisteredSettings(This,ppSccProviderRegisteredSettings)	\
    ( (This)->lpVtbl -> GetSccProviderRegisteredSettings(This,ppSccProviderRegisteredSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSccProviderSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell142_0000_0002 */
/* [local] */ 


enum __VSDBGLAUNCHFLAGS142
    {
        DBGLAUNCH_NoTerminateOnImmediateLaunch	= 0x1000000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS142;



extern RPC_IF_HANDLE __MIDL_itf_vsshell142_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell142_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


