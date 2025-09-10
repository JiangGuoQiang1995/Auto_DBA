

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

#ifndef __VSShell177_h__
#define __VSShell177_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsAsyncShellOpenDocument_FWD_DEFINED__
#define __IVsAsyncShellOpenDocument_FWD_DEFINED__
typedef interface IVsAsyncShellOpenDocument IVsAsyncShellOpenDocument;

#endif 	/* __IVsAsyncShellOpenDocument_FWD_DEFINED__ */


#ifndef __IVsAsyncOpenDocumentResult_FWD_DEFINED__
#define __IVsAsyncOpenDocumentResult_FWD_DEFINED__
typedef interface IVsAsyncOpenDocumentResult IVsAsyncOpenDocumentResult;

#endif 	/* __IVsAsyncOpenDocumentResult_FWD_DEFINED__ */


#ifndef __IVsAsyncDeferredDocView_FWD_DEFINED__
#define __IVsAsyncDeferredDocView_FWD_DEFINED__
typedef interface IVsAsyncDeferredDocView IVsAsyncDeferredDocView;

#endif 	/* __IVsAsyncDeferredDocView_FWD_DEFINED__ */


#ifndef __IVsAsyncDocViewResult_FWD_DEFINED__
#define __IVsAsyncDocViewResult_FWD_DEFINED__
typedef interface IVsAsyncDocViewResult IVsAsyncDocViewResult;

#endif 	/* __IVsAsyncDocViewResult_FWD_DEFINED__ */


#ifndef __IVsSettingsStore3_FWD_DEFINED__
#define __IVsSettingsStore3_FWD_DEFINED__
typedef interface IVsSettingsStore3 IVsSettingsStore3;

#endif 	/* __IVsSettingsStore3_FWD_DEFINED__ */


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


