

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

#ifndef __VSShell176_h__
#define __VSShell176_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsAsyncRunningDocumentTable3_FWD_DEFINED__
#define __IVsAsyncRunningDocumentTable3_FWD_DEFINED__
typedef interface IVsAsyncRunningDocumentTable3 IVsAsyncRunningDocumentTable3;

#endif 	/* __IVsAsyncRunningDocumentTable3_FWD_DEFINED__ */


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
#include "vsshell172.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSShell176_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus
/* [v1_enum] */ 
enum __MARKERTYPE4
    {
        MARKERTYPE4_MARKER_INFORMATION	= 0x25,
        MARKERTYPE4_DEF_MARKER_COUNT_NEW_3	= 0x26
    } ;
typedef DWORD MARKERTYPE4;



extern RPC_IF_HANDLE __MIDL_itf_VSShell176_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell176_0000_0000_v0_0_s_ifspec;

#ifndef __IVsAsyncRunningDocumentTable3_INTERFACE_DEFINED__
#define __IVsAsyncRunningDocumentTable3_INTERFACE_DEFINED__

/* interface IVsAsyncRunningDocumentTable3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncRunningDocumentTable3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fb318d71-ecfc-4352-b19d-2c77acb77d76")
    IVsAsyncRunningDocumentTable3 : public IVsAsyncRunningDocumentTable2
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsAsyncSaveEnabled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncRunningDocumentTable3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveDocumentsAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncSaveState )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateAsyncSaveState )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [in] */ __RPC__in_opt IUnknown *punkState);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockDocumentAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [in] */ VSRDTFLAGS grfRDTLockType,
            /* [in] */ VSCOOKIE dwCookie,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAsyncSaveEnabled )( 
            __RPC__in IVsAsyncRunningDocumentTable3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *res);
        
        END_INTERFACE
    } IVsAsyncRunningDocumentTable3Vtbl;

    interface IVsAsyncRunningDocumentTable3
    {
        CONST_VTBL struct IVsAsyncRunningDocumentTable3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncRunningDocumentTable3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncRunningDocumentTable3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncRunningDocumentTable3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncRunningDocumentTable3_SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask) ) 

#define IVsAsyncRunningDocumentTable3_GetAsyncSaveState(This,pProvider,ppunkState)	\
    ( (This)->lpVtbl -> GetAsyncSaveState(This,pProvider,ppunkState) ) 


#define IVsAsyncRunningDocumentTable3_UpdateAsyncSaveState(This,pProvider,punkState)	\
    ( (This)->lpVtbl -> UpdateAsyncSaveState(This,pProvider,punkState) ) 

#define IVsAsyncRunningDocumentTable3_UnlockDocumentAsync(This,grfRDTLockType,dwCookie,saveTask)	\
    ( (This)->lpVtbl -> UnlockDocumentAsync(This,grfRDTLockType,dwCookie,saveTask) ) 


#define IVsAsyncRunningDocumentTable3_get_IsAsyncSaveEnabled(This,res)	\
    ( (This)->lpVtbl -> get_IsAsyncSaveEnabled(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncRunningDocumentTable3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell176_0000_0001 */
/* [local] */ 

/* [v1_enum] */ 
enum __VSADDITEMFLAGS4
    {
        VSADDITEM_DisallowCompactView	= 0x2000000
    } ;


extern RPC_IF_HANDLE __MIDL_itf_VSShell176_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell176_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


