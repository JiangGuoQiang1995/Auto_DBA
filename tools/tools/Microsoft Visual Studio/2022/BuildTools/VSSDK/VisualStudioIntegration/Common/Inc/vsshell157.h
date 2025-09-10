

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

#ifndef __vsshell157_h__
#define __vsshell157_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsBulkFileOperation_FWD_DEFINED__
#define __IVsBulkFileOperation_FWD_DEFINED__
typedef interface IVsBulkFileOperation IVsBulkFileOperation;

#endif 	/* __IVsBulkFileOperation_FWD_DEFINED__ */


#ifndef __IVsFileChangeEx3_FWD_DEFINED__
#define __IVsFileChangeEx3_FWD_DEFINED__
typedef interface IVsFileChangeEx3 IVsFileChangeEx3;

#endif 	/* __IVsFileChangeEx3_FWD_DEFINED__ */


#ifndef __IVsFreeThreadedFileChangeEvents2_FWD_DEFINED__
#define __IVsFreeThreadedFileChangeEvents2_FWD_DEFINED__
typedef interface IVsFreeThreadedFileChangeEvents2 IVsFreeThreadedFileChangeEvents2;

#endif 	/* __IVsFreeThreadedFileChangeEvents2_FWD_DEFINED__ */


#ifndef __IVsDebugger9_FWD_DEFINED__
#define __IVsDebugger9_FWD_DEFINED__
typedef interface IVsDebugger9 IVsDebugger9;

#endif 	/* __IVsDebugger9_FWD_DEFINED__ */


#ifndef __IVsPrefetchLoadProgress2_FWD_DEFINED__
#define __IVsPrefetchLoadProgress2_FWD_DEFINED__
typedef interface IVsPrefetchLoadProgress2 IVsPrefetchLoadProgress2;

#endif 	/* __IVsPrefetchLoadProgress2_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vsshell.h"
#include "vsshell150.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell157_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell157_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell157_0000_0000_v0_0_s_ifspec;

#ifndef __IVsBulkFileOperation_INTERFACE_DEFINED__
#define __IVsBulkFileOperation_INTERFACE_DEFINED__

