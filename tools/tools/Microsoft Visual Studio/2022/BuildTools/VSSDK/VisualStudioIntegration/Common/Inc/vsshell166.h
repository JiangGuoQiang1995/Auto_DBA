

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

#ifndef __vsshell166_h__
#define __vsshell166_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsDebuggerLaunchCompletionCallback_FWD_DEFINED__
#define __IVsDebuggerLaunchCompletionCallback_FWD_DEFINED__
typedef interface IVsDebuggerLaunchCompletionCallback IVsDebuggerLaunchCompletionCallback;

#endif 	/* __IVsDebuggerLaunchCompletionCallback_FWD_DEFINED__ */


#ifndef __IVsDebuggerLaunchAsync_FWD_DEFINED__
#define __IVsDebuggerLaunchAsync_FWD_DEFINED__
typedef interface IVsDebuggerLaunchAsync IVsDebuggerLaunchAsync;

#endif 	/* __IVsDebuggerLaunchAsync_FWD_DEFINED__ */


#ifndef __IVsAddProjectItemDlg3_FWD_DEFINED__
#define __IVsAddProjectItemDlg3_FWD_DEFINED__
typedef interface IVsAddProjectItemDlg3 IVsAddProjectItemDlg3;

#endif 	/* __IVsAddProjectItemDlg3_FWD_DEFINED__ */


#ifndef __IVsBuildItemStorageCallback_FWD_DEFINED__
#define __IVsBuildItemStorageCallback_FWD_DEFINED__
typedef interface IVsBuildItemStorageCallback IVsBuildItemStorageCallback;

#endif 	/* __IVsBuildItemStorageCallback_FWD_DEFINED__ */


#ifndef __IVsBuildItemStorage_FWD_DEFINED__
#define __IVsBuildItemStorage_FWD_DEFINED__
typedef interface IVsBuildItemStorage IVsBuildItemStorage;

