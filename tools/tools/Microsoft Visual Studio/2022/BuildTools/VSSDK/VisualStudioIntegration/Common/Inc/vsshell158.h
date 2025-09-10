

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

#ifndef __vsshell158_h__
#define __vsshell158_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsHierarchy2_FWD_DEFINED__
#define __IVsHierarchy2_FWD_DEFINED__
typedef interface IVsHierarchy2 IVsHierarchy2;

#endif 	/* __IVsHierarchy2_FWD_DEFINED__ */


#ifndef __IVsDebugger10_FWD_DEFINED__
#define __IVsDebugger10_FWD_DEFINED__
typedef interface IVsDebugger10 IVsDebugger10;

#endif 	/* __IVsDebugger10_FWD_DEFINED__ */


#ifndef __IVsBatchProjectActionContext_FWD_DEFINED__
#define __IVsBatchProjectActionContext_FWD_DEFINED__
typedef interface IVsBatchProjectActionContext IVsBatchProjectActionContext;

#endif 	/* __IVsBatchProjectActionContext_FWD_DEFINED__ */


#ifndef __IVsSolution8_FWD_DEFINED__
#define __IVsSolution8_FWD_DEFINED__
typedef interface IVsSolution8 IVsSolution8;

#endif 	/* __IVsSolution8_FWD_DEFINED__ */


#ifndef __IVsSolutionBatchProjectActionEvents_FWD_DEFINED__
#define __IVsSolutionBatchProjectActionEvents_FWD_DEFINED__
typedef interface IVsSolutionBatchProjectActionEvents IVsSolutionBatchProjectActionEvents;

#endif 	/* __IVsSolutionBatchProjectActionEvents_FWD_DEFINED__ */


#ifndef __IVsSolutionEvents8_FWD_DEFINED__
#define __IVsSolutionEvents8_FWD_DEFINED__
typedef interface IVsSolutionEvents8 IVsSolutionEvents8;

#endif 	/* __IVsSolutionEvents8_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vsshell.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell158_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0000_v0_0_s_ifspec;

#ifndef __IVsHierarchy2_INTERFACE_DEFINED__
#define __IVsHierarchy2_INTERFACE_DEFINED__