/* interface __MIDL_itf_VSShell177_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_VSShell177_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell177_0000_0000_v0_0_s_ifspec;

#ifndef __IVsAsyncShellOpenDocument_INTERFACE_DEFINED__
#define __IVsAsyncShellOpenDocument_INTERFACE_DEFINED__

/* interface IVsAsyncShellOpenDocument */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncShellOpenDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6a55d18f-6db5-4993-b503-11eb77949cab")
    IVsAsyncShellOpenDocument : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OpenSpecificEditorAsync( 
            /* [in] */ VSOSPEFLAGS grfOpenSpecificEditorFlags,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ __RPC__in LPCWSTR pszOwnerCaption,
            /* [in] */ __RPC__in_opt IVsUIHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IServiceProvider *pServiceProvider,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenStandardEditorAsync( 
            /* [in] */ VSOSPEFLAGS grfOpenStandardEditorFlags,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ __RPC__in LPCWSTR pszOwnerCaption,
            /* [in] */ __RPC__in_opt IVsUIHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IServiceProvider *pServiceProvider,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenDocumentViaProjectAsync( 
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ VARIANT_BOOL fSupportExternalItems,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenDocumentViaProjectWithSpecificAsync( 
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ VSSPECIFICEDITORFLAGS grfSpecificEditorFlags,
            /* [in] */ GUID guidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenCopyOfStandardEditorAsync( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *pOriginalWindowFrame,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProvisionalViewingStatusForFileAsync( 
            /* [in] */ __RPC__in LPCWSTR pszFileName,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProvisionalViewingStatusForEditorAsync( 
            /* [in] */ GUID guidEditorType,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncShellOpenDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncShellOpenDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncShellOpenDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *OpenSpecificEditorAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ VSOSPEFLAGS grfOpenSpecificEditorFlags,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ __RPC__in LPCWSTR pszOwnerCaption,
            /* [in] */ __RPC__in_opt IVsUIHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IServiceProvider *pServiceProvider,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OpenStandardEditorAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ VSOSPEFLAGS grfOpenStandardEditorFlags,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ __RPC__in LPCWSTR pszOwnerCaption,
            /* [in] */ __RPC__in_opt IVsUIHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ VARIANT_BOOL fShouldGetDocDataFromRdt,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IServiceProvider *pServiceProvider,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OpenDocumentViaProjectAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ GUID guidLogicalView,
            /* [in] */ VARIANT_BOOL fSupportExternalItems,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OpenDocumentViaProjectWithSpecificAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ __RPC__in LPCWSTR pszDocumentMoniker,
            /* [in] */ VSSPECIFICEDITORFLAGS grfSpecificEditorFlags,
            /* [in] */ GUID guidEditorType,
            /* [in] */ __RPC__in LPCWSTR pszPhysicalView,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OpenCopyOfStandardEditorAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *pOriginalWindowFrame,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *GetProvisionalViewingStatusForFileAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ __RPC__in LPCWSTR pszFileName,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHierarchy,
            /* [in] */ VSITEMID vsidItemId,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *GetProvisionalViewingStatusForEditorAsync )( 
            __RPC__in IVsAsyncShellOpenDocument * This,
            /* [in] */ GUID guidEditorType,
            /* [in] */ GUID guidLogicalView,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsAsyncShellOpenDocumentVtbl;

    interface IVsAsyncShellOpenDocument
    {
        CONST_VTBL struct IVsAsyncShellOpenDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncShellOpenDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncShellOpenDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncShellOpenDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncShellOpenDocument_OpenSpecificEditorAsync(This,grfOpenSpecificEditorFlags,pszDocumentMoniker,guidEditorType,pszPhysicalView,guidLogicalView,pszOwnerCaption,pHierarchy,vsidItemId,fShouldGetDocDataFromRdt,punkDocData,pServiceProvider,ppTask)	\
    ( (This)->lpVtbl -> OpenSpecificEditorAsync(This,grfOpenSpecificEditorFlags,pszDocumentMoniker,guidEditorType,pszPhysicalView,guidLogicalView,pszOwnerCaption,pHierarchy,vsidItemId,fShouldGetDocDataFromRdt,punkDocData,pServiceProvider,ppTask) ) 

#define IVsAsyncShellOpenDocument_OpenStandardEditorAsync(This,grfOpenStandardEditorFlags,pszDocumentMoniker,guidLogicalView,pszOwnerCaption,pHierarchy,vsidItemId,fShouldGetDocDataFromRdt,punkDocData,pServiceProvider,ppTask)	\
    ( (This)->lpVtbl -> OpenStandardEditorAsync(This,grfOpenStandardEditorFlags,pszDocumentMoniker,guidLogicalView,pszOwnerCaption,pHierarchy,vsidItemId,fShouldGetDocDataFromRdt,punkDocData,pServiceProvider,ppTask) ) 

#define IVsAsyncShellOpenDocument_OpenDocumentViaProjectAsync(This,pszDocumentMoniker,guidLogicalView,fSupportExternalItems,ppTask)	\
    ( (This)->lpVtbl -> OpenDocumentViaProjectAsync(This,pszDocumentMoniker,guidLogicalView,fSupportExternalItems,ppTask) ) 

#define IVsAsyncShellOpenDocument_OpenDocumentViaProjectWithSpecificAsync(This,pszDocumentMoniker,grfSpecificEditorFlags,guidEditorType,pszPhysicalView,guidLogicalView,ppTask)	\
    ( (This)->lpVtbl -> OpenDocumentViaProjectWithSpecificAsync(This,pszDocumentMoniker,grfSpecificEditorFlags,guidEditorType,pszPhysicalView,guidLogicalView,ppTask) ) 

#define IVsAsyncShellOpenDocument_OpenCopyOfStandardEditorAsync(This,pOriginalWindowFrame,guidLogicalView,ppTask)	\
    ( (This)->lpVtbl -> OpenCopyOfStandardEditorAsync(This,pOriginalWindowFrame,guidLogicalView,ppTask) ) 

#define IVsAsyncShellOpenDocument_GetProvisionalViewingStatusForFileAsync(This,pszFileName,pHierarchy,vsidItemId,guidLogicalView,ppTask)	\
    ( (This)->lpVtbl -> GetProvisionalViewingStatusForFileAsync(This,pszFileName,pHierarchy,vsidItemId,guidLogicalView,ppTask) ) 

#define IVsAsyncShellOpenDocument_GetProvisionalViewingStatusForEditorAsync(This,guidEditorType,guidLogicalView,ppTask)	\
    ( (This)->lpVtbl -> GetProvisionalViewingStatusForEditorAsync(This,guidEditorType,guidLogicalView,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncShellOpenDocument_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncOpenDocumentResult_INTERFACE_DEFINED__
#define __IVsAsyncOpenDocumentResult_INTERFACE_DEFINED__

/* interface IVsAsyncOpenDocumentResult */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncOpenDocumentResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba346102-ca20-4f19-9d94-a5dab112a262")
    IVsAsyncOpenDocumentResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Hierarchy( 
            /* [retval][out] */ __RPC__deref_out_opt IVsUIHierarchy **ppHierarchy) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemId( 
            /* [retval][out] */ __RPC__out VSITEMID *pvsidItemId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WindowFrame( 
            /* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame **ppWindowFrame) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentLoadTask( 
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncOpenDocumentResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncOpenDocumentResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncOpenDocumentResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncOpenDocumentResult * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hierarchy )( 
            __RPC__in IVsAsyncOpenDocumentResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIHierarchy **ppHierarchy);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemId )( 
            __RPC__in IVsAsyncOpenDocumentResult * This,
            /* [retval][out] */ __RPC__out VSITEMID *pvsidItemId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowFrame )( 
            __RPC__in IVsAsyncOpenDocumentResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame **ppWindowFrame);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentLoadTask )( 
            __RPC__in IVsAsyncOpenDocumentResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsAsyncOpenDocumentResultVtbl;

    interface IVsAsyncOpenDocumentResult
    {
        CONST_VTBL struct IVsAsyncOpenDocumentResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncOpenDocumentResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncOpenDocumentResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncOpenDocumentResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncOpenDocumentResult_get_Hierarchy(This,ppHierarchy)	\
    ( (This)->lpVtbl -> get_Hierarchy(This,ppHierarchy) ) 

#define IVsAsyncOpenDocumentResult_get_ItemId(This,pvsidItemId)	\
    ( (This)->lpVtbl -> get_ItemId(This,pvsidItemId) ) 

#define IVsAsyncOpenDocumentResult_get_WindowFrame(This,ppWindowFrame)	\
    ( (This)->lpVtbl -> get_WindowFrame(This,ppWindowFrame) ) 

#define IVsAsyncOpenDocumentResult_get_DocumentLoadTask(This,ppTask)	\
    ( (This)->lpVtbl -> get_DocumentLoadTask(This,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncOpenDocumentResult_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncDeferredDocView_INTERFACE_DEFINED__
#define __IVsAsyncDeferredDocView_INTERFACE_DEFINED__

/* interface IVsAsyncDeferredDocView */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncDeferredDocView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f3965302-6220-4119-a294-5f0a87e5a4ce")
    IVsAsyncDeferredDocView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadDocViewAsync( 
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncDeferredDocViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncDeferredDocView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncDeferredDocView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncDeferredDocView * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadDocViewAsync )( 
            __RPC__in IVsAsyncDeferredDocView * This,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsAsyncDeferredDocViewVtbl;

    interface IVsAsyncDeferredDocView
    {
        CONST_VTBL struct IVsAsyncDeferredDocViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncDeferredDocView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncDeferredDocView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncDeferredDocView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncDeferredDocView_LoadDocViewAsync(This,punkDocData,ppTask)	\
    ( (This)->lpVtbl -> LoadDocViewAsync(This,punkDocData,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncDeferredDocView_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncDocViewResult_INTERFACE_DEFINED__
#define __IVsAsyncDocViewResult_INTERFACE_DEFINED__

/* interface IVsAsyncDocViewResult */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncDocViewResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("054d0302-f120-4719-8494-5be1a2e04d6a")
    IVsAsyncDocViewResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LoadedDocView( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkLoadedDocView) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CmdUIGuid( 
            /* [retval][out] */ __RPC__out GUID *pguidCmdUIGuid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncDocViewResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncDocViewResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncDocViewResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncDocViewResult * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedDocView )( 
            __RPC__in IVsAsyncDocViewResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkLoadedDocView);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CmdUIGuid )( 
            __RPC__in IVsAsyncDocViewResult * This,
            /* [retval][out] */ __RPC__out GUID *pguidCmdUIGuid);
        
        END_INTERFACE
    } IVsAsyncDocViewResultVtbl;

    interface IVsAsyncDocViewResult
    {
        CONST_VTBL struct IVsAsyncDocViewResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncDocViewResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncDocViewResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncDocViewResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncDocViewResult_get_LoadedDocView(This,ppunkLoadedDocView)	\
    ( (This)->lpVtbl -> get_LoadedDocView(This,ppunkLoadedDocView) ) 

#define IVsAsyncDocViewResult_get_CmdUIGuid(This,pguidCmdUIGuid)	\
    ( (This)->lpVtbl -> get_CmdUIGuid(This,pguidCmdUIGuid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncDocViewResult_INTERFACE_DEFINED__ */


#ifndef __IVsSettingsStore3_INTERFACE_DEFINED__
#define __IVsSettingsStore3_INTERFACE_DEFINED__

/* interface IVsSettingsStore3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSettingsStore3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9572a8d5-0416-4886-b437-ef952590ec3c")
    IVsSettingsStore3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStrings( 
            /* [in] */ __RPC__in LPCWSTR collectionPath,
            /* [in] */ __RPC__in LPCWSTR propertyName,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSettingsStore3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSettingsStore3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSettingsStore3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSettingsStore3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStrings )( 
            __RPC__in IVsSettingsStore3 * This,
            /* [in] */ __RPC__in LPCWSTR collectionPath,
            /* [in] */ __RPC__in LPCWSTR propertyName,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *res);
        
        END_INTERFACE
    } IVsSettingsStore3Vtbl;

    interface IVsSettingsStore3
    {
        CONST_VTBL struct IVsSettingsStore3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSettingsStore3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSettingsStore3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSettingsStore3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSettingsStore3_GetStrings(This,collectionPath,propertyName,res)	\
    ( (This)->lpVtbl -> GetStrings(This,collectionPath,propertyName,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSettingsStore3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell177_0000_0005 */
/* [local] */ 

/* [v1_enum] */ 
enum __VsSettingsType2
    {
        VsSettingsType2_SettingsType_MultiString	= 0x5
    } ;
#define SBAI3_MIN        8
#define SBAI3_HotReload  8
#define SBAI3_MAX        8


extern RPC_IF_HANDLE __MIDL_itf_VSShell177_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell177_0000_0005_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


