

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

#ifndef __vsshell169_h__
#define __vsshell169_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsEditorFactory4_FWD_DEFINED__
#define __IVsEditorFactory4_FWD_DEFINED__
typedef interface IVsEditorFactory4 IVsEditorFactory4;

#endif 	/* __IVsEditorFactory4_FWD_DEFINED__ */


#ifndef __IVsPersistRemotableSolutionOpts_FWD_DEFINED__
#define __IVsPersistRemotableSolutionOpts_FWD_DEFINED__
typedef interface IVsPersistRemotableSolutionOpts IVsPersistRemotableSolutionOpts;

#endif 	/* __IVsPersistRemotableSolutionOpts_FWD_DEFINED__ */


#ifndef __IVsRemotableSolutionPersistence_FWD_DEFINED__
#define __IVsRemotableSolutionPersistence_FWD_DEFINED__
typedef interface IVsRemotableSolutionPersistence IVsRemotableSolutionPersistence;

#endif 	/* __IVsRemotableSolutionPersistence_FWD_DEFINED__ */


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
#include "vsshell164.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell169_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0000_v0_0_s_ifspec;

#ifndef __IVsEditorFactory4_INTERFACE_DEFINED__
#define __IVsEditorFactory4_INTERFACE_DEFINED__

/* interface IVsEditorFactory4 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsEditorFactory4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F149946-406A-4B77-A334-9314CDBACD2F")
    IVsEditorFactory4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDocumentData( 
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkDocData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocumentView( 
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkDocView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditorCaption( 
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [out] */ __RPC__out GUID *pguidCmdUI,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrEditorCaption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShouldDeferUntilIntellisenseIsReady( 
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pShouldDefer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsEditorFactory4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsEditorFactory4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsEditorFactory4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsEditorFactory4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentData )( 
            __RPC__in IVsEditorFactory4 * This,
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkDocData);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentView )( 
            __RPC__in IVsEditorFactory4 * This,
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkDocView);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditorCaption )( 
            __RPC__in IVsEditorFactory4 * This,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [out] */ __RPC__out GUID *pguidCmdUI,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrEditorCaption);
        
        HRESULT ( STDMETHODCALLTYPE *ShouldDeferUntilIntellisenseIsReady )( 
            __RPC__in IVsEditorFactory4 * This,
            /* [in] */ VSCREATEEDITORFLAGS grfCreate,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pShouldDefer);
        
        END_INTERFACE
    } IVsEditorFactory4Vtbl;

    interface IVsEditorFactory4
    {
        CONST_VTBL struct IVsEditorFactory4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsEditorFactory4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsEditorFactory4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsEditorFactory4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsEditorFactory4_GetDocumentData(This,grfCreate,pszMkDocument,pHier,itemid,ppunkDocData)	\
    ( (This)->lpVtbl -> GetDocumentData(This,grfCreate,pszMkDocument,pHier,itemid,ppunkDocData) ) 

#define IVsEditorFactory4_GetDocumentView(This,grfCreate,pszPhysicalView,pHier,punkDocData,itemid,ppunkDocView)	\
    ( (This)->lpVtbl -> GetDocumentView(This,grfCreate,pszPhysicalView,pHier,punkDocData,itemid,ppunkDocView) ) 

#define IVsEditorFactory4_GetEditorCaption(This,pszMkDocument,pszPhysicalView,pHier,punkDocData,pguidCmdUI,pbstrEditorCaption)	\
    ( (This)->lpVtbl -> GetEditorCaption(This,pszMkDocument,pszPhysicalView,pHier,punkDocData,pguidCmdUI,pbstrEditorCaption) ) 

#define IVsEditorFactory4_ShouldDeferUntilIntellisenseIsReady(This,grfCreate,pszMkDocument,pszPhysicalView,pShouldDefer)	\
    ( (This)->lpVtbl -> ShouldDeferUntilIntellisenseIsReady(This,grfCreate,pszMkDocument,pszPhysicalView,pShouldDefer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsEditorFactory4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell169_0000_0001 */
/* [local] */ 


enum __VSHPROPID11
    {
        VSHPROPID_IsSupportedInCodespace	= -2178,
        VSHPROPID_RemoteProjectIDGuid	= -2179,
        VSHPROPID_FIRST11	= -2179
    } ;



extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0001_v0_0_s_ifspec;

#ifndef __IVsPersistRemotableSolutionOpts_INTERFACE_DEFINED__
#define __IVsPersistRemotableSolutionOpts_INTERFACE_DEFINED__

/* interface IVsPersistRemotableSolutionOpts */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsPersistRemotableSolutionOpts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f4b625dc-7588-45cf-90ef-739c301a27bd")
    IVsPersistRemotableSolutionOpts : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveRemotableUserOptionsAsync( 
            /* [in] */ __RPC__in_opt IVsRemotableSolutionPersistence *pPersistence,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadRemotableUserOptionsAsync( 
            /* [in] */ BOOL fPreLoad,
            /* [in] */ __RPC__in_opt IVsRemotableSolutionPersistence *pPersistence,
            /* [in] */ VSLOADUSEROPTS grfLoadOpts,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteRemotableUserOptions( 
            /* [in] */ __RPC__in_opt IStream *pOptionsStream,
            /* [in] */ __RPC__in LPCOLESTR pszKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadRemotableUserOptions( 
            /* [in] */ __RPC__in_opt IStream *pOptionsStream,
            /* [in] */ __RPC__in LPCOLESTR pszKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPersistRemotableSolutionOptsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveRemotableUserOptionsAsync )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This,
            /* [in] */ __RPC__in_opt IVsRemotableSolutionPersistence *pPersistence,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *LoadRemotableUserOptionsAsync )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This,
            /* [in] */ BOOL fPreLoad,
            /* [in] */ __RPC__in_opt IVsRemotableSolutionPersistence *pPersistence,
            /* [in] */ VSLOADUSEROPTS grfLoadOpts,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *WriteRemotableUserOptions )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This,
            /* [in] */ __RPC__in_opt IStream *pOptionsStream,
            /* [in] */ __RPC__in LPCOLESTR pszKey);
        
        HRESULT ( STDMETHODCALLTYPE *ReadRemotableUserOptions )( 
            __RPC__in IVsPersistRemotableSolutionOpts * This,
            /* [in] */ __RPC__in_opt IStream *pOptionsStream,
            /* [in] */ __RPC__in LPCOLESTR pszKey);
        
        END_INTERFACE
    } IVsPersistRemotableSolutionOptsVtbl;

    interface IVsPersistRemotableSolutionOpts
    {
        CONST_VTBL struct IVsPersistRemotableSolutionOptsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPersistRemotableSolutionOpts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPersistRemotableSolutionOpts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPersistRemotableSolutionOpts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPersistRemotableSolutionOpts_SaveRemotableUserOptionsAsync(This,pPersistence,ppTask)	\
    ( (This)->lpVtbl -> SaveRemotableUserOptionsAsync(This,pPersistence,ppTask) ) 

#define IVsPersistRemotableSolutionOpts_LoadRemotableUserOptionsAsync(This,fPreLoad,pPersistence,grfLoadOpts,ppTask)	\
    ( (This)->lpVtbl -> LoadRemotableUserOptionsAsync(This,fPreLoad,pPersistence,grfLoadOpts,ppTask) ) 

#define IVsPersistRemotableSolutionOpts_WriteRemotableUserOptions(This,pOptionsStream,pszKey)	\
    ( (This)->lpVtbl -> WriteRemotableUserOptions(This,pOptionsStream,pszKey) ) 

#define IVsPersistRemotableSolutionOpts_ReadRemotableUserOptions(This,pOptionsStream,pszKey)	\
    ( (This)->lpVtbl -> ReadRemotableUserOptions(This,pOptionsStream,pszKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPersistRemotableSolutionOpts_INTERFACE_DEFINED__ */


#ifndef __IVsRemotableSolutionPersistence_INTERFACE_DEFINED__
#define __IVsRemotableSolutionPersistence_INTERFACE_DEFINED__

/* interface IVsRemotableSolutionPersistence */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsRemotableSolutionPersistence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e0a86c94-963c-49fa-b7e3-6a8f88651bef")
    IVsRemotableSolutionPersistence : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveRemotableUserOptsAsync( 
            /* [in] */ __RPC__in_opt IVsPersistRemotableSolutionOpts *pPSO,
            /* [in] */ __RPC__in LPCOLESTR pszKey,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadRemotableUserOptsAsync( 
            /* [in] */ __RPC__in_opt IVsPersistRemotableSolutionOpts *pPSO,
            /* [in] */ __RPC__in LPCOLESTR pszKey,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRemotableSolutionPersistenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRemotableSolutionPersistence * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRemotableSolutionPersistence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRemotableSolutionPersistence * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveRemotableUserOptsAsync )( 
            __RPC__in IVsRemotableSolutionPersistence * This,
            /* [in] */ __RPC__in_opt IVsPersistRemotableSolutionOpts *pPSO,
            /* [in] */ __RPC__in LPCOLESTR pszKey,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *LoadRemotableUserOptsAsync )( 
            __RPC__in IVsRemotableSolutionPersistence * This,
            /* [in] */ __RPC__in_opt IVsPersistRemotableSolutionOpts *pPSO,
            /* [in] */ __RPC__in LPCOLESTR pszKey,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsRemotableSolutionPersistenceVtbl;

    interface IVsRemotableSolutionPersistence
    {
        CONST_VTBL struct IVsRemotableSolutionPersistenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRemotableSolutionPersistence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRemotableSolutionPersistence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRemotableSolutionPersistence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRemotableSolutionPersistence_SaveRemotableUserOptsAsync(This,pPSO,pszKey,ppTask)	\
    ( (This)->lpVtbl -> SaveRemotableUserOptsAsync(This,pPSO,pszKey,ppTask) ) 

#define IVsRemotableSolutionPersistence_LoadRemotableUserOptsAsync(This,pPSO,pszKey,ppTask)	\
    ( (This)->lpVtbl -> LoadRemotableUserOptsAsync(This,pPSO,pszKey,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRemotableSolutionPersistence_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell169_0000_0003 */
/* [local] */ 


enum __VSADDVPFLAGS4
    {
        ADDVP_NotSelectProject	= 0x200
    } ;
typedef DWORD VSADDVPFLAGS4;



extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell169_0000_0003_v0_0_s_ifspec;

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


