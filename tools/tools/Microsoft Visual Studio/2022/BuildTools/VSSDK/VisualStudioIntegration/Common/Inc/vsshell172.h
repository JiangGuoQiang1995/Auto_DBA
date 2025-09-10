

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

#ifndef __vsshell172_h__
#define __vsshell172_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsAsyncRunningDocumentTable2_FWD_DEFINED__
#define __IVsAsyncRunningDocumentTable2_FWD_DEFINED__
typedef interface IVsAsyncRunningDocumentTable2 IVsAsyncRunningDocumentTable2;

#endif 	/* __IVsAsyncRunningDocumentTable2_FWD_DEFINED__ */


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
#include "vsshell171.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell172_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;


enum __VSSPROPID12
    {
        VSSPROPID_ShutdownStarting	= -9087,
        VSSPROPID_FIRST12	= -9087
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell172_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell172_0000_0000_v0_0_s_ifspec;

#ifndef __IVsAsyncRunningDocumentTable2_INTERFACE_DEFINED__
#define __IVsAsyncRunningDocumentTable2_INTERFACE_DEFINED__

/* interface IVsAsyncRunningDocumentTable2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncRunningDocumentTable2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5115a04f-6c9f-4732-a9ae-02976e85f414")
    IVsAsyncRunningDocumentTable2 : public IVsAsyncRunningDocumentTable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateAsyncSaveState( 
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [in] */ __RPC__in_opt IUnknown *punkState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnlockDocumentAsync( 
            /* [in] */ VSRDTFLAGS grfRDTLockType,
            /* [in] */ VSCOOKIE dwCookie,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncRunningDocumentTable2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveDocumentsAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This,
            /* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncSaveState )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This,
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateAsyncSaveState )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This,
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [in] */ __RPC__in_opt IUnknown *punkState);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockDocumentAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable2 * This,
            /* [in] */ VSRDTFLAGS grfRDTLockType,
            /* [in] */ VSCOOKIE dwCookie,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        END_INTERFACE
    } IVsAsyncRunningDocumentTable2Vtbl;

    interface IVsAsyncRunningDocumentTable2
    {
        CONST_VTBL struct IVsAsyncRunningDocumentTable2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncRunningDocumentTable2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncRunningDocumentTable2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncRunningDocumentTable2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncRunningDocumentTable2_SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask) ) 

#define IVsAsyncRunningDocumentTable2_GetAsyncSaveState(This,pProvider,ppunkState)	\
    ( (This)->lpVtbl -> GetAsyncSaveState(This,pProvider,ppunkState) ) 


#define IVsAsyncRunningDocumentTable2_UpdateAsyncSaveState(This,pProvider,punkState)	\
    ( (This)->lpVtbl -> UpdateAsyncSaveState(This,pProvider,punkState) ) 

#define IVsAsyncRunningDocumentTable2_UnlockDocumentAsync(This,grfRDTLockType,dwCookie,saveTask)	\
    ( (This)->lpVtbl -> UnlockDocumentAsync(This,grfRDTLockType,dwCookie,saveTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncRunningDocumentTable2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