/* interface IVsHierarchy2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsHierarchy2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41E82A90-2488-4595-9661-396A1C54B72E")
    IVsHierarchy2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetGuidProperties( 
            /* [in] */ VSITEMID itemid,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VSHPROPID propids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) GUID rgGuids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) int results[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [in] */ VSITEMID itemid,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VSHPROPID propids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) VARIANT vars[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) int results[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsHierarchy2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsHierarchy2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsHierarchy2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsHierarchy2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuidProperties )( 
            __RPC__in IVsHierarchy2 * This,
            /* [in] */ VSITEMID itemid,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VSHPROPID propids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) GUID rgGuids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) int results[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IVsHierarchy2 * This,
            /* [in] */ VSITEMID itemid,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) VSHPROPID propids[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) VARIANT vars[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(count) int results[  ]);
        
        END_INTERFACE
    } IVsHierarchy2Vtbl;

    interface IVsHierarchy2
    {
        CONST_VTBL struct IVsHierarchy2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsHierarchy2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsHierarchy2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsHierarchy2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsHierarchy2_GetGuidProperties(This,itemid,count,propids,rgGuids,results)	\
    ( (This)->lpVtbl -> GetGuidProperties(This,itemid,count,propids,rgGuids,results) ) 

#define IVsHierarchy2_GetProperties(This,itemid,count,propids,vars,results)	\
    ( (This)->lpVtbl -> GetProperties(This,itemid,count,propids,vars,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsHierarchy2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell158_0000_0001 */
/* [local] */ 


enum __VSSPROPID9
    {
        VSSPROPID_GlobalRestoreDocsOnSlnLoadOption	= -9084,
        VSSPROPID_FIRST9	= -9084
    } ;

enum _VsDocumentRestoreBehavior
    {
        SkipDocumentRestore	= 0,
        RestoreDocuments	= 1
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0001_v0_0_s_ifspec;

#ifndef __IVsDebugger10_INTERFACE_DEFINED__
#define __IVsDebugger10_INTERFACE_DEFINED__

/* interface IVsDebugger10 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsDebugger10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91D280B4-49E5-4345-8906-FA888F08E828")
    IVsDebugger10 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsIntegratedConsoleEnabled( 
            /* [out] */ __RPC__out VARIANT_BOOL *pEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebugger10Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebugger10 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebugger10 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebugger10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsIntegratedConsoleEnabled )( 
            __RPC__in IVsDebugger10 * This,
            /* [out] */ __RPC__out VARIANT_BOOL *pEnabled);
        
        END_INTERFACE
    } IVsDebugger10Vtbl;

    interface IVsDebugger10
    {
        CONST_VTBL struct IVsDebugger10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebugger10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebugger10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebugger10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebugger10_IsIntegratedConsoleEnabled(This,pEnabled)	\
    ( (This)->lpVtbl -> IsIntegratedConsoleEnabled(This,pEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebugger10_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell158_0000_0002 */
/* [local] */ 


enum __VSDBGLAUNCHFLAGS158
    {
        DBGLAUNCH_ForcePseudoRemoteDebug	= 0x4000000,
        DBGLAUNCH_IntegratedConsole	= 0x8000000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS158;


enum __VSBatchProjectAction
    {
        BPA_NONE	= 0,
        BPA_UNLOAD	= 1,
        BPA_LOAD	= 2,
        BPA_RELOAD	= 3,
        BPA_RELOADSOLUTION	= 4
    } ;
typedef DWORD VSBatchProjectAction;


enum __VSBatchProjectActionResult
    {
        BPAR_UNCHANGED	= 0,
        BPAR_UNLOADED	= 1,
        BPAR_RELOADED	= 3,
        BPAR_SELFRELOADED	= 4,
        BPAR_ERROR	= 5
    } ;
typedef DWORD VSBatchProjectActionResult;


enum __VSBatchProjectActionFlags
    {
        BPAF_CLOSE_FILES	= 0x1,
        BPAF_PROMPT_SAVE	= 0x2,
        BPAF_ALLOW_RELOAD_SOLUTION	= 0x4,
        BPAF_IGNORE_SELFRELOAD_PROJECTS	= 0x8
    } ;
typedef DWORD VSBatchProjectActionFlags;



extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0002_v0_0_s_ifspec;

#ifndef __IVsBatchProjectActionContext_INTERFACE_DEFINED__
#define __IVsBatchProjectActionContext_INTERFACE_DEFINED__

/* interface IVsBatchProjectActionContext */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsBatchProjectActionContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49ED97F3-EAE0-47AC-9A2E-DC15D0459F7B")
    IVsBatchProjectActionContext : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAction( 
            /* [retval][out] */ __RPC__out VSBatchProjectAction *pAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjectsCount( 
            /* [retval][out] */ __RPC__out DWORD *pdwProjects) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjectsInfo( 
            /* [in] */ DWORD dwProjects,
            /* [size_is][out] */ __RPC__out_ecount_full(dwProjects) GUID rgProjectsGuid[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(dwProjects) VSBatchProjectActionResult rgExpectedResult[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentResult( 
            /* [in] */ __RPC__in REFGUID guidProject,
            /* [out] */ __RPC__out VSBatchProjectActionResult *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBatchProjectActionContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBatchProjectActionContext * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBatchProjectActionContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBatchProjectActionContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAction )( 
            __RPC__in IVsBatchProjectActionContext * This,
            /* [retval][out] */ __RPC__out VSBatchProjectAction *pAction);
        
        HRESULT ( STDMETHODCALLTYPE *GetProjectsCount )( 
            __RPC__in IVsBatchProjectActionContext * This,
            /* [retval][out] */ __RPC__out DWORD *pdwProjects);
        
        HRESULT ( STDMETHODCALLTYPE *GetProjectsInfo )( 
            __RPC__in IVsBatchProjectActionContext * This,
            /* [in] */ DWORD dwProjects,
            /* [size_is][out] */ __RPC__out_ecount_full(dwProjects) GUID rgProjectsGuid[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(dwProjects) VSBatchProjectActionResult rgExpectedResult[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentResult )( 
            __RPC__in IVsBatchProjectActionContext * This,
            /* [in] */ __RPC__in REFGUID guidProject,
            /* [out] */ __RPC__out VSBatchProjectActionResult *pResult);
        
        END_INTERFACE
    } IVsBatchProjectActionContextVtbl;

    interface IVsBatchProjectActionContext
    {
        CONST_VTBL struct IVsBatchProjectActionContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBatchProjectActionContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBatchProjectActionContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBatchProjectActionContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBatchProjectActionContext_GetAction(This,pAction)	\
    ( (This)->lpVtbl -> GetAction(This,pAction) ) 

#define IVsBatchProjectActionContext_GetProjectsCount(This,pdwProjects)	\
    ( (This)->lpVtbl -> GetProjectsCount(This,pdwProjects) ) 

#define IVsBatchProjectActionContext_GetProjectsInfo(This,dwProjects,rgProjectsGuid,rgExpectedResult)	\
    ( (This)->lpVtbl -> GetProjectsInfo(This,dwProjects,rgProjectsGuid,rgExpectedResult) ) 

#define IVsBatchProjectActionContext_GetCurrentResult(This,guidProject,pResult)	\
    ( (This)->lpVtbl -> GetCurrentResult(This,guidProject,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBatchProjectActionContext_INTERFACE_DEFINED__ */


#ifndef __IVsSolution8_INTERFACE_DEFINED__
#define __IVsSolution8_INTERFACE_DEFINED__

/* interface IVsSolution8 */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSolution8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51A3A58A-E65E-46F8-A63C-49665A675016")
    IVsSolution8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseSolutionEventsEx( 
            /* [in] */ __RPC__in REFGUID guidCallerId,
            /* [in] */ __RPC__in_opt IUnknown *pSink,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BatchProjectAction( 
            /* [in] */ VSBatchProjectAction action,
            /* [in] */ VSBatchProjectActionFlags dwFlags,
            /* [in] */ DWORD dwNumProjects,
            /* [size_is][in] */ __RPC__in_ecount_full(dwNumProjects) GUID rgProjects[  ],
            /* [out] */ __RPC__deref_out_opt IVsBatchProjectActionContext **pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsBatchProjectActionBlocking( 
            /* [in] */ VSBatchProjectAction action,
            /* [in] */ VSBatchProjectActionFlags dwFlags,
            /* [in] */ DWORD dwNumProjects,
            /* [size_is][in] */ __RPC__in_ecount_full(dwNumProjects) GUID rgProjects[  ],
            /* [out] */ __RPC__out BOOL *pfIsBlocking) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentBatchProjectAction( 
            /* [out] */ __RPC__deref_out_opt IVsBatchProjectActionContext **pContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSolution8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSolution8 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSolution8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSolution8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseSolutionEventsEx )( 
            __RPC__in IVsSolution8 * This,
            /* [in] */ __RPC__in REFGUID guidCallerId,
            /* [in] */ __RPC__in_opt IUnknown *pSink,
            /* [out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *BatchProjectAction )( 
            __RPC__in IVsSolution8 * This,
            /* [in] */ VSBatchProjectAction action,
            /* [in] */ VSBatchProjectActionFlags dwFlags,
            /* [in] */ DWORD dwNumProjects,
            /* [size_is][in] */ __RPC__in_ecount_full(dwNumProjects) GUID rgProjects[  ],
            /* [out] */ __RPC__deref_out_opt IVsBatchProjectActionContext **pContext);
        
        HRESULT ( STDMETHODCALLTYPE *IsBatchProjectActionBlocking )( 
            __RPC__in IVsSolution8 * This,
            /* [in] */ VSBatchProjectAction action,
            /* [in] */ VSBatchProjectActionFlags dwFlags,
            /* [in] */ DWORD dwNumProjects,
            /* [size_is][in] */ __RPC__in_ecount_full(dwNumProjects) GUID rgProjects[  ],
            /* [out] */ __RPC__out BOOL *pfIsBlocking);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentBatchProjectAction )( 
            __RPC__in IVsSolution8 * This,
            /* [out] */ __RPC__deref_out_opt IVsBatchProjectActionContext **pContext);
        
        END_INTERFACE
    } IVsSolution8Vtbl;

    interface IVsSolution8
    {
        CONST_VTBL struct IVsSolution8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSolution8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSolution8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSolution8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSolution8_AdviseSolutionEventsEx(This,guidCallerId,pSink,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseSolutionEventsEx(This,guidCallerId,pSink,pdwCookie) ) 

#define IVsSolution8_BatchProjectAction(This,action,dwFlags,dwNumProjects,rgProjects,pContext)	\
    ( (This)->lpVtbl -> BatchProjectAction(This,action,dwFlags,dwNumProjects,rgProjects,pContext) ) 

#define IVsSolution8_IsBatchProjectActionBlocking(This,action,dwFlags,dwNumProjects,rgProjects,pfIsBlocking)	\
    ( (This)->lpVtbl -> IsBatchProjectActionBlocking(This,action,dwFlags,dwNumProjects,rgProjects,pfIsBlocking) ) 

#define IVsSolution8_GetCurrentBatchProjectAction(This,pContext)	\
    ( (This)->lpVtbl -> GetCurrentBatchProjectAction(This,pContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSolution8_INTERFACE_DEFINED__ */


#ifndef __IVsSolutionBatchProjectActionEvents_INTERFACE_DEFINED__
#define __IVsSolutionBatchProjectActionEvents_INTERFACE_DEFINED__

/* interface IVsSolutionBatchProjectActionEvents */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSolutionBatchProjectActionEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4E928F3-1143-4C65-8F10-142400138F6D")
    IVsSolutionBatchProjectActionEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeforeBatchProjectReload( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeBatchProjectUnload( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEndBatchProjectUnload( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeBatchProjectLoad( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEndBatchProjectLoad( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEndBatchProjectReload( 
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSolutionBatchProjectActionEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeBatchProjectReload )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeBatchProjectUnload )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *OnEndBatchProjectUnload )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeBatchProjectLoad )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *OnEndBatchProjectLoad )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *OnEndBatchProjectReload )( 
            __RPC__in IVsSolutionBatchProjectActionEvents * This,
            /* [in] */ __RPC__in_opt IVsBatchProjectActionContext *pContext);
        
        END_INTERFACE
    } IVsSolutionBatchProjectActionEventsVtbl;

    interface IVsSolutionBatchProjectActionEvents
    {
        CONST_VTBL struct IVsSolutionBatchProjectActionEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSolutionBatchProjectActionEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSolutionBatchProjectActionEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSolutionBatchProjectActionEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSolutionBatchProjectActionEvents_OnBeforeBatchProjectReload(This,pContext)	\
    ( (This)->lpVtbl -> OnBeforeBatchProjectReload(This,pContext) ) 

#define IVsSolutionBatchProjectActionEvents_OnBeforeBatchProjectUnload(This,pContext)	\
    ( (This)->lpVtbl -> OnBeforeBatchProjectUnload(This,pContext) ) 

#define IVsSolutionBatchProjectActionEvents_OnEndBatchProjectUnload(This,pContext)	\
    ( (This)->lpVtbl -> OnEndBatchProjectUnload(This,pContext) ) 

#define IVsSolutionBatchProjectActionEvents_OnBeforeBatchProjectLoad(This,pContext)	\
    ( (This)->lpVtbl -> OnBeforeBatchProjectLoad(This,pContext) ) 

#define IVsSolutionBatchProjectActionEvents_OnEndBatchProjectLoad(This,pContext)	\
    ( (This)->lpVtbl -> OnEndBatchProjectLoad(This,pContext) ) 

#define IVsSolutionBatchProjectActionEvents_OnEndBatchProjectReload(This,pContext)	\
    ( (This)->lpVtbl -> OnEndBatchProjectReload(This,pContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSolutionBatchProjectActionEvents_INTERFACE_DEFINED__ */


#ifndef __IVsSolutionEvents8_INTERFACE_DEFINED__
#define __IVsSolutionEvents8_INTERFACE_DEFINED__

/* interface IVsSolutionEvents8 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSolutionEvents8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36b55a6c-8da0-428f-828c-80de9105f9c1")
    IVsSolutionEvents8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnAfterRenameSolution( 
            /* [in] */ __RPC__in LPCOLESTR oldName,
            /* [in] */ __RPC__in LPCOLESTR newName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSolutionEvents8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSolutionEvents8 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSolutionEvents8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSolutionEvents8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterRenameSolution )( 
            __RPC__in IVsSolutionEvents8 * This,
            /* [in] */ __RPC__in LPCOLESTR oldName,
            /* [in] */ __RPC__in LPCOLESTR newName);
        
        END_INTERFACE
    } IVsSolutionEvents8Vtbl;

    interface IVsSolutionEvents8
    {
        CONST_VTBL struct IVsSolutionEvents8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSolutionEvents8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSolutionEvents8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSolutionEvents8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSolutionEvents8_OnAfterRenameSolution(This,oldName,newName)	\
    ( (This)->lpVtbl -> OnAfterRenameSolution(This,oldName,newName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSolutionEvents8_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell158_0000_0006 */
/* [local] */ 

extern const __declspec(selectany) GUID UICONTEXT_BulkFileOperation = { 0x1f45beb3, 0x297f, 0x49d9,{ 0x9c, 0x18, 0x6, 0x96, 0x95, 0xb9, 0x3, 0x1f } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell158_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


