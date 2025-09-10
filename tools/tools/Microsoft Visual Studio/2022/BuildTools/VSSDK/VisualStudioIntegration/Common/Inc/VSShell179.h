

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

#ifndef __VSShell179_h__
#define __VSShell179_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsWindowFrameEvents3_FWD_DEFINED__
#define __IVsWindowFrameEvents3_FWD_DEFINED__
typedef interface IVsWindowFrameEvents3 IVsWindowFrameEvents3;

#endif 	/* __IVsWindowFrameEvents3_FWD_DEFINED__ */


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
#include "textfind100.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSShell179_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus
/* [v1_enum] */ 
enum __VSFPROPID12
    {
        VSFPROPID_LoadingTask	= -5054,
        VSFPROPID_IsDocDataInitialized	= -5055,
        VSFPROPID_IsDocViewInitialized	= -5056
    } ;


extern RPC_IF_HANDLE __MIDL_itf_VSShell179_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell179_0000_0000_v0_0_s_ifspec;

#ifndef __IVsWindowFrameEvents3_INTERFACE_DEFINED__
#define __IVsWindowFrameEvents3_INTERFACE_DEFINED__

/* interface IVsWindowFrameEvents3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrameEvents3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3b8b9802-c720-4219-8694-e87ee8cb0e6d")
    IVsWindowFrameEvents3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFrameDocDataInitializedAsync( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame,
            /* [in] */ __RPC__in_opt IUnknown *pDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameDocViewInitialized( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame,
            /* [in] */ __RPC__in_opt IUnknown *pDocView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrameEvents3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrameEvents3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrameEvents3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrameEvents3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameDocDataInitializedAsync )( 
            __RPC__in IVsWindowFrameEvents3 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame,
            /* [in] */ __RPC__in_opt IUnknown *pDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameDocViewInitialized )( 
            __RPC__in IVsWindowFrameEvents3 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame,
            /* [in] */ __RPC__in_opt IUnknown *pDocView);
        
        END_INTERFACE
    } IVsWindowFrameEvents3Vtbl;

    interface IVsWindowFrameEvents3
    {
        CONST_VTBL struct IVsWindowFrameEvents3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrameEvents3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrameEvents3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrameEvents3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrameEvents3_OnFrameDocDataInitializedAsync(This,pFrame,pDocData,ppTask)	\
    ( (This)->lpVtbl -> OnFrameDocDataInitializedAsync(This,pFrame,pDocData,ppTask) ) 

#define IVsWindowFrameEvents3_OnFrameDocViewInitialized(This,pFrame,pDocView)	\
    ( (This)->lpVtbl -> OnFrameDocViewInitialized(This,pFrame,pDocView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrameEvents3_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


