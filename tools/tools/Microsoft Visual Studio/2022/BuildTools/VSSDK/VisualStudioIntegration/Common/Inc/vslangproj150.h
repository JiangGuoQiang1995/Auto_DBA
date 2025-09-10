

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


#ifndef __vslangproj150_h__
#define __vslangproj150_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __PackageReferences_FWD_DEFINED__
#define __PackageReferences_FWD_DEFINED__
typedef interface PackageReferences PackageReferences;

#endif 	/* __PackageReferences_FWD_DEFINED__ */


#ifndef __VSProject4_FWD_DEFINED__
#define __VSProject4_FWD_DEFINED__
typedef interface VSProject4 VSProject4;

#endif 	/* __VSProject4_FWD_DEFINED__ */


#ifndef __Reference6_FWD_DEFINED__
#define __Reference6_FWD_DEFINED__
typedef interface Reference6 Reference6;

#endif 	/* __Reference6_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vslangproj150_0000_0000 */
/* [local] */ 

#include "dte.h"
#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#define DTE VxDTE::DTE
#define Project VxDTE::Project
#define ProjectItem VxDTE::ProjectItem
#endif
#define VSLANGPROJ150_VER_MAJ   15
#define VSLANGPROJ150_VER_MIN    0


extern RPC_IF_HANDLE __MIDL_itf_vslangproj150_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj150_0000_0000_v0_0_s_ifspec;


#ifndef __VSLangProj150_LIBRARY_DEFINED__
#define __VSLangProj150_LIBRARY_DEFINED__

/* library VSLangProj150 */
/* [version][helpstring][uuid] */ 

#pragma once

enum VsProjReferencePropId150
    {
        DISPID_Reference_GetMetadata	= 130,
        DISPID_Reference_AddOrUpdateMetadata	= 131
    } ;

EXTERN_C const IID LIBID_VSLangProj150;

#ifndef __PackageReferences_INTERFACE_DEFINED__
#define __PackageReferences_INTERFACE_DEFINED__

