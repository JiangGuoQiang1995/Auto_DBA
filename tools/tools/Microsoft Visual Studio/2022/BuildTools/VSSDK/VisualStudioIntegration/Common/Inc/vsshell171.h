

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

#ifndef __vsshell171_h__
#define __vsshell171_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsProgress_FWD_DEFINED__
#define __IVsProgress_FWD_DEFINED__
typedef interface IVsProgress IVsProgress;

#endif 	/* __IVsProgress_FWD_DEFINED__ */


#ifndef __IVsAsyncSaveResult_FWD_DEFINED__
#define __IVsAsyncSaveResult_FWD_DEFINED__
typedef interface IVsAsyncSaveResult IVsAsyncSaveResult;

#endif 	/* __IVsAsyncSaveResult_FWD_DEFINED__ */


#ifndef __IVsProvideAsyncSaveState_FWD_DEFINED__
#define __IVsProvideAsyncSaveState_FWD_DEFINED__
typedef interface IVsProvideAsyncSaveState IVsProvideAsyncSaveState;

#endif 	/* __IVsProvideAsyncSaveState_FWD_DEFINED__ */


#ifndef __IVsAsyncRunningDocumentTable_FWD_DEFINED__
#define __IVsAsyncRunningDocumentTable_FWD_DEFINED__
typedef interface IVsAsyncRunningDocumentTable IVsAsyncRunningDocumentTable;

#endif 	/* __IVsAsyncRunningDocumentTable_FWD_DEFINED__ */


#ifndef __IVsAsyncShell_FWD_DEFINED__
#define __IVsAsyncShell_FWD_DEFINED__
typedef interface IVsAsyncShell IVsAsyncShell;

#endif 	/* __IVsAsyncShell_FWD_DEFINED__ */


#ifndef __IVsAsyncSolution_FWD_DEFINED__
#define __IVsAsyncSolution_FWD_DEFINED__
typedef interface IVsAsyncSolution IVsAsyncSolution;

#endif 	/* __IVsAsyncSolution_FWD_DEFINED__ */


#ifndef __IVsAsyncPersistHierarchyItem_FWD_DEFINED__
#define __IVsAsyncPersistHierarchyItem_FWD_DEFINED__
typedef interface IVsAsyncPersistHierarchyItem IVsAsyncPersistHierarchyItem;

#endif 	/* __IVsAsyncPersistHierarchyItem_FWD_DEFINED__ */


#ifndef __IVsAsyncPersistDocData_FWD_DEFINED__
#define __IVsAsyncPersistDocData_FWD_DEFINED__
typedef interface IVsAsyncPersistDocData IVsAsyncPersistDocData;

#endif 	/* __IVsAsyncPersistDocData_FWD_DEFINED__ */


#ifndef __IAsyncPersistFile_FWD_DEFINED__
#define __IAsyncPersistFile_FWD_DEFINED__
typedef interface IAsyncPersistFile IAsyncPersistFile;

#endif 	/* __IAsyncPersistFile_FWD_DEFINED__ */


#ifndef __IAsyncPersistFileFormat_FWD_DEFINED__
#define __IAsyncPersistFileFormat_FWD_DEFINED__
typedef interface IAsyncPersistFileFormat IAsyncPersistFileFormat;

#endif 	/* __IAsyncPersistFileFormat_FWD_DEFINED__ */


#ifndef __IVsRunningDocumentTable6_FWD_DEFINED__
#define __IVsRunningDocumentTable6_FWD_DEFINED__
typedef interface IVsRunningDocumentTable6 IVsRunningDocumentTable6;

#endif 	/* __IVsRunningDocumentTable6_FWD_DEFINED__ */


#ifndef __IVsRunningDocTableEvents7_FWD_DEFINED__
#define __IVsRunningDocTableEvents7_FWD_DEFINED__
typedef interface IVsRunningDocTableEvents7 IVsRunningDocTableEvents7;

#endif 	/* __IVsRunningDocTableEvents7_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell171_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;



extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0000_v0_0_s_ifspec;

#ifndef __IVsProgress_INTERFACE_DEFINED__
#define __IVsProgress_INTERFACE_DEFINED__

