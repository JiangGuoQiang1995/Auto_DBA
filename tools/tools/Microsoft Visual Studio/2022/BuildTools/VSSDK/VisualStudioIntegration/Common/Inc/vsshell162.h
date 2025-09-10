

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

#ifndef __vsshell162_h__
#define __vsshell162_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsRunningDocTableEvents6_FWD_DEFINED__
#define __IVsRunningDocTableEvents6_FWD_DEFINED__
typedef interface IVsRunningDocTableEvents6 IVsRunningDocTableEvents6;

#endif 	/* __IVsRunningDocTableEvents6_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell162_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSFPROPID9
    {
        VSFPROPID_ContainingHwnd	= -5050,
        VSFPROPID9_FIRST	= -5050
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell162_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell162_0000_0000_v0_0_s_ifspec;

#ifndef __IVsRunningDocTableEvents6_INTERFACE_DEFINED__
#define __IVsRunningDocTableEvents6_INTERFACE_DEFINED__

/* interface IVsRunningDocTableEvents6 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsRunningDocTableEvents6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5c9a40a-61de-46aa-b025-8cc83048e13f")
    IVsRunningDocTableEvents6 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnAfterDocDataChanged( 
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ __RPC__in_opt IUnknown *punkDocDataOld,
            /* [in] */ __RPC__in_opt IUnknown *punkDocDataNew) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRunningDocTableEvents6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRunningDocTableEvents6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRunningDocTableEvents6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRunningDocTableEvents6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterDocDataChanged )( 
            __RPC__in IVsRunningDocTableEvents6 * This,
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ __RPC__in_opt IUnknown *punkDocDataOld,
            /* [in] */ __RPC__in_opt IUnknown *punkDocDataNew);
        
        END_INTERFACE
    } IVsRunningDocTableEvents6Vtbl;

    interface IVsRunningDocTableEvents6
    {
        CONST_VTBL struct IVsRunningDocTableEvents6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRunningDocTableEvents6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRunningDocTableEvents6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRunningDocTableEvents6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRunningDocTableEvents6_OnAfterDocDataChanged(This,cookie,punkDocDataOld,punkDocDataNew)	\
    ( (This)->lpVtbl -> OnAfterDocDataChanged(This,cookie,punkDocDataOld,punkDocDataNew) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRunningDocTableEvents6_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell162_0000_0001 */
/* [local] */ 

extern const __declspec(selectany) GUID UICONTEXT_MainToolBarVisible = { 0x206f83b1, 0x2911, 0x4cdf, { 0x95, 0xdf, 0xea, 0xb5, 0x1e, 0x21, 0xf9, 0x38 } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell162_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell162_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