/* interface PackageReferences */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_PackageReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("146A9209-0D04-4024-9FD6-132143A337E4")
    PackageReferences : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DTE( 
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ DTE **ppDTE) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppdispParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContainingProject( 
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **ppProject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddOrUpdate( 
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ __RPC__in BSTR bstrVersion,
            /* [in] */ __RPC__in SAFEARRAY * pbstrMetadataElements,
            /* [in] */ __RPC__in SAFEARRAY * pbstrMetadataValues) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ __RPC__in BSTR bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TryGetReference( 
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrDesiredMetadata,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrVersion,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pbstrMetadataElements,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pbstrMetadataValues,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pFound) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstalledPackages( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *parrbstrInstalledPackages) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct PackageReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in PackageReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in PackageReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in PackageReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in PackageReferences * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in PackageReferences * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in PackageReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            PackageReferences * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in PackageReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ DTE **ppDTE);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in PackageReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppdispParent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainingProject )( 
            __RPC__in PackageReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **ppProject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddOrUpdate )( 
            __RPC__in PackageReferences * This,
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ __RPC__in BSTR bstrVersion,
            /* [in] */ __RPC__in SAFEARRAY * pbstrMetadataElements,
            /* [in] */ __RPC__in SAFEARRAY * pbstrMetadataValues);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in PackageReferences * This,
            /* [in] */ __RPC__in BSTR bstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TryGetReference )( 
            __RPC__in PackageReferences * This,
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrDesiredMetadata,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrVersion,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pbstrMetadataElements,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pbstrMetadataValues,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pFound);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledPackages )( 
            __RPC__in PackageReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *parrbstrInstalledPackages);
        
        END_INTERFACE
    } PackageReferencesVtbl;

    interface PackageReferences
    {
        CONST_VTBL struct PackageReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define PackageReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define PackageReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define PackageReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define PackageReferences_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define PackageReferences_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define PackageReferences_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define PackageReferences_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define PackageReferences_get_DTE(This,ppDTE)	\
    ( (This)->lpVtbl -> get_DTE(This,ppDTE) ) 

#define PackageReferences_get_Parent(This,ppdispParent)	\
    ( (This)->lpVtbl -> get_Parent(This,ppdispParent) ) 

#define PackageReferences_get_ContainingProject(This,ppProject)	\
    ( (This)->lpVtbl -> get_ContainingProject(This,ppProject) ) 

#define PackageReferences_AddOrUpdate(This,bstrName,bstrVersion,pbstrMetadataElements,pbstrMetadataValues)	\
    ( (This)->lpVtbl -> AddOrUpdate(This,bstrName,bstrVersion,pbstrMetadataElements,pbstrMetadataValues) ) 

#define PackageReferences_Remove(This,bstrName)	\
    ( (This)->lpVtbl -> Remove(This,bstrName) ) 

#define PackageReferences_TryGetReference(This,bstrName,parrbstrDesiredMetadata,pbstrVersion,pbstrMetadataElements,pbstrMetadataValues,pFound)	\
    ( (This)->lpVtbl -> TryGetReference(This,bstrName,parrbstrDesiredMetadata,pbstrVersion,pbstrMetadataElements,pbstrMetadataValues,pFound) ) 

#define PackageReferences_get_InstalledPackages(This,parrbstrInstalledPackages)	\
    ( (This)->lpVtbl -> get_InstalledPackages(This,parrbstrInstalledPackages) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __PackageReferences_INTERFACE_DEFINED__ */


#ifndef __VSProject4_INTERFACE_DEFINED__
#define __VSProject4_INTERFACE_DEFINED__

/* interface VSProject4 */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_VSProject4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C91C1D8-5046-437A-A414-7D1739172F5E")
    VSProject4 : public VSProject3
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PackageReferences( 
            /* [retval][out] */ __RPC__deref_out_opt PackageReferences **ppRefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct VSProject4Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in VSProject4 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt References **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BuildManager )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BuildManager **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CreateWebReferencesFolder )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_WebReferencesFolder )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddWebReference )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrUrl,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TemplatePath )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_WorkOffline )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_WorkOffline )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Imports )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Imports **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Events )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt VSProjectEvents **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CopyProject )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDestFolder,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDestUNCPath,
            /* [in][idldescattr] */ enum prjCopyProjectOption copyProjectOption,
            /* [in][idldescattr] */ __RPC__in BSTR bstrUsername,
            /* [in][idldescattr] */ __RPC__in BSTR bstrPassword,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Exec )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ enum prjExecCommand command,
            /* [idldescattr] */ signed long bSuppressUI,
            /* [in][idldescattr] */ VARIANT varIn,
            /* [out][idldescattr] */ __RPC__out VARIANT *pVarOut,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyPairFiles )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR strPublicPrivateFile,
            /* [in][idldescattr] */ __RPC__in BSTR strPublicOnlyFile,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetUniqueFilename )( 
            __RPC__in VSProject4 * This,
            /* [in][idldescattr] */ __RPC__in_opt IDispatch *pDispatch,
            /* [in][idldescattr] */ __RPC__in BSTR bstrRoot,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDesiredExt,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PublishManager )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Events2 )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt VSProjectEvents2 **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AnalyzerReferences )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt AnalyzerReferences **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PackageReferences )( 
            __RPC__in VSProject4 * This,
            /* [retval][out] */ __RPC__deref_out_opt PackageReferences **ppRefs);
        
        END_INTERFACE
    } VSProject4Vtbl;

    interface VSProject4
    {
        CONST_VTBL struct VSProject4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define VSProject4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define VSProject4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define VSProject4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define VSProject4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define VSProject4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define VSProject4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define VSProject4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define VSProject4_get_References(This,retval)	\
    ( (This)->lpVtbl -> get_References(This,retval) ) 

#define VSProject4_get_BuildManager(This,retval)	\
    ( (This)->lpVtbl -> get_BuildManager(This,retval) ) 

#define VSProject4_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define VSProject4_get_Project(This,retval)	\
    ( (This)->lpVtbl -> get_Project(This,retval) ) 

#define VSProject4_CreateWebReferencesFolder(This,retval)	\
    ( (This)->lpVtbl -> CreateWebReferencesFolder(This,retval) ) 

#define VSProject4_get_WebReferencesFolder(This,retval)	\
    ( (This)->lpVtbl -> get_WebReferencesFolder(This,retval) ) 

#define VSProject4_AddWebReference(This,bstrUrl,retval)	\
    ( (This)->lpVtbl -> AddWebReference(This,bstrUrl,retval) ) 

#define VSProject4_get_TemplatePath(This,retval)	\
    ( (This)->lpVtbl -> get_TemplatePath(This,retval) ) 

#define VSProject4_Refresh(This,retval)	\
    ( (This)->lpVtbl -> Refresh(This,retval) ) 

#define VSProject4_get_WorkOffline(This,retval)	\
    ( (This)->lpVtbl -> get_WorkOffline(This,retval) ) 

#define VSProject4_put_WorkOffline(This,noname,retval)	\
    ( (This)->lpVtbl -> put_WorkOffline(This,noname,retval) ) 

#define VSProject4_get_Imports(This,retval)	\
    ( (This)->lpVtbl -> get_Imports(This,retval) ) 

#define VSProject4_get_Events(This,retval)	\
    ( (This)->lpVtbl -> get_Events(This,retval) ) 

#define VSProject4_CopyProject(This,bstrDestFolder,bstrDestUNCPath,copyProjectOption,bstrUsername,bstrPassword,retval)	\
    ( (This)->lpVtbl -> CopyProject(This,bstrDestFolder,bstrDestUNCPath,copyProjectOption,bstrUsername,bstrPassword,retval) ) 

#define VSProject4_Exec(This,command,bSuppressUI,varIn,pVarOut,retval)	\
    ( (This)->lpVtbl -> Exec(This,command,bSuppressUI,varIn,pVarOut,retval) ) 

#define VSProject4_GenerateKeyPairFiles(This,strPublicPrivateFile,strPublicOnlyFile,retval)	\
    ( (This)->lpVtbl -> GenerateKeyPairFiles(This,strPublicPrivateFile,strPublicOnlyFile,retval) ) 

#define VSProject4_GetUniqueFilename(This,pDispatch,bstrRoot,bstrDesiredExt,retval)	\
    ( (This)->lpVtbl -> GetUniqueFilename(This,pDispatch,bstrRoot,bstrDesiredExt,retval) ) 

#define VSProject4_get_PublishManager(This,retval)	\
    ( (This)->lpVtbl -> get_PublishManager(This,retval) ) 

#define VSProject4_get_Events2(This,retval)	\
    ( (This)->lpVtbl -> get_Events2(This,retval) ) 

#define VSProject4_get_AnalyzerReferences(This,retval)	\
    ( (This)->lpVtbl -> get_AnalyzerReferences(This,retval) ) 


#define VSProject4_get_PackageReferences(This,ppRefs)	\
    ( (This)->lpVtbl -> get_PackageReferences(This,ppRefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __VSProject4_INTERFACE_DEFINED__ */


#ifndef __Reference6_INTERFACE_DEFINED__
#define __Reference6_INTERFACE_DEFINED__

/* interface Reference6 */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_Reference6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("957F4F7E-035C-4E0E-9DF5-6EB86CB0BCAD")
    Reference6 : public Reference5
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [in] */ __RPC__in SAFEARRAY * parrbstrDesiredMetadata,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrbstrMetadataElements,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrbstrMetadataValues) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddOrUpdateMetadata( 
            /* [in] */ __RPC__in SAFEARRAY * parrbstrMetadataElements,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrMetadataValues) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Reference6Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Reference6 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Reference6 * This,
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
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt References **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainingProject )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out enum prjReferenceType *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Culture )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RevisionNumber )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BuildNumber )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_StrongName )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SourceProject )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CopyLocal )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CopyLocal )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Extender )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExtenderName,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExtenderNames )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExtenderCATID )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKeyToken )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RuntimeVersion )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SpecificVersion )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_SpecificVersion )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SubType )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_SubType )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Isolated )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Isolated )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Aliases )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Aliases )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RefType )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AutoReferenced )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Resolved )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EmbedInteropTypes )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_EmbedInteropTypes )( 
            __RPC__in Reference6 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExpandedSdkReferences )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Group )( 
            __RPC__in Reference6 * This,
            /* [retval][out] */ __RPC__deref_out_opt Reference **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in Reference6 * This,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrDesiredMetadata,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrbstrMetadataElements,
            /* [out] */ __RPC__deref_out_opt SAFEARRAY * *pparrbstrMetadataValues);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddOrUpdateMetadata )( 
            __RPC__in Reference6 * This,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrMetadataElements,
            /* [in] */ __RPC__in SAFEARRAY * parrbstrMetadataValues);
        
        END_INTERFACE
    } Reference6Vtbl;

    interface Reference6
    {
        CONST_VTBL struct Reference6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Reference6_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Reference6_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Reference6_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Reference6_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Reference6_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Reference6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Reference6_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Reference6_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Reference6_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 

#define Reference6_get_ContainingProject(This,retval)	\
    ( (This)->lpVtbl -> get_ContainingProject(This,retval) ) 

#define Reference6_Remove(This,retval)	\
    ( (This)->lpVtbl -> Remove(This,retval) ) 

#define Reference6_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define Reference6_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define Reference6_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define Reference6_get_Path(This,retval)	\
    ( (This)->lpVtbl -> get_Path(This,retval) ) 

#define Reference6_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define Reference6_get_Culture(This,retval)	\
    ( (This)->lpVtbl -> get_Culture(This,retval) ) 

#define Reference6_get_MajorVersion(This,retval)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,retval) ) 

#define Reference6_get_MinorVersion(This,retval)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,retval) ) 

#define Reference6_get_RevisionNumber(This,retval)	\
    ( (This)->lpVtbl -> get_RevisionNumber(This,retval) ) 

#define Reference6_get_BuildNumber(This,retval)	\
    ( (This)->lpVtbl -> get_BuildNumber(This,retval) ) 

#define Reference6_get_StrongName(This,retval)	\
    ( (This)->lpVtbl -> get_StrongName(This,retval) ) 

#define Reference6_get_SourceProject(This,retval)	\
    ( (This)->lpVtbl -> get_SourceProject(This,retval) ) 

#define Reference6_get_CopyLocal(This,retval)	\
    ( (This)->lpVtbl -> get_CopyLocal(This,retval) ) 

#define Reference6_put_CopyLocal(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CopyLocal(This,noname,retval) ) 

#define Reference6_get_Extender(This,ExtenderName,retval)	\
    ( (This)->lpVtbl -> get_Extender(This,ExtenderName,retval) ) 

#define Reference6_get_ExtenderNames(This,retval)	\
    ( (This)->lpVtbl -> get_ExtenderNames(This,retval) ) 

#define Reference6_get_ExtenderCATID(This,retval)	\
    ( (This)->lpVtbl -> get_ExtenderCATID(This,retval) ) 

#define Reference6_get_PublicKeyToken(This,retval)	\
    ( (This)->lpVtbl -> get_PublicKeyToken(This,retval) ) 

#define Reference6_get_Version(This,retval)	\
    ( (This)->lpVtbl -> get_Version(This,retval) ) 

#define Reference6_get_RuntimeVersion(This,retval)	\
    ( (This)->lpVtbl -> get_RuntimeVersion(This,retval) ) 

#define Reference6_get_SpecificVersion(This,retval)	\
    ( (This)->lpVtbl -> get_SpecificVersion(This,retval) ) 

#define Reference6_put_SpecificVersion(This,noname,retval)	\
    ( (This)->lpVtbl -> put_SpecificVersion(This,noname,retval) ) 

#define Reference6_get_SubType(This,retval)	\
    ( (This)->lpVtbl -> get_SubType(This,retval) ) 

#define Reference6_put_SubType(This,noname,retval)	\
    ( (This)->lpVtbl -> put_SubType(This,noname,retval) ) 

#define Reference6_get_Isolated(This,retval)	\
    ( (This)->lpVtbl -> get_Isolated(This,retval) ) 

#define Reference6_put_Isolated(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Isolated(This,noname,retval) ) 

#define Reference6_get_Aliases(This,retval)	\
    ( (This)->lpVtbl -> get_Aliases(This,retval) ) 

#define Reference6_put_Aliases(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Aliases(This,noname,retval) ) 

#define Reference6_get_RefType(This,retval)	\
    ( (This)->lpVtbl -> get_RefType(This,retval) ) 

#define Reference6_get_AutoReferenced(This,retval)	\
    ( (This)->lpVtbl -> get_AutoReferenced(This,retval) ) 

#define Reference6_get_Resolved(This,retval)	\
    ( (This)->lpVtbl -> get_Resolved(This,retval) ) 

#define Reference6_get_EmbedInteropTypes(This,retval)	\
    ( (This)->lpVtbl -> get_EmbedInteropTypes(This,retval) ) 

#define Reference6_put_EmbedInteropTypes(This,noname,retval)	\
    ( (This)->lpVtbl -> put_EmbedInteropTypes(This,noname,retval) ) 

#define Reference6_get_ExpandedSdkReferences(This,retval)	\
    ( (This)->lpVtbl -> get_ExpandedSdkReferences(This,retval) ) 

#define Reference6_get_Group(This,retval)	\
    ( (This)->lpVtbl -> get_Group(This,retval) ) 


#define Reference6_GetMetadata(This,parrbstrDesiredMetadata,pparrbstrMetadataElements,pparrbstrMetadataValues)	\
    ( (This)->lpVtbl -> GetMetadata(This,parrbstrDesiredMetadata,pparrbstrMetadataElements,pparrbstrMetadataValues) ) 

#define Reference6_AddOrUpdateMetadata(This,parrbstrMetadataElements,parrbstrMetadataValues)	\
    ( (This)->lpVtbl -> AddOrUpdateMetadata(This,parrbstrMetadataElements,parrbstrMetadataValues) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Reference6_INTERFACE_DEFINED__ */

#endif /* __VSLangProj150_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_vslangproj150_0000_0001 */
/* [local] */ 

#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#undef DTE
#undef Project
#undef ProjectItem
#endif


extern RPC_IF_HANDLE __MIDL_itf_vslangproj150_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj150_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