/* interface IVsBulkFileOperation */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsBulkFileOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D124B9B-8989-4F82-8E9D-AE0B002E0615")
    IVsBulkFileOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartOperation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOperation( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBulkFileOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBulkFileOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBulkFileOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBulkFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartOperation )( 
            __RPC__in IVsBulkFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndOperation )( 
            __RPC__in IVsBulkFileOperation * This);
        
        END_INTERFACE
    } IVsBulkFileOperationVtbl;

    interface IVsBulkFileOperation
    {
        CONST_VTBL struct IVsBulkFileOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBulkFileOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBulkFileOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBulkFileOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBulkFileOperation_StartOperation(This)	\
    ( (This)->lpVtbl -> StartOperation(This) ) 

#define IVsBulkFileOperation_EndOperation(This)	\
    ( (This)->lpVtbl -> EndOperation(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBulkFileOperation_INTERFACE_DEFINED__ */


#ifndef __IVsFileChangeEx3_INTERFACE_DEFINED__
#define __IVsFileChangeEx3_INTERFACE_DEFINED__

/* interface IVsFileChangeEx3 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsFileChangeEx3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a4afcb52-b595-43f9-87dd-6eb348181e14")
    IVsFileChangeEx3 : public IVsFileChangeEx2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Pause( 
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **task) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( 
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **task) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsFileChangeEx3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsFileChangeEx3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsFileChangeEx3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsFileChangeEx3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IgnoreDir )( 
            __RPC__in IVsFileChangeEx3 * This,
            /* [in] */ __RPC__in LPCOLESTR directory,
            /* [in] */ VARIANT_BOOL ignore);
        
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            __RPC__in IVsFileChangeEx3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **task);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            __RPC__in IVsFileChangeEx3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **task);
        
        END_INTERFACE
    } IVsFileChangeEx3Vtbl;

    interface IVsFileChangeEx3
    {
        CONST_VTBL struct IVsFileChangeEx3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsFileChangeEx3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsFileChangeEx3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsFileChangeEx3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsFileChangeEx3_IgnoreDir(This,directory,ignore)	\
    ( (This)->lpVtbl -> IgnoreDir(This,directory,ignore) ) 


#define IVsFileChangeEx3_Pause(This,task)	\
    ( (This)->lpVtbl -> Pause(This,task) ) 

#define IVsFileChangeEx3_Resume(This,task)	\
    ( (This)->lpVtbl -> Resume(This,task) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsFileChangeEx3_INTERFACE_DEFINED__ */


#ifndef __IVsFreeThreadedFileChangeEvents2_INTERFACE_DEFINED__
#define __IVsFreeThreadedFileChangeEvents2_INTERFACE_DEFINED__

/* interface IVsFreeThreadedFileChangeEvents2 */
/* [object][custom][uuid] */ 


EXTERN_C const IID IID_IVsFreeThreadedFileChangeEvents2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2019c53d-105b-4116-8a1a-4703796e5052")
    IVsFreeThreadedFileChangeEvents2 : public IVsFreeThreadedFileChangeEvents
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DirectoryChangedEx2( 
            /* [in] */ __RPC__in LPCOLESTR pszDirectory,
            /* [in] */ DWORD cChanges,
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) LPCOLESTR rgpszFile[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) VSFILECHANGEFLAGS rggrfChange[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsFreeThreadedFileChangeEvents2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *FilesChanged )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This,
            /* [in] */ DWORD cChanges,
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) LPCOLESTR rgpszFile[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) VSFILECHANGEFLAGS rggrfChange[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *DirectoryChanged )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This,
            /* [in] */ __RPC__in LPCOLESTR pszDirectory);
        
        HRESULT ( STDMETHODCALLTYPE *DirectoryChangedEx )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This,
            /* [in] */ __RPC__in LPCOLESTR pszDirectory,
            /* [in] */ __RPC__in LPCOLESTR pszFile);
        
        HRESULT ( STDMETHODCALLTYPE *DirectoryChangedEx2 )( 
            __RPC__in IVsFreeThreadedFileChangeEvents2 * This,
            /* [in] */ __RPC__in LPCOLESTR pszDirectory,
            /* [in] */ DWORD cChanges,
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) LPCOLESTR rgpszFile[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(cChanges) VSFILECHANGEFLAGS rggrfChange[  ]);
        
        END_INTERFACE
    } IVsFreeThreadedFileChangeEvents2Vtbl;

    interface IVsFreeThreadedFileChangeEvents2
    {
        CONST_VTBL struct IVsFreeThreadedFileChangeEvents2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsFreeThreadedFileChangeEvents2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsFreeThreadedFileChangeEvents2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsFreeThreadedFileChangeEvents2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsFreeThreadedFileChangeEvents2_FilesChanged(This,cChanges,rgpszFile,rggrfChange)	\
    ( (This)->lpVtbl -> FilesChanged(This,cChanges,rgpszFile,rggrfChange) ) 

#define IVsFreeThreadedFileChangeEvents2_DirectoryChanged(This,pszDirectory)	\
    ( (This)->lpVtbl -> DirectoryChanged(This,pszDirectory) ) 


#define IVsFreeThreadedFileChangeEvents2_DirectoryChangedEx(This,pszDirectory,pszFile)	\
    ( (This)->lpVtbl -> DirectoryChangedEx(This,pszDirectory,pszFile) ) 


#define IVsFreeThreadedFileChangeEvents2_DirectoryChangedEx2(This,pszDirectory,cChanges,rgpszFile,rggrfChange)	\
    ( (This)->lpVtbl -> DirectoryChangedEx2(This,pszDirectory,cChanges,rgpszFile,rggrfChange) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsFreeThreadedFileChangeEvents2_INTERFACE_DEFINED__ */


#ifndef __IVsDebugger9_INTERFACE_DEFINED__
#define __IVsDebugger9_INTERFACE_DEFINED__

/* interface IVsDebugger9 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsDebugger9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bfdff000-3761-49b2-ba9b-4c1db1d82789")
    IVsDebugger9 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEnableJavaScriptDebuggerOnBrowserLaunch( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyBeforeLaunchWithoutJavaScriptDebugger( 
            /* [out] */ __RPC__out BOOL *pfEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebugger9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebugger9 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebugger9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebugger9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnableJavaScriptDebuggerOnBrowserLaunch )( 
            __RPC__in IVsDebugger9 * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyBeforeLaunchWithoutJavaScriptDebugger )( 
            __RPC__in IVsDebugger9 * This,
            /* [out] */ __RPC__out BOOL *pfEnabled);
        
        END_INTERFACE
    } IVsDebugger9Vtbl;

    interface IVsDebugger9
    {
        CONST_VTBL struct IVsDebugger9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebugger9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebugger9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebugger9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebugger9_SetEnableJavaScriptDebuggerOnBrowserLaunch(This,fEnable)	\
    ( (This)->lpVtbl -> SetEnableJavaScriptDebuggerOnBrowserLaunch(This,fEnable) ) 

#define IVsDebugger9_NotifyBeforeLaunchWithoutJavaScriptDebugger(This,pfEnabled)	\
    ( (This)->lpVtbl -> NotifyBeforeLaunchWithoutJavaScriptDebugger(This,pfEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebugger9_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell157_0000_0004 */
/* [local] */ 


enum __VSPREFETCHFACTORYCAPABILITIES
    {
        PFC_NONE	= 0,
        PFC_SYNC	= 0x1,
        PFC_SELECTOR	= 0x2,
        PFC_SAFE_CHECK	= 0x4
    } ;
typedef DWORD VSPREFETCHFACTORYCAPABILITIES;


enum __VSPROJECTLOADFLAGS
    {
        PLF_NONE	= 0,
        PFL_CONFIRMED_SAFE	= 0x1
    } ;
typedef DWORD VSPROJECTLOADFLAGS;


enum __VSBATCHLOADRESULT
    {
        BLR_SUCCESS	= 0,
        BLR_PREFETCH_ERROR	= 0x1,
        BLR_LOAD_ERROR	= 0x2,
        BLR_NEED_UPGRADE	= 0x3,
        BLR_UNSAFE_PROJECT	= 0x4,
        BLR_NEW_FACTORY	= 0x5
    } ;
typedef DWORD VSBATCHLOADRESULT;

typedef struct _VsPrefetchedProjectInfo
    {
    GUID guidProjectId;
    VSBATCHLOADRESULT resultFlags;
    IUnknown *pProject;
    HRESULT hr;
    GUID guidNewFactory;
    VSPUVF_REPAIRFLAGS repairFlags;
    VSPUVF_FLAGS upgradeCapabilityFlags;
    } 	VsPrefetchedProjectInfo;



extern RPC_IF_HANDLE __MIDL_itf_vsshell157_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell157_0000_0004_v0_0_s_ifspec;

#ifndef __IVsPrefetchLoadProgress2_INTERFACE_DEFINED__
#define __IVsPrefetchLoadProgress2_INTERFACE_DEFINED__

/* interface IVsPrefetchLoadProgress2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsPrefetchLoadProgress2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C917ECD8-ED08-49BE-97F2-6C994BF32072")
    IVsPrefetchLoadProgress2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PrefetchResult( 
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VsPrefetchedProjectInfo rgProjects[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPrefetchLoadProgress2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPrefetchLoadProgress2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPrefetchLoadProgress2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPrefetchLoadProgress2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrefetchResult )( 
            __RPC__in IVsPrefetchLoadProgress2 * This,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VsPrefetchedProjectInfo rgProjects[  ]);
        
        END_INTERFACE
    } IVsPrefetchLoadProgress2Vtbl;

    interface IVsPrefetchLoadProgress2
    {
        CONST_VTBL struct IVsPrefetchLoadProgress2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPrefetchLoadProgress2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPrefetchLoadProgress2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPrefetchLoadProgress2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPrefetchLoadProgress2_PrefetchResult(This,count,rgProjects)	\
    ( (This)->lpVtbl -> PrefetchResult(This,count,rgProjects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPrefetchLoadProgress2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


