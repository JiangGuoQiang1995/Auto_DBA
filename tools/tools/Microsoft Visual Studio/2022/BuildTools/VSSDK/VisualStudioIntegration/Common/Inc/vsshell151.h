

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

#ifndef __vsshell151_h__
#define __vsshell151_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsSetupCompositionService2_FWD_DEFINED__
#define __IVsSetupCompositionService2_FWD_DEFINED__
typedef interface IVsSetupCompositionService2 IVsSetupCompositionService2;

#endif 	/* __IVsSetupCompositionService2_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell151_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell151_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell151_0000_0000_v0_0_s_ifspec;

#ifndef __IVsSetupCompositionService2_INTERFACE_DEFINED__
#define __IVsSetupCompositionService2_INTERFACE_DEFINED__

/* interface IVsSetupCompositionService2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsSetupCompositionService2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9F18E9F-9842-4D1B-ADDE-8E5601332038")
    IVsSetupCompositionService2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ChannelProductDisplayVersion( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrVersion) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NewManifestDownloaded( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSetupCompositionService2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSetupCompositionService2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSetupCompositionService2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSetupCompositionService2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelProductDisplayVersion )( 
            __RPC__in IVsSetupCompositionService2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrVersion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewManifestDownloaded )( 
            __RPC__in IVsSetupCompositionService2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult);
        
        END_INTERFACE
    } IVsSetupCompositionService2Vtbl;

    interface IVsSetupCompositionService2
    {
        CONST_VTBL struct IVsSetupCompositionService2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSetupCompositionService2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSetupCompositionService2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSetupCompositionService2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSetupCompositionService2_get_ChannelProductDisplayVersion(This,bstrVersion)	\
    ( (This)->lpVtbl -> get_ChannelProductDisplayVersion(This,bstrVersion) ) 

#define IVsSetupCompositionService2_get_NewManifestDownloaded(This,pfResult)	\
    ( (This)->lpVtbl -> get_NewManifestDownloaded(This,pfResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSetupCompositionService2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


