

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

#ifndef __vsshell156_h__
#define __vsshell156_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsSetupCompositionService3_FWD_DEFINED__
#define __IVsSetupCompositionService3_FWD_DEFINED__
typedef interface IVsSetupCompositionService3 IVsSetupCompositionService3;

#endif 	/* __IVsSetupCompositionService3_FWD_DEFINED__ */


#ifndef __IVsAsyncToolWindowFactory_FWD_DEFINED__
#define __IVsAsyncToolWindowFactory_FWD_DEFINED__
typedef interface IVsAsyncToolWindowFactory IVsAsyncToolWindowFactory;

#endif 	/* __IVsAsyncToolWindowFactory_FWD_DEFINED__ */


#ifndef __IVsAsyncToolWindowFactoryProvider_FWD_DEFINED__
#define __IVsAsyncToolWindowFactoryProvider_FWD_DEFINED__
typedef interface IVsAsyncToolWindowFactoryProvider IVsAsyncToolWindowFactoryProvider;

#endif 	/* __IVsAsyncToolWindowFactoryProvider_FWD_DEFINED__ */


#ifndef __IVsPrefetchLoadProgress_FWD_DEFINED__
#define __IVsPrefetchLoadProgress_FWD_DEFINED__
typedef interface IVsPrefetchLoadProgress IVsPrefetchLoadProgress;

#endif 	/* __IVsPrefetchLoadProgress_FWD_DEFINED__ */


#ifndef __IVsPrefetchProjectFactory_FWD_DEFINED__
#define __IVsPrefetchProjectFactory_FWD_DEFINED__
typedef interface IVsPrefetchProjectFactory IVsPrefetchProjectFactory;

#endif 	/* __IVsPrefetchProjectFactory_FWD_DEFINED__ */


#ifndef __IVsRegisterPrefetchProjectFactory_FWD_DEFINED__
#define __IVsRegisterPrefetchProjectFactory_FWD_DEFINED__
typedef interface IVsRegisterPrefetchProjectFactory IVsRegisterPrefetchProjectFactory;

#endif 	/* __IVsRegisterPrefetchProjectFactory_FWD_DEFINED__ */


#ifndef __IVsWorkingFoldersEvents_FWD_DEFINED__
#define __IVsWorkingFoldersEvents_FWD_DEFINED__
typedef interface IVsWorkingFoldersEvents IVsWorkingFoldersEvents;

#endif 	/* __IVsWorkingFoldersEvents_FWD_DEFINED__ */


#ifndef __IVsWorkingFolders_FWD_DEFINED__
#define __IVsWorkingFolders_FWD_DEFINED__
typedef interface IVsWorkingFolders IVsWorkingFolders;

#endif 	/* __IVsWorkingFolders_FWD_DEFINED__ */


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
#include "vsshell153.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell156_0000_0000 */
/* [local] */ 


enum _VSRDTFLAGS5
    {
        RDT_DontAutoSave	= 0x100000
    } ;
typedef DWORD VSRDTFLAGS5;



extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0000_v0_0_s_ifspec;

#ifndef __IVsSetupCompositionService3_INTERFACE_DEFINED__
#define __IVsSetupCompositionService3_INTERFACE_DEFINED__

