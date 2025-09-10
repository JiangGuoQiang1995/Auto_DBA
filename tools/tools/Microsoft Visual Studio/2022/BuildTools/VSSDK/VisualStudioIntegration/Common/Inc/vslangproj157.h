

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


#ifndef __vslangproj157_h__
#define __vslangproj157_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __References3_FWD_DEFINED__
#define __References3_FWD_DEFINED__
typedef interface References3 References3;

#endif 	/* __References3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vslangproj157_0000_0000 */
/* [local] */ 

#include "dte.h"
#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#define DTE VxDTE::DTE
#define Project VxDTE::Project
#define ProjectItem VxDTE::ProjectItem
#endif
#define VSLANGPROJ157_VER_MAJ   15
#define VSLANGPROJ157_VER_MIN    7


extern RPC_IF_HANDLE __MIDL_itf_vslangproj157_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj157_0000_0000_v0_0_s_ifspec;


#ifndef __VSLangProj157_LIBRARY_DEFINED__
#define __VSLangProj157_LIBRARY_DEFINED__

/* library VSLangProj157 */
/* [version][helpstring][uuid] */ 

#pragma once

enum VsProjReferencesPropId157
    {
        DISPID_References_AddFiles	= 10
    } ;

EXTERN_C const IID LIBID_VSLangProj157;

#ifndef __References3_INTERFACE_DEFINED__
#define __References3_INTERFACE_DEFINED__

/* interface References3 */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_References3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B2B0873-6DE1-4045-88DD-B2CBD94E3547")
    References3 : public References2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFiles( 
            /* [in] */ __RPC__in SAFEARRAY * parrbstrPaths,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrReferences) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct References3Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in References3 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainingProject )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ VARIANT index,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            __RPC__in References3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrIdentity,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrPath,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddActiveX )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrTypeLibGuid,
            /* [in][idldescattr] */ signed long lMajorVer,
            /* [in][idldescattr] */ signed long lMinorVer,
            /* [in][idldescattr] */ signed long lLocaleId,
            /* [in][idldescattr] */ __RPC__in BSTR bstrWrapperTool,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddProject )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in_opt Project *pProject,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddSDK )( 
            __RPC__in References3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR wszSDKDisplayName,
            /* [in][idldescattr] */ __RPC__in BSTR wszSDKidentifier,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddFiles )( 
            __RPC__in References3 * This,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrPaths,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrReferences);
        
        END_INTERFACE
    } References3Vtbl;

    interface References3
    {
        CONST_VTBL struct References3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define References3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define References3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define References3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define References3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define References3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define References3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define References3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define References3_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define References3_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define References3_get_ContainingProject(This,retval)	\
    ( (This)->lpVtbl -> get_ContainingProject(This,retval) ) 

#define References3_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define References3_Item(This,index,retval)	\
    ( (This)->lpVtbl -> Item(This,index,retval) ) 

#define References3__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> _NewEnum(This,retval) ) 

#define References3_Find(This,bstrIdentity,retval)	\
    ( (This)->lpVtbl -> Find(This,bstrIdentity,retval) ) 

#define References3_Add(This,bstrPath,retval)	\
    ( (This)->lpVtbl -> Add(This,bstrPath,retval) ) 

#define References3_AddActiveX(This,bstrTypeLibGuid,lMajorVer,lMinorVer,lLocaleId,bstrWrapperTool,retval)	\
    ( (This)->lpVtbl -> AddActiveX(This,bstrTypeLibGuid,lMajorVer,lMinorVer,lLocaleId,bstrWrapperTool,retval) ) 

#define References3_AddProject(This,pProject,retval)	\
    ( (This)->lpVtbl -> AddProject(This,pProject,retval) ) 

#define References3_AddSDK(This,wszSDKDisplayName,wszSDKidentifier,retval)	\
    ( (This)->lpVtbl -> AddSDK(This,wszSDKDisplayName,wszSDKidentifier,retval) ) 


#define References3_AddFiles(This,parrbstrPaths,pparrReferences)	\
    ( (This)->lpVtbl -> AddFiles(This,parrbstrPaths,pparrReferences) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __References3_INTERFACE_DEFINED__ */

#endif /* __VSLangProj157_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_vslangproj157_0000_0001 */
/* [local] */ 

#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#undef DTE
#undef Project
#undef ProjectItem
#endif


extern RPC_IF_HANDLE __MIDL_itf_vslangproj157_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj157_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