#endif 	/* __IVsBuildItemStorage_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell166_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSFPROPID10
    {
        VSFPROPID_OverriddenGroupName	= -5051
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell166_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell166_0000_0000_v0_0_s_ifspec;

#ifndef __IVsDebuggerLaunchCompletionCallback_INTERFACE_DEFINED__
#define __IVsDebuggerLaunchCompletionCallback_INTERFACE_DEFINED__

/* interface IVsDebuggerLaunchCompletionCallback */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerLaunchCompletionCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5FD08946-C8AE-444C-9DB1-2807629AD9F5")
    IVsDebuggerLaunchCompletionCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG debugTargetCount,
            /* [size_is][in] */ __RPC__in_ecount_full(debugTargetCount) VsDebugTargetProcessInfo *processInfoArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerLaunchCompletionCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerLaunchCompletionCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerLaunchCompletionCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerLaunchCompletionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            __RPC__in IVsDebuggerLaunchCompletionCallback * This,
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG debugTargetCount,
            /* [size_is][in] */ __RPC__in_ecount_full(debugTargetCount) VsDebugTargetProcessInfo *processInfoArray);
        
        END_INTERFACE
    } IVsDebuggerLaunchCompletionCallbackVtbl;

    interface IVsDebuggerLaunchCompletionCallback
    {
        CONST_VTBL struct IVsDebuggerLaunchCompletionCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerLaunchCompletionCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerLaunchCompletionCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerLaunchCompletionCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerLaunchCompletionCallback_OnComplete(This,hr,debugTargetCount,processInfoArray)	\
    ( (This)->lpVtbl -> OnComplete(This,hr,debugTargetCount,processInfoArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerLaunchCompletionCallback_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerLaunchAsync_INTERFACE_DEFINED__
#define __IVsDebuggerLaunchAsync_INTERFACE_DEFINED__

/* interface IVsDebuggerLaunchAsync */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerLaunchAsync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62166866-2F12-4324-A9A6-48B2081053D1")
    IVsDebuggerLaunchAsync : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchDebugTargetsAsync( 
            /* [in] */ ULONG debugTargetCount,
            /* [size_is][in] */ __RPC__in_ecount_full(debugTargetCount) VsDebugTargetInfo4 *debugTargetArray,
            /* [unique][in] */ __RPC__in_opt IVsDebuggerLaunchCompletionCallback *completionCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerLaunchAsyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebuggerLaunchAsync * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebuggerLaunchAsync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebuggerLaunchAsync * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchDebugTargetsAsync )( 
            __RPC__in IVsDebuggerLaunchAsync * This,
            /* [in] */ ULONG debugTargetCount,
            /* [size_is][in] */ __RPC__in_ecount_full(debugTargetCount) VsDebugTargetInfo4 *debugTargetArray,
            /* [unique][in] */ __RPC__in_opt IVsDebuggerLaunchCompletionCallback *completionCallback);
        
        END_INTERFACE
    } IVsDebuggerLaunchAsyncVtbl;

    interface IVsDebuggerLaunchAsync
    {
        CONST_VTBL struct IVsDebuggerLaunchAsyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerLaunchAsync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerLaunchAsync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerLaunchAsync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerLaunchAsync_LaunchDebugTargetsAsync(This,debugTargetCount,debugTargetArray,completionCallback)	\
    ( (This)->lpVtbl -> LaunchDebugTargetsAsync(This,debugTargetCount,debugTargetArray,completionCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerLaunchAsync_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell166_0000_0002 */
/* [local] */ 

#define SID_SVsDebuggerLaunchAsync __uuidof(IVsDebuggerLaunchAsync)


extern RPC_IF_HANDLE __MIDL_itf_vsshell166_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell166_0000_0002_v0_0_s_ifspec;

#ifndef __IVsAddProjectItemDlg3_INTERFACE_DEFINED__
#define __IVsAddProjectItemDlg3_INTERFACE_DEFINED__

/* interface IVsAddProjectItemDlg3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAddProjectItemDlg3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("525ff8a4-fb75-4924-a0fa-f50c44087857")
    IVsAddProjectItemDlg3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProjectItemDlgRemotable( 
            /* [in] */ VSITEMID itemidLoc,
            /* [in] */ __RPC__in REFGUID rguidProjectId,
            /* [in] */ VSADDITEMFLAGS grfAddFlags,
            /* [in] */ __RPC__in LPCOLESTR lpszDlgTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszTreeViewTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszHelpTopic,
            /* [in] */ __RPC__in LPCOLESTR lpszExpand,
            /* [in] */ __RPC__in LPCOLESTR lpszSelect,
            /* [out][in] */ __RPC__deref_inout_opt BSTR *pbstrLocation,
            /* [out][in] */ __RPC__deref_inout_opt BSTR *pbstrFilter,
            /* [out] */ __RPC__out BOOL *pfDontShowAgain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddNewWebProjectItemDlgRemotable( 
            /* [in] */ VSITEMID itemidLoc,
            /* [in] */ __RPC__in REFGUID rguidProjectId,
            /* [in] */ __RPC__in LPCOLESTR pszDlgTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszHelpTopic,
            /* [in] */ __RPC__in LPCOLESTR lpszLanguage,
            /* [in] */ __RPC__in LPCOLESTR lpszSelect,
            /* [in] */ VSADDNEWWEBITEMOPTIONS options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAddProjectItemDlg3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAddProjectItemDlg3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAddProjectItemDlg3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAddProjectItemDlg3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddProjectItemDlgRemotable )( 
            __RPC__in IVsAddProjectItemDlg3 * This,
            /* [in] */ VSITEMID itemidLoc,
            /* [in] */ __RPC__in REFGUID rguidProjectId,
            /* [in] */ VSADDITEMFLAGS grfAddFlags,
            /* [in] */ __RPC__in LPCOLESTR lpszDlgTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszTreeViewTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszHelpTopic,
            /* [in] */ __RPC__in LPCOLESTR lpszExpand,
            /* [in] */ __RPC__in LPCOLESTR lpszSelect,
            /* [out][in] */ __RPC__deref_inout_opt BSTR *pbstrLocation,
            /* [out][in] */ __RPC__deref_inout_opt BSTR *pbstrFilter,
            /* [out] */ __RPC__out BOOL *pfDontShowAgain);
        
        HRESULT ( STDMETHODCALLTYPE *AddNewWebProjectItemDlgRemotable )( 
            __RPC__in IVsAddProjectItemDlg3 * This,
            /* [in] */ VSITEMID itemidLoc,
            /* [in] */ __RPC__in REFGUID rguidProjectId,
            /* [in] */ __RPC__in LPCOLESTR pszDlgTitle,
            /* [in] */ __RPC__in LPCOLESTR lpszHelpTopic,
            /* [in] */ __RPC__in LPCOLESTR lpszLanguage,
            /* [in] */ __RPC__in LPCOLESTR lpszSelect,
            /* [in] */ VSADDNEWWEBITEMOPTIONS options);
        
        END_INTERFACE
    } IVsAddProjectItemDlg3Vtbl;

    interface IVsAddProjectItemDlg3
    {
        CONST_VTBL struct IVsAddProjectItemDlg3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAddProjectItemDlg3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAddProjectItemDlg3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAddProjectItemDlg3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAddProjectItemDlg3_AddProjectItemDlgRemotable(This,itemidLoc,rguidProjectId,grfAddFlags,lpszDlgTitle,lpszTreeViewTitle,lpszHelpTopic,lpszExpand,lpszSelect,pbstrLocation,pbstrFilter,pfDontShowAgain)	\
    ( (This)->lpVtbl -> AddProjectItemDlgRemotable(This,itemidLoc,rguidProjectId,grfAddFlags,lpszDlgTitle,lpszTreeViewTitle,lpszHelpTopic,lpszExpand,lpszSelect,pbstrLocation,pbstrFilter,pfDontShowAgain) ) 

#define IVsAddProjectItemDlg3_AddNewWebProjectItemDlgRemotable(This,itemidLoc,rguidProjectId,pszDlgTitle,lpszHelpTopic,lpszLanguage,lpszSelect,options)	\
    ( (This)->lpVtbl -> AddNewWebProjectItemDlgRemotable(This,itemidLoc,rguidProjectId,pszDlgTitle,lpszHelpTopic,lpszLanguage,lpszSelect,options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAddProjectItemDlg3_INTERFACE_DEFINED__ */


#ifndef __IVsBuildItemStorageCallback_INTERFACE_DEFINED__
#define __IVsBuildItemStorageCallback_INTERFACE_DEFINED__

/* interface IVsBuildItemStorageCallback */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsBuildItemStorageCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3be310dd-16da-461d-986c-bd0f84150e47")
    IVsBuildItemStorageCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ItemFound( 
            /* [in] */ __RPC__in BSTR itemSpec,
            /* [in] */ __RPC__in SAFEARRAY * metadata) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBuildItemStorageCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBuildItemStorageCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBuildItemStorageCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBuildItemStorageCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ItemFound )( 
            __RPC__in IVsBuildItemStorageCallback * This,
            /* [in] */ __RPC__in BSTR itemSpec,
            /* [in] */ __RPC__in SAFEARRAY * metadata);
        
        END_INTERFACE
    } IVsBuildItemStorageCallbackVtbl;

    interface IVsBuildItemStorageCallback
    {
        CONST_VTBL struct IVsBuildItemStorageCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBuildItemStorageCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBuildItemStorageCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBuildItemStorageCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBuildItemStorageCallback_ItemFound(This,itemSpec,metadata)	\
    ( (This)->lpVtbl -> ItemFound(This,itemSpec,metadata) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBuildItemStorageCallback_INTERFACE_DEFINED__ */


#ifndef __IVsBuildItemStorage_INTERFACE_DEFINED__
#define __IVsBuildItemStorage_INTERFACE_DEFINED__

/* interface IVsBuildItemStorage */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsBuildItemStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a11def4b-ab42-407b-985f-c44a77d43387")
    IVsBuildItemStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindItems( 
            /* [in] */ __RPC__in LPCOLESTR itemType,
            /* [in] */ int metadataNameCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metadataNameCount) const LPCOLESTR metadataNames[  ],
            /* [in] */ __RPC__in_opt IVsBuildItemStorageCallback *storageCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBuildItemStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBuildItemStorage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBuildItemStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBuildItemStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindItems )( 
            __RPC__in IVsBuildItemStorage * This,
            /* [in] */ __RPC__in LPCOLESTR itemType,
            /* [in] */ int metadataNameCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metadataNameCount) const LPCOLESTR metadataNames[  ],
            /* [in] */ __RPC__in_opt IVsBuildItemStorageCallback *storageCallback);
        
        END_INTERFACE
    } IVsBuildItemStorageVtbl;

    interface IVsBuildItemStorage
    {
        CONST_VTBL struct IVsBuildItemStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBuildItemStorage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBuildItemStorage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBuildItemStorage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBuildItemStorage_FindItems(This,itemType,metadataNameCount,metadataNames,storageCallback)	\
    ( (This)->lpVtbl -> FindItems(This,itemType,metadataNameCount,metadataNames,storageCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBuildItemStorage_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