/* interface IVsProgress */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0a4f31cf-c488-4ef0-a667-4630991f9ad6")
    IVsProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Report( 
            /* [in] */ double value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *Report )( 
            __RPC__in IVsProgress * This,
            /* [in] */ double value);
        
        END_INTERFACE
    } IVsProgressVtbl;

    interface IVsProgress
    {
        CONST_VTBL struct IVsProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsProgress_Report(This,value)	\
    ( (This)->lpVtbl -> Report(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsProgress_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncSaveResult_INTERFACE_DEFINED__
#define __IVsAsyncSaveResult_INTERFACE_DEFINED__

/* interface IVsAsyncSaveResult */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncSaveResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72903eda-bbb2-453d-88df-239a8c018122")
    IVsAsyncSaveResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataLossIncurred( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SaveCanceled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrFileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncSaveResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncSaveResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncSaveResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncSaveResult * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataLossIncurred )( 
            __RPC__in IVsAsyncSaveResult * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveCanceled )( 
            __RPC__in IVsAsyncSaveResult * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            __RPC__in IVsAsyncSaveResult * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrFileName);
        
        END_INTERFACE
    } IVsAsyncSaveResultVtbl;

    interface IVsAsyncSaveResult
    {
        CONST_VTBL struct IVsAsyncSaveResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncSaveResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncSaveResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncSaveResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncSaveResult_get_DataLossIncurred(This,pValue)	\
    ( (This)->lpVtbl -> get_DataLossIncurred(This,pValue) ) 

#define IVsAsyncSaveResult_get_SaveCanceled(This,pValue)	\
    ( (This)->lpVtbl -> get_SaveCanceled(This,pValue) ) 

#define IVsAsyncSaveResult_get_FileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncSaveResult_INTERFACE_DEFINED__ */


#ifndef __IVsProvideAsyncSaveState_INTERFACE_DEFINED__
#define __IVsProvideAsyncSaveState_INTERFACE_DEFINED__

/* interface IVsProvideAsyncSaveState */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsProvideAsyncSaveState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba50abcc-be56-46a2-9c5b-2424c06a70cb")
    IVsProvideAsyncSaveState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAsyncSaveState( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsProvideAsyncSaveStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsProvideAsyncSaveState * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsProvideAsyncSaveState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsProvideAsyncSaveState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncSaveState )( 
            __RPC__in IVsProvideAsyncSaveState * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState);
        
        END_INTERFACE
    } IVsProvideAsyncSaveStateVtbl;

    interface IVsProvideAsyncSaveState
    {
        CONST_VTBL struct IVsProvideAsyncSaveStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsProvideAsyncSaveState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsProvideAsyncSaveState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsProvideAsyncSaveState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsProvideAsyncSaveState_GetAsyncSaveState(This,ppunkState)	\
    ( (This)->lpVtbl -> GetAsyncSaveState(This,ppunkState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsProvideAsyncSaveState_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncRunningDocumentTable_INTERFACE_DEFINED__
#define __IVsAsyncRunningDocumentTable_INTERFACE_DEFINED__

/* interface IVsAsyncRunningDocumentTable */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncRunningDocumentTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b960175b-ab78-494f-9034-47a650c27acc")
    IVsAsyncRunningDocumentTable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveDocumentsAsync( 
            /* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAsyncSaveState( 
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncRunningDocumentTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncRunningDocumentTable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncRunningDocumentTable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncRunningDocumentTable * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveDocumentsAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable * This,
            /* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSITEMID itemid,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncSaveState )( 
            __RPC__in IVsAsyncRunningDocumentTable * This,
            /* [in] */ __RPC__in_opt IVsProvideAsyncSaveState *pProvider,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppunkState);
        
        END_INTERFACE
    } IVsAsyncRunningDocumentTableVtbl;

    interface IVsAsyncRunningDocumentTable
    {
        CONST_VTBL struct IVsAsyncRunningDocumentTableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncRunningDocumentTable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncRunningDocumentTable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncRunningDocumentTable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncRunningDocumentTable_SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveDocumentsAsync(This,grfSaveOpts,pHier,itemid,docCookie,pProgress,saveTask) ) 

#define IVsAsyncRunningDocumentTable_GetAsyncSaveState(This,pProvider,ppunkState)	\
    ( (This)->lpVtbl -> GetAsyncSaveState(This,pProvider,ppunkState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncRunningDocumentTable_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncShell_INTERFACE_DEFINED__
#define __IVsAsyncShell_INTERFACE_DEFINED__

/* interface IVsAsyncShell */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncShell;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6fbd992c-3f7c-49ed-a057-588c3415d7d5")
    IVsAsyncShell : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveDocDataToFileAsync( 
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in_opt IUnknown *pPersistFile,
            /* [in] */ __RPC__in LPCOLESTR pszUntitledPath,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncShellVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncShell * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncShell * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncShell * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveDocDataToFileAsync )( 
            __RPC__in IVsAsyncShell * This,
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in_opt IUnknown *pPersistFile,
            /* [in] */ __RPC__in LPCOLESTR pszUntitledPath,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        END_INTERFACE
    } IVsAsyncShellVtbl;

    interface IVsAsyncShell
    {
        CONST_VTBL struct IVsAsyncShellVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncShell_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncShell_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncShell_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncShell_SaveDocDataToFileAsync(This,grfSave,pPersistFile,pszUntitledPath,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveDocDataToFileAsync(This,grfSave,pPersistFile,pszUntitledPath,pProgress,saveTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncShell_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncSolution_INTERFACE_DEFINED__
#define __IVsAsyncSolution_INTERFACE_DEFINED__

/* interface IVsAsyncSolution */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncSolution;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cdb2cb6b-e8d9-46d8-9a43-57fb82143278")
    IVsAsyncSolution : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveSolutionElementAsync( 
            /* [in] */ VSSLNSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncSolutionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncSolution * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncSolution * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncSolution * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveSolutionElementAsync )( 
            __RPC__in IVsAsyncSolution * This,
            /* [in] */ VSSLNSAVEOPTIONS grfSaveOpts,
            /* [in] */ __RPC__in_opt IVsHierarchy *pHier,
            /* [in] */ VSCOOKIE docCookie,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        END_INTERFACE
    } IVsAsyncSolutionVtbl;

    interface IVsAsyncSolution
    {
        CONST_VTBL struct IVsAsyncSolutionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncSolution_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncSolution_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncSolution_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncSolution_SaveSolutionElementAsync(This,grfSaveOpts,pHier,docCookie,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveSolutionElementAsync(This,grfSaveOpts,pHier,docCookie,pProgress,saveTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncSolution_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncPersistHierarchyItem_INTERFACE_DEFINED__
#define __IVsAsyncPersistHierarchyItem_INTERFACE_DEFINED__

/* interface IVsAsyncPersistHierarchyItem */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncPersistHierarchyItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9aa40a83-9ace-4bdf-9f31-956295d9b87d")
    IVsAsyncPersistHierarchyItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveItemAsync( 
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in LPCOLESTR pszSilentSaveAsName,
            /* [in] */ VSITEMID itemid,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReloadItemAsync( 
            /* [in] */ VSITEMID itemid,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **reloadTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncPersistHierarchyItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncPersistHierarchyItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncPersistHierarchyItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncPersistHierarchyItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveItemAsync )( 
            __RPC__in IVsAsyncPersistHierarchyItem * This,
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in LPCOLESTR pszSilentSaveAsName,
            /* [in] */ VSITEMID itemid,
            /* [in] */ __RPC__in_opt IUnknown *punkDocData,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        HRESULT ( STDMETHODCALLTYPE *ReloadItemAsync )( 
            __RPC__in IVsAsyncPersistHierarchyItem * This,
            /* [in] */ VSITEMID itemid,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **reloadTask);
        
        END_INTERFACE
    } IVsAsyncPersistHierarchyItemVtbl;

    interface IVsAsyncPersistHierarchyItem
    {
        CONST_VTBL struct IVsAsyncPersistHierarchyItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncPersistHierarchyItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncPersistHierarchyItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncPersistHierarchyItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncPersistHierarchyItem_SaveItemAsync(This,grfSave,pszSilentSaveAsName,itemid,punkDocData,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveItemAsync(This,grfSave,pszSilentSaveAsName,itemid,punkDocData,pProgress,saveTask) ) 

#define IVsAsyncPersistHierarchyItem_ReloadItemAsync(This,itemid,pProgress,reloadTask)	\
    ( (This)->lpVtbl -> ReloadItemAsync(This,itemid,pProgress,reloadTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncPersistHierarchyItem_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncPersistDocData_INTERFACE_DEFINED__
#define __IVsAsyncPersistDocData_INTERFACE_DEFINED__

/* interface IVsAsyncPersistDocData */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncPersistDocData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("de485455-84fe-4e41-a911-8bbdc87ac27f")
    IVsAsyncPersistDocData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadDocDataAsync( 
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveDocDataAsync( 
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReloadDocDataAsync( 
            /* [in] */ VSRELOADDOCDATA grfFlags,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **reloadTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncPersistDocDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncPersistDocData * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncPersistDocData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncPersistDocData * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadDocDataAsync )( 
            __RPC__in IVsAsyncPersistDocData * This,
            /* [in] */ __RPC__in LPCOLESTR pszMkDocument,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask);
        
        HRESULT ( STDMETHODCALLTYPE *SaveDocDataAsync )( 
            __RPC__in IVsAsyncPersistDocData * This,
            /* [in] */ VSSAVEFLAGS grfSave,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        HRESULT ( STDMETHODCALLTYPE *ReloadDocDataAsync )( 
            __RPC__in IVsAsyncPersistDocData * This,
            /* [in] */ VSRELOADDOCDATA grfFlags,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **reloadTask);
        
        END_INTERFACE
    } IVsAsyncPersistDocDataVtbl;

    interface IVsAsyncPersistDocData
    {
        CONST_VTBL struct IVsAsyncPersistDocDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncPersistDocData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncPersistDocData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncPersistDocData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncPersistDocData_LoadDocDataAsync(This,pszMkDocument,pProgress,loadTask)	\
    ( (This)->lpVtbl -> LoadDocDataAsync(This,pszMkDocument,pProgress,loadTask) ) 

#define IVsAsyncPersistDocData_SaveDocDataAsync(This,grfSave,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveDocDataAsync(This,grfSave,pProgress,saveTask) ) 

#define IVsAsyncPersistDocData_ReloadDocDataAsync(This,grfFlags,pProgress,reloadTask)	\
    ( (This)->lpVtbl -> ReloadDocDataAsync(This,grfFlags,pProgress,reloadTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncPersistDocData_INTERFACE_DEFINED__ */


#ifndef __IAsyncPersistFile_INTERFACE_DEFINED__
#define __IAsyncPersistFile_INTERFACE_DEFINED__

/* interface IAsyncPersistFile */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAsyncPersistFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec2f3090-8dc6-4d56-9a8e-84d5af63dc70")
    IAsyncPersistFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadAsync( 
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ DWORD grfMode,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAsync( 
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ VARIANT_BOOL fRemember,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncPersistFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncPersistFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncPersistFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncPersistFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadAsync )( 
            __RPC__in IAsyncPersistFile * This,
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ DWORD grfMode,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAsync )( 
            __RPC__in IAsyncPersistFile * This,
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ VARIANT_BOOL fRemember,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        END_INTERFACE
    } IAsyncPersistFileVtbl;

    interface IAsyncPersistFile
    {
        CONST_VTBL struct IAsyncPersistFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncPersistFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncPersistFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncPersistFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncPersistFile_LoadAsync(This,pszFilename,grfMode,pProgress,loadTask)	\
    ( (This)->lpVtbl -> LoadAsync(This,pszFilename,grfMode,pProgress,loadTask) ) 

#define IAsyncPersistFile_SaveAsync(This,pszFilename,fRemember,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveAsync(This,pszFilename,fRemember,pProgress,saveTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncPersistFile_INTERFACE_DEFINED__ */


#ifndef __IAsyncPersistFileFormat_INTERFACE_DEFINED__
#define __IAsyncPersistFileFormat_INTERFACE_DEFINED__

/* interface IAsyncPersistFileFormat */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAsyncPersistFileFormat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d3f639c2-9633-4af7-82fb-3ae5cffa8a52")
    IAsyncPersistFileFormat : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadAsync( 
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ DWORD grfMode,
            /* [in] */ VARIANT_BOOL fReadOnly,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAsync( 
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ VARIANT_BOOL fRemember,
            /* [in] */ DWORD nFormatIndex,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncPersistFileFormatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncPersistFileFormat * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncPersistFileFormat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncPersistFileFormat * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadAsync )( 
            __RPC__in IAsyncPersistFileFormat * This,
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ DWORD grfMode,
            /* [in] */ VARIANT_BOOL fReadOnly,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **loadTask);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAsync )( 
            __RPC__in IAsyncPersistFileFormat * This,
            /* [in] */ __RPC__in LPCOLESTR pszFilename,
            /* [in] */ VARIANT_BOOL fRemember,
            /* [in] */ DWORD nFormatIndex,
            /* [in] */ __RPC__in_opt IVsProgress *pProgress,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **saveTask);
        
        END_INTERFACE
    } IAsyncPersistFileFormatVtbl;

    interface IAsyncPersistFileFormat
    {
        CONST_VTBL struct IAsyncPersistFileFormatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncPersistFileFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncPersistFileFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncPersistFileFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncPersistFileFormat_LoadAsync(This,pszFilename,grfMode,fReadOnly,pProgress,loadTask)	\
    ( (This)->lpVtbl -> LoadAsync(This,pszFilename,grfMode,fReadOnly,pProgress,loadTask) ) 

#define IAsyncPersistFileFormat_SaveAsync(This,pszFilename,fRemember,nFormatIndex,pProgress,saveTask)	\
    ( (This)->lpVtbl -> SaveAsync(This,pszFilename,fRemember,nFormatIndex,pProgress,saveTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncPersistFileFormat_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell171_0000_0010 */
/* [local] */ 


enum _VSRDTSAVENOTIFICATIONFLAGS
    {
        RDTSNF_ImplicitSave	= 0x1
    } ;
typedef DWORD VSRDTSAVENOTIFICATIONFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0010_v0_0_s_ifspec;

#ifndef __IVsRunningDocumentTable6_INTERFACE_DEFINED__
#define __IVsRunningDocumentTable6_INTERFACE_DEFINED__

/* interface IVsRunningDocumentTable6 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsRunningDocumentTable6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("567793e7-3a62-4704-9481-0ccd1c4ec495")
    IVsRunningDocumentTable6 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NotifyOnBeforeSave( 
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS grfNotificationFlags,
            /* [in] */ __RPC__in_opt IVsTask *pSaveTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyOnAfterSave( 
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS grfNotificationFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRunningDocumentTable6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRunningDocumentTable6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRunningDocumentTable6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRunningDocumentTable6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOnBeforeSave )( 
            __RPC__in IVsRunningDocumentTable6 * This,
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS grfNotificationFlags,
            /* [in] */ __RPC__in_opt IVsTask *pSaveTask);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOnAfterSave )( 
            __RPC__in IVsRunningDocumentTable6 * This,
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS grfNotificationFlags);
        
        END_INTERFACE
    } IVsRunningDocumentTable6Vtbl;

    interface IVsRunningDocumentTable6
    {
        CONST_VTBL struct IVsRunningDocumentTable6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRunningDocumentTable6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRunningDocumentTable6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRunningDocumentTable6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRunningDocumentTable6_NotifyOnBeforeSave(This,cookie,grfNotificationFlags,pSaveTask)	\
    ( (This)->lpVtbl -> NotifyOnBeforeSave(This,cookie,grfNotificationFlags,pSaveTask) ) 

#define IVsRunningDocumentTable6_NotifyOnAfterSave(This,cookie,grfNotificationFlags)	\
    ( (This)->lpVtbl -> NotifyOnAfterSave(This,cookie,grfNotificationFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRunningDocumentTable6_INTERFACE_DEFINED__ */


#ifndef __IVsRunningDocTableEvents7_INTERFACE_DEFINED__
#define __IVsRunningDocTableEvents7_INTERFACE_DEFINED__

/* interface IVsRunningDocTableEvents7 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsRunningDocTableEvents7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe0d2208-235d-447e-8d7f-b1d3ec00e090")
    IVsRunningDocTableEvents7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeforeSaveAsync( 
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS flags,
            /* [in] */ __RPC__in_opt IVsTask *pSaveTask,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAfterSaveAsync( 
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS flags,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRunningDocTableEvents7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRunningDocTableEvents7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRunningDocTableEvents7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRunningDocTableEvents7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeSaveAsync )( 
            __RPC__in IVsRunningDocTableEvents7 * This,
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS flags,
            /* [in] */ __RPC__in_opt IVsTask *pSaveTask,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterSaveAsync )( 
            __RPC__in IVsRunningDocTableEvents7 * This,
            /* [in] */ VSCOOKIE cookie,
            /* [in] */ VSRDTSAVENOTIFICATIONFLAGS flags,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsRunningDocTableEvents7Vtbl;

    interface IVsRunningDocTableEvents7
    {
        CONST_VTBL struct IVsRunningDocTableEvents7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRunningDocTableEvents7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRunningDocTableEvents7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRunningDocTableEvents7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRunningDocTableEvents7_OnBeforeSaveAsync(This,cookie,flags,pSaveTask,ppTask)	\
    ( (This)->lpVtbl -> OnBeforeSaveAsync(This,cookie,flags,pSaveTask,ppTask) ) 

#define IVsRunningDocTableEvents7_OnAfterSaveAsync(This,cookie,flags,ppTask)	\
    ( (This)->lpVtbl -> OnAfterSaveAsync(This,cookie,flags,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRunningDocTableEvents7_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell171_0000_0012 */
/* [local] */ 

#define SBAI2_MIN     7
#define SBAI2_Test    7
#define SBAI2_MAX     7


extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell171_0000_0012_v0_0_s_ifspec;

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


