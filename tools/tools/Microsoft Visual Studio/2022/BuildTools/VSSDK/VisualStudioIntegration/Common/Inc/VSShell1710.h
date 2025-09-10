

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

#ifndef __VSShell1710_h__
#define __VSShell1710_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsUnifiedSettingsObserverFactory_FWD_DEFINED__
#define __IVsUnifiedSettingsObserverFactory_FWD_DEFINED__
typedef interface IVsUnifiedSettingsObserverFactory IVsUnifiedSettingsObserverFactory;

#endif 	/* __IVsUnifiedSettingsObserverFactory_FWD_DEFINED__ */


#ifndef __IVsAsyncUnifiedSettingsObserverFactory_FWD_DEFINED__
#define __IVsAsyncUnifiedSettingsObserverFactory_FWD_DEFINED__
typedef interface IVsAsyncUnifiedSettingsObserverFactory IVsAsyncUnifiedSettingsObserverFactory;

#endif 	/* __IVsAsyncUnifiedSettingsObserverFactory_FWD_DEFINED__ */


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


/* interface __MIDL_itf_VSShell1710_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_VSShell1710_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1710_0000_0000_v0_0_s_ifspec;

#ifndef __IVsUnifiedSettingsObserverFactory_INTERFACE_DEFINED__
#define __IVsUnifiedSettingsObserverFactory_INTERFACE_DEFINED__

/* interface IVsUnifiedSettingsObserverFactory */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUnifiedSettingsObserverFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b2d10780-c41b-410e-b199-08cd9a4f22a6")
    IVsUnifiedSettingsObserverFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSettingsObserver( 
            /* [in] */ GUID guid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUnifiedSettingsObserverFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUnifiedSettingsObserverFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUnifiedSettingsObserverFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUnifiedSettingsObserverFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSettingsObserver )( 
            __RPC__in IVsUnifiedSettingsObserverFactory * This,
            /* [in] */ GUID guid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **res);
        
        END_INTERFACE
    } IVsUnifiedSettingsObserverFactoryVtbl;

    interface IVsUnifiedSettingsObserverFactory
    {
        CONST_VTBL struct IVsUnifiedSettingsObserverFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUnifiedSettingsObserverFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUnifiedSettingsObserverFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUnifiedSettingsObserverFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUnifiedSettingsObserverFactory_CreateSettingsObserver(This,guid,res)	\
    ( (This)->lpVtbl -> CreateSettingsObserver(This,guid,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUnifiedSettingsObserverFactory_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncUnifiedSettingsObserverFactory_INTERFACE_DEFINED__
#define __IVsAsyncUnifiedSettingsObserverFactory_INTERFACE_DEFINED__

/* interface IVsAsyncUnifiedSettingsObserverFactory */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncUnifiedSettingsObserverFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d6225e73-4825-4ac6-99f3-4af29d61305f")
    IVsAsyncUnifiedSettingsObserverFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSettingsObserverAsync( 
            /* [in] */ GUID guid,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncUnifiedSettingsObserverFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncUnifiedSettingsObserverFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncUnifiedSettingsObserverFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncUnifiedSettingsObserverFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSettingsObserverAsync )( 
            __RPC__in IVsAsyncUnifiedSettingsObserverFactory * This,
            /* [in] */ GUID guid,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **res);
        
        END_INTERFACE
    } IVsAsyncUnifiedSettingsObserverFactoryVtbl;

    interface IVsAsyncUnifiedSettingsObserverFactory
    {
        CONST_VTBL struct IVsAsyncUnifiedSettingsObserverFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncUnifiedSettingsObserverFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncUnifiedSettingsObserverFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncUnifiedSettingsObserverFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncUnifiedSettingsObserverFactory_CreateSettingsObserverAsync(This,guid,res)	\
    ( (This)->lpVtbl -> CreateSettingsObserverAsync(This,guid,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncUnifiedSettingsObserverFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell1710_0000_0002 */
/* [local] */ 

/* [v1_enum] */ 
enum _FONTFLAGS2
    {
        FF_ITALIC	= 0x4,
        FF_UNDERLINE	= 0x8
    } ;
typedef DWORD FONTFLAGS2;

/* [v1_enum] */ 
enum __FCITEMFLAGS2
    {
        FCIF_ALLOWSTRIKETHROUGHCHANGE	= 0x40,
        FCIF_ALLOWITALICCHANGE	= 0x80,
        FCIF_ALLOWUNDERLINECHANGE	= 0x100
    } ;
typedef DWORD FCITEMFLAGS2;

/* [v1_enum] */ 
enum __FCFONTFLAGS2
    {
        FCFF_TRACK_PLAINTEXT_STRIKETHROUGH	= 0x40000000,
        FCFF_TRACK_PLAINTEXT_ITALIC	= 0x20000000,
        FCFF_TRACK_PLAINTEXT_UNDERLINE	= 0x10000000
    } ;
typedef DWORD FCFONTFLAGS2;



extern RPC_IF_HANDLE __MIDL_itf_VSShell1710_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1710_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