/* interface IVsSetupCompositionService3 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsSetupCompositionService3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F902BFA6-B9ED-4D0C-9C8A-FCB1DDD442D2")
    IVsSetupCompositionService3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateVisualStudioInstance( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSetupCompositionService3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSetupCompositionService3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSetupCompositionService3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSetupCompositionService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateVisualStudioInstance )( 
            __RPC__in IVsSetupCompositionService3 * This);
        
        END_INTERFACE
    } IVsSetupCompositionService3Vtbl;

    interface IVsSetupCompositionService3
    {
        CONST_VTBL struct IVsSetupCompositionService3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSetupCompositionService3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSetupCompositionService3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSetupCompositionService3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSetupCompositionService3_UpdateVisualStudioInstance(This)	\
    ( (This)->lpVtbl -> UpdateVisualStudioInstance(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSetupCompositionService3_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncToolWindowFactory_INTERFACE_DEFINED__
#define __IVsAsyncToolWindowFactory_INTERFACE_DEFINED__

/* interface IVsAsyncToolWindowFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncToolWindowFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6d4cefd-0b9e-4971-bc98-ed9fbc797d94")
    IVsAsyncToolWindowFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeToolWindowAsync( 
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateToolWindow( 
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [in] */ VARIANT context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToolWindowTitle( 
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *title) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncToolWindowFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncToolWindowFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncToolWindowFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncToolWindowFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeToolWindowAsync )( 
            __RPC__in IVsAsyncToolWindowFactory * This,
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *CreateToolWindow )( 
            __RPC__in IVsAsyncToolWindowFactory * This,
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [in] */ VARIANT context);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolWindowTitle )( 
            __RPC__in IVsAsyncToolWindowFactory * This,
            /* [in] */ GUID guidPersistenceSlot,
            /* [in] */ DWORD dwToolWindowId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *title);
        
        END_INTERFACE
    } IVsAsyncToolWindowFactoryVtbl;

    interface IVsAsyncToolWindowFactory
    {
        CONST_VTBL struct IVsAsyncToolWindowFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncToolWindowFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncToolWindowFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncToolWindowFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncToolWindowFactory_InitializeToolWindowAsync(This,guidPersistenceSlot,dwToolWindowId,ppTask)	\
    ( (This)->lpVtbl -> InitializeToolWindowAsync(This,guidPersistenceSlot,dwToolWindowId,ppTask) ) 

#define IVsAsyncToolWindowFactory_CreateToolWindow(This,guidPersistenceSlot,dwToolWindowId,context)	\
    ( (This)->lpVtbl -> CreateToolWindow(This,guidPersistenceSlot,dwToolWindowId,context) ) 

#define IVsAsyncToolWindowFactory_GetToolWindowTitle(This,guidPersistenceSlot,dwToolWindowId,title)	\
    ( (This)->lpVtbl -> GetToolWindowTitle(This,guidPersistenceSlot,dwToolWindowId,title) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncToolWindowFactory_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncToolWindowFactoryProvider_INTERFACE_DEFINED__
#define __IVsAsyncToolWindowFactoryProvider_INTERFACE_DEFINED__

/* interface IVsAsyncToolWindowFactoryProvider */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsAsyncToolWindowFactoryProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba087b5e-4614-4928-bcec-85bf35eb031b")
    IVsAsyncToolWindowFactoryProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAsyncToolWindowFactory( 
            /* [in] */ GUID guidPersistenceSlot,
            /* [retval][out] */ __RPC__deref_out_opt IVsAsyncToolWindowFactory **ppFactory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncToolWindowFactoryProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncToolWindowFactoryProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncToolWindowFactoryProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncToolWindowFactoryProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncToolWindowFactory )( 
            __RPC__in IVsAsyncToolWindowFactoryProvider * This,
            /* [in] */ GUID guidPersistenceSlot,
            /* [retval][out] */ __RPC__deref_out_opt IVsAsyncToolWindowFactory **ppFactory);
        
        END_INTERFACE
    } IVsAsyncToolWindowFactoryProviderVtbl;

    interface IVsAsyncToolWindowFactoryProvider
    {
        CONST_VTBL struct IVsAsyncToolWindowFactoryProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncToolWindowFactoryProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncToolWindowFactoryProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncToolWindowFactoryProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncToolWindowFactoryProvider_GetAsyncToolWindowFactory(This,guidPersistenceSlot,ppFactory)	\
    ( (This)->lpVtbl -> GetAsyncToolWindowFactory(This,guidPersistenceSlot,ppFactory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncToolWindowFactoryProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell156_0000_0003 */
/* [local] */ 

typedef struct _VsProjectLoadInfo
    {
    DWORD dwProjectLoadFlags;
    GUID guidProjectFactory;
    GUID guidProjectId;
    BSTR bstrActiveProjectConfiguration;
    BSTR bstrProjectFile;
    } 	VsProjectLoadInfo;



extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0003_v0_0_s_ifspec;

#ifndef __IVsPrefetchLoadProgress_INTERFACE_DEFINED__
#define __IVsPrefetchLoadProgress_INTERFACE_DEFINED__

/* interface IVsPrefetchLoadProgress */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsPrefetchLoadProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2BD6379A-CD38-4FF7-BCC5-C2968B2FE48D")
    IVsPrefetchLoadProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProjectPrefetchCompleted( 
            /* [in] */ __RPC__in REFGUID guidProjectId,
            /* [in] */ VARIANT_BOOL fSuccessful,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPrefetchLoadProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPrefetchLoadProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPrefetchLoadProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPrefetchLoadProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProjectPrefetchCompleted )( 
            __RPC__in IVsPrefetchLoadProgress * This,
            /* [in] */ __RPC__in REFGUID guidProjectId,
            /* [in] */ VARIANT_BOOL fSuccessful,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IVsPrefetchLoadProgressVtbl;

    interface IVsPrefetchLoadProgress
    {
        CONST_VTBL struct IVsPrefetchLoadProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPrefetchLoadProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPrefetchLoadProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPrefetchLoadProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPrefetchLoadProgress_ProjectPrefetchCompleted(This,guidProjectId,fSuccessful,dwFlags)	\
    ( (This)->lpVtbl -> ProjectPrefetchCompleted(This,guidProjectId,fSuccessful,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPrefetchLoadProgress_INTERFACE_DEFINED__ */


#ifndef __IVsPrefetchProjectFactory_INTERFACE_DEFINED__
#define __IVsPrefetchProjectFactory_INTERFACE_DEFINED__

/* interface IVsPrefetchProjectFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsPrefetchProjectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9635D64-F4BA-4162-A9E2-008D5789E61F")
    IVsPrefetchProjectFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PrepareProjects( 
            /* [in] */ __RPC__in LPCOLESTR szActiveSolutionConfiguration,
            /* [in] */ DWORD dwSolutionLoadFlags,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VsProjectLoadInfo rgPprojects[  ],
            /* [in] */ __RPC__in_opt IVsPrefetchLoadProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSolutionLoad( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPrefetchProjectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPrefetchProjectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPrefetchProjectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPrefetchProjectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrepareProjects )( 
            __RPC__in IVsPrefetchProjectFactory * This,
            /* [in] */ __RPC__in LPCOLESTR szActiveSolutionConfiguration,
            /* [in] */ DWORD dwSolutionLoadFlags,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VsProjectLoadInfo rgPprojects[  ],
            /* [in] */ __RPC__in_opt IVsPrefetchLoadProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *EndSolutionLoad )( 
            __RPC__in IVsPrefetchProjectFactory * This);
        
        END_INTERFACE
    } IVsPrefetchProjectFactoryVtbl;

    interface IVsPrefetchProjectFactory
    {
        CONST_VTBL struct IVsPrefetchProjectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPrefetchProjectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPrefetchProjectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPrefetchProjectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPrefetchProjectFactory_PrepareProjects(This,szActiveSolutionConfiguration,dwSolutionLoadFlags,count,rgPprojects,pProgress)	\
    ( (This)->lpVtbl -> PrepareProjects(This,szActiveSolutionConfiguration,dwSolutionLoadFlags,count,rgPprojects,pProgress) ) 

#define IVsPrefetchProjectFactory_EndSolutionLoad(This)	\
    ( (This)->lpVtbl -> EndSolutionLoad(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPrefetchProjectFactory_INTERFACE_DEFINED__ */


#ifndef __IVsRegisterPrefetchProjectFactory_INTERFACE_DEFINED__
#define __IVsRegisterPrefetchProjectFactory_INTERFACE_DEFINED__

/* interface IVsRegisterPrefetchProjectFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsRegisterPrefetchProjectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46F1C80F-EA5D-47A0-806F-4C0A916E1396")
    IVsRegisterPrefetchProjectFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterPrefetchProjectFactory( 
            /* [in] */ __RPC__in REFGUID guidPrefetchFactory,
            /* [in] */ __RPC__in_opt IVsPrefetchProjectFactory *pProjectFactory,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterPrefetchProjectFactory( 
            /* [in] */ VSCOOKIE dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRegisterPrefetchProjectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRegisterPrefetchProjectFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRegisterPrefetchProjectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRegisterPrefetchProjectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterPrefetchProjectFactory )( 
            __RPC__in IVsRegisterPrefetchProjectFactory * This,
            /* [in] */ __RPC__in REFGUID guidPrefetchFactory,
            /* [in] */ __RPC__in_opt IVsPrefetchProjectFactory *pProjectFactory,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterPrefetchProjectFactory )( 
            __RPC__in IVsRegisterPrefetchProjectFactory * This,
            /* [in] */ VSCOOKIE dwCookie);
        
        END_INTERFACE
    } IVsRegisterPrefetchProjectFactoryVtbl;

    interface IVsRegisterPrefetchProjectFactory
    {
        CONST_VTBL struct IVsRegisterPrefetchProjectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRegisterPrefetchProjectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRegisterPrefetchProjectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRegisterPrefetchProjectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRegisterPrefetchProjectFactory_RegisterPrefetchProjectFactory(This,guidPrefetchFactory,pProjectFactory,pdwCookie)	\
    ( (This)->lpVtbl -> RegisterPrefetchProjectFactory(This,guidPrefetchFactory,pProjectFactory,pdwCookie) ) 

#define IVsRegisterPrefetchProjectFactory_UnregisterPrefetchProjectFactory(This,dwCookie)	\
    ( (This)->lpVtbl -> UnregisterPrefetchProjectFactory(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRegisterPrefetchProjectFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell156_0000_0006 */
/* [local] */ 

extern const __declspec(selectany) GUID UICONTEXT_FullSolutionLoading = { 0x164fd4dc, 0xb2a4, 0x448e,{ 0xbb, 0x60, 0x5, 0x83, 0xcd, 0x34, 0x3d, 0x3b } };

enum __WorkingFolderKind
    {
        WFK_SolutionStatePersistence	= 1
    } ;
typedef /* [public] */ DWORD WorkingFolderKind;



extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell156_0000_0006_v0_0_s_ifspec;

#ifndef __IVsWorkingFoldersEvents_INTERFACE_DEFINED__
#define __IVsWorkingFoldersEvents_INTERFACE_DEFINED__

/* interface IVsWorkingFoldersEvents */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_IVsWorkingFoldersEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DBF44E6B-78FF-413D-98B7-5CB601FB672A")
    IVsWorkingFoldersEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnQueryLocationChange( 
            /* [in] */ WorkingFolderKind location,
            /* [out] */ __RPC__out VARIANT_BOOL *pfCanMoveContent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAfterLocationChange( 
            /* [in] */ WorkingFolderKind location,
            /* [in] */ VARIANT_BOOL contentMoved) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWorkingFoldersEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWorkingFoldersEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWorkingFoldersEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWorkingFoldersEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnQueryLocationChange )( 
            __RPC__in IVsWorkingFoldersEvents * This,
            /* [in] */ WorkingFolderKind location,
            /* [out] */ __RPC__out VARIANT_BOOL *pfCanMoveContent);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterLocationChange )( 
            __RPC__in IVsWorkingFoldersEvents * This,
            /* [in] */ WorkingFolderKind location,
            /* [in] */ VARIANT_BOOL contentMoved);
        
        END_INTERFACE
    } IVsWorkingFoldersEventsVtbl;

    interface IVsWorkingFoldersEvents
    {
        CONST_VTBL struct IVsWorkingFoldersEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWorkingFoldersEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWorkingFoldersEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWorkingFoldersEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWorkingFoldersEvents_OnQueryLocationChange(This,location,pfCanMoveContent)	\
    ( (This)->lpVtbl -> OnQueryLocationChange(This,location,pfCanMoveContent) ) 

#define IVsWorkingFoldersEvents_OnAfterLocationChange(This,location,contentMoved)	\
    ( (This)->lpVtbl -> OnAfterLocationChange(This,location,contentMoved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWorkingFoldersEvents_INTERFACE_DEFINED__ */


#ifndef __IVsWorkingFolders_INTERFACE_DEFINED__
#define __IVsWorkingFolders_INTERFACE_DEFINED__

/* interface IVsWorkingFolders */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_IVsWorkingFolders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B362DB16-833E-4F93-B108-71B2177C3930")
    IVsWorkingFolders : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ WorkingFolderKind folderKind,
            /* [in] */ VARIANT_BOOL fVersionSpecific,
            /* [in] */ VARIANT_BOOL fEnsureCreated,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszBstrFullPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMigrationFolder( 
            /* [in] */ WorkingFolderKind location,
            /* [out] */ __RPC__out DWORD *pdwOldMajorVersion,
            /* [out] */ __RPC__deref_out_opt BSTR *pszOldLocation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWorkingFoldersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWorkingFolders * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWorkingFolders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWorkingFolders * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IVsWorkingFolders * This,
            /* [in] */ WorkingFolderKind folderKind,
            /* [in] */ VARIANT_BOOL fVersionSpecific,
            /* [in] */ VARIANT_BOOL fEnsureCreated,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszBstrFullPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetMigrationFolder )( 
            __RPC__in IVsWorkingFolders * This,
            /* [in] */ WorkingFolderKind location,
            /* [out] */ __RPC__out DWORD *pdwOldMajorVersion,
            /* [out] */ __RPC__deref_out_opt BSTR *pszOldLocation);
        
        END_INTERFACE
    } IVsWorkingFoldersVtbl;

    interface IVsWorkingFolders
    {
        CONST_VTBL struct IVsWorkingFoldersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWorkingFolders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWorkingFolders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWorkingFolders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWorkingFolders_GetFolder(This,folderKind,fVersionSpecific,fEnsureCreated,pszBstrFullPath)	\
    ( (This)->lpVtbl -> GetFolder(This,folderKind,fVersionSpecific,fEnsureCreated,pszBstrFullPath) ) 

#define IVsWorkingFolders_GetMigrationFolder(This,location,pdwOldMajorVersion,pszOldLocation)	\
    ( (This)->lpVtbl -> GetMigrationFolder(This,location,pdwOldMajorVersion,pszOldLocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWorkingFolders_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


