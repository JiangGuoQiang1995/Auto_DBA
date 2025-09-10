

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

#ifndef __vsshell163_h__
#define __vsshell163_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsBuildManagerAccessor4_FWD_DEFINED__
#define __IVsBuildManagerAccessor4_FWD_DEFINED__
typedef interface IVsBuildManagerAccessor4 IVsBuildManagerAccessor4;

#endif 	/* __IVsBuildManagerAccessor4_FWD_DEFINED__ */


#ifndef __IVsSettingsStore2_FWD_DEFINED__
#define __IVsSettingsStore2_FWD_DEFINED__
typedef interface IVsSettingsStore2 IVsSettingsStore2;

#endif 	/* __IVsSettingsStore2_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell163_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSHPROPID10
    {
        VSHPROPID_PreserveExpandCollapseState	= -2177,
        VSHPROPID_FIRST10	= -2177
    } ;

enum __VSShellMode
    {
        VSSM_Interactive	= 0x1,
        VSSM_Console	= 0x2,
        VSSM_Server	= 0x3
    } ;
typedef int VSShellMode;


enum __VSSPROPID11
    {
        VSSPROPID_ShellMode	= -9086,
        VSSPROPID_FIRST11	= -9086
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell163_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell163_0000_0000_v0_0_s_ifspec;

#ifndef __IVsBuildManagerAccessor4_INTERFACE_DEFINED__
#define __IVsBuildManagerAccessor4_INTERFACE_DEFINED__

/* interface IVsBuildManagerAccessor4 */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsBuildManagerAccessor4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22580b39-7b9c-4e2d-87fa-9eb8f12aa9af")
    IVsBuildManagerAccessor4 : public IVsBuildManagerAccessor3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterExternalLoggers( 
            /* [in] */ int submissionId,
            /* [in] */ __RPC__in LPCOLESTR projectPath,
            /* [in] */ __RPC__in LPCOLESTR targets,
            /* [in] */ BOOL isDesignTimeBuild) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBuildManagerAccessor4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterLogger )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ LONG submissionId,
            /* [in] */ __RPC__in_opt IUnknown *punkLogger);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterLoggers )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ LONG submissionId);
        
        HRESULT ( STDMETHODCALLTYPE *ClaimUIThreadForBuild )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseUIThreadForBuild )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginDesignTimeBuild )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndDesignTimeBuild )( 
            __RPC__in IVsBuildManagerAccessor4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentBatchBuildId )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [out] */ __RPC__out ULONG *pBatchId);
        
        HRESULT ( STDMETHODCALLTYPE *GetSolutionConfiguration )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ __RPC__in_opt IUnknown *punkRootProject,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrXmlFragment);
        
        HRESULT ( STDMETHODCALLTYPE *Escape )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ __RPC__in LPCOLESTR pwszUnescapedValue,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrEscapedValue);
        
        HRESULT ( STDMETHODCALLTYPE *Unescape )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ __RPC__in LPCOLESTR pwszEscapedValue,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrUnescapedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesignTimeBuildAvailable )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [retval][out] */ __RPC__deref_out_opt HANDLE *phWaitHandle);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIThreadIsAvailableForBuild )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [retval][out] */ __RPC__deref_out_opt HANDLE *phWaitHandle);
        
        HRESULT ( STDMETHODCALLTYPE *AcquireBuildResources )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ VSBUILDMANAGERRESOURCE fResources,
            /* [out] */ __RPC__out VSCOOKIE *phCookie);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuildResources )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ VSCOOKIE hCookie);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SolutionBuildAvailable )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [retval][out] */ __RPC__deref_out_opt HANDLE *phWaitHandle);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterExternalLoggers )( 
            __RPC__in IVsBuildManagerAccessor4 * This,
            /* [in] */ int submissionId,
            /* [in] */ __RPC__in LPCOLESTR projectPath,
            /* [in] */ __RPC__in LPCOLESTR targets,
            /* [in] */ BOOL isDesignTimeBuild);
        
        END_INTERFACE
    } IVsBuildManagerAccessor4Vtbl;

    interface IVsBuildManagerAccessor4
    {
        CONST_VTBL struct IVsBuildManagerAccessor4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBuildManagerAccessor4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBuildManagerAccessor4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBuildManagerAccessor4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBuildManagerAccessor4_RegisterLogger(This,submissionId,punkLogger)	\
    ( (This)->lpVtbl -> RegisterLogger(This,submissionId,punkLogger) ) 

#define IVsBuildManagerAccessor4_UnregisterLoggers(This,submissionId)	\
    ( (This)->lpVtbl -> UnregisterLoggers(This,submissionId) ) 

#define IVsBuildManagerAccessor4_ClaimUIThreadForBuild(This)	\
    ( (This)->lpVtbl -> ClaimUIThreadForBuild(This) ) 

#define IVsBuildManagerAccessor4_ReleaseUIThreadForBuild(This)	\
    ( (This)->lpVtbl -> ReleaseUIThreadForBuild(This) ) 

#define IVsBuildManagerAccessor4_BeginDesignTimeBuild(This)	\
    ( (This)->lpVtbl -> BeginDesignTimeBuild(This) ) 

#define IVsBuildManagerAccessor4_EndDesignTimeBuild(This)	\
    ( (This)->lpVtbl -> EndDesignTimeBuild(This) ) 

#define IVsBuildManagerAccessor4_GetCurrentBatchBuildId(This,pBatchId)	\
    ( (This)->lpVtbl -> GetCurrentBatchBuildId(This,pBatchId) ) 

#define IVsBuildManagerAccessor4_GetSolutionConfiguration(This,punkRootProject,pbstrXmlFragment)	\
    ( (This)->lpVtbl -> GetSolutionConfiguration(This,punkRootProject,pbstrXmlFragment) ) 

#define IVsBuildManagerAccessor4_Escape(This,pwszUnescapedValue,pbstrEscapedValue)	\
    ( (This)->lpVtbl -> Escape(This,pwszUnescapedValue,pbstrEscapedValue) ) 

#define IVsBuildManagerAccessor4_Unescape(This,pwszEscapedValue,pbstrUnescapedValue)	\
    ( (This)->lpVtbl -> Unescape(This,pwszEscapedValue,pbstrUnescapedValue) ) 


#define IVsBuildManagerAccessor4_get_DesignTimeBuildAvailable(This,phWaitHandle)	\
    ( (This)->lpVtbl -> get_DesignTimeBuildAvailable(This,phWaitHandle) ) 

#define IVsBuildManagerAccessor4_get_UIThreadIsAvailableForBuild(This,phWaitHandle)	\
    ( (This)->lpVtbl -> get_UIThreadIsAvailableForBuild(This,phWaitHandle) ) 

#define IVsBuildManagerAccessor4_AcquireBuildResources(This,fResources,phCookie)	\
    ( (This)->lpVtbl -> AcquireBuildResources(This,fResources,phCookie) ) 

#define IVsBuildManagerAccessor4_ReleaseBuildResources(This,hCookie)	\
    ( (This)->lpVtbl -> ReleaseBuildResources(This,hCookie) ) 


#define IVsBuildManagerAccessor4_get_SolutionBuildAvailable(This,phWaitHandle)	\
    ( (This)->lpVtbl -> get_SolutionBuildAvailable(This,phWaitHandle) ) 


#define IVsBuildManagerAccessor4_RegisterExternalLoggers(This,submissionId,projectPath,targets,isDesignTimeBuild)	\
    ( (This)->lpVtbl -> RegisterExternalLoggers(This,submissionId,projectPath,targets,isDesignTimeBuild) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBuildManagerAccessor4_INTERFACE_DEFINED__ */


#ifndef __IVsSettingsStore2_INTERFACE_DEFINED__
#define __IVsSettingsStore2_INTERFACE_DEFINED__

/* interface IVsSettingsStore2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSettingsStore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3366139a-0829-4c1d-9818-95d4b63dd38b")
    IVsSettingsStore2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyNames( 
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyNamesAndValues( 
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyNames,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubCollectionNames( 
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrSubCollectionNames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSettingsStore2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSettingsStore2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSettingsStore2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSettingsStore2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNames )( 
            __RPC__in IVsSettingsStore2 * This,
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNamesAndValues )( 
            __RPC__in IVsSettingsStore2 * This,
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyNames,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrPropertyValues);
        
        HRESULT ( STDMETHODCALLTYPE *GetSubCollectionNames )( 
            __RPC__in IVsSettingsStore2 * This,
            /* [in] */ __RPC__in LPCOLESTR szCollectionPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppArrSubCollectionNames);
        
        END_INTERFACE
    } IVsSettingsStore2Vtbl;

    interface IVsSettingsStore2
    {
        CONST_VTBL struct IVsSettingsStore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSettingsStore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSettingsStore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSettingsStore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSettingsStore2_GetPropertyNames(This,szCollectionPath,ppArrPropertyNames)	\
    ( (This)->lpVtbl -> GetPropertyNames(This,szCollectionPath,ppArrPropertyNames) ) 

#define IVsSettingsStore2_GetPropertyNamesAndValues(This,szCollectionPath,ppArrPropertyNames,ppArrPropertyValues)	\
    ( (This)->lpVtbl -> GetPropertyNamesAndValues(This,szCollectionPath,ppArrPropertyNames,ppArrPropertyValues) ) 

#define IVsSettingsStore2_GetSubCollectionNames(This,szCollectionPath,ppArrSubCollectionNames)	\
    ( (This)->lpVtbl -> GetSubCollectionNames(This,szCollectionPath,ppArrSubCollectionNames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSettingsStore2_INTERFACE_DEFINED__ */


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


