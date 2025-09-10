

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


#ifndef __dte100_h__
#define __dte100_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Solution4_FWD_DEFINED__
#define __Solution4_FWD_DEFINED__
typedef interface Solution4 Solution4;

#endif 	/* __Solution4_FWD_DEFINED__ */


#ifndef __Expression2_FWD_DEFINED__
#define __Expression2_FWD_DEFINED__
typedef interface Expression2 Expression2;

#endif 	/* __Expression2_FWD_DEFINED__ */


#ifndef __Debugger5_FWD_DEFINED__
#define __Debugger5_FWD_DEFINED__
typedef interface Debugger5 Debugger5;

#endif 	/* __Debugger5_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dte100_0000_0000 */
/* [local] */ 

#pragma once
#ifndef __INDENTSTYLE__
#define __INDENTSTYLE__
typedef /* [uuid] */  DECLSPEC_UUID("BCCEBE05-D29C-11D2-AABD-00C04F688DDE") 
enum _vsIndentStyle
    {
        vsIndentStyleNone	= 0,
        vsIndentStyleDefault	= ( vsIndentStyleNone + 1 ) ,
        vsIndentStyleSmart	= ( vsIndentStyleDefault + 1 ) 
    } 	vsIndentStyle;

#endif // __INDENTSTYLE__


extern RPC_IF_HANDLE __MIDL_itf_dte100_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dte100_0000_0000_v0_0_s_ifspec;


#ifndef __EnvDTE100_LIBRARY_DEFINED__
#define __EnvDTE100_LIBRARY_DEFINED__

/* library EnvDTE100 */
/* [version][helpstring][uuid] */ 

typedef /* [helpstringcontext][helpstring][helpcontext][uuid] */  DECLSPEC_UUID("2eb6290c-29aa-4609-871f-e22cab4f68b6") 
enum vsAddFromTemplateOptions
    {
        vsAddFromTemplateOptionsNone	= 0,
        vsAddFromTemplateOptionsShowWizardUI	= 0x1,
        vsAddFromTemplateOptionsLocalSolution	= 0x2,
        vsAddFromTemplateOptionsDeferredSave	= 0x4,
        vsAddFromTemplateOptionsMultiProject	= 0x8
    } 	vsAddFromTemplateOptions;

typedef /* [uuid] */  DECLSPEC_UUID("6FADEE12-6296-4E8B-A3EF-A6A0DC32F967") 
enum vsDocumentDockPreferenceOptions
    {
        vsDocumentDockAtBeginning	= 0,
        vsDocumentDockAtEnd	= 1
    } 	vsDocumentDockPreferenceOptions;

typedef /* [uuid] */  DECLSPEC_UUID("C7982CAF-1AFE-4671-858F-D7997D3D8928") 
enum vsRichClientExperienceOptions
    {
        vsRichClientExperienceNone	= 0,
        vsRichClientExperienceAll	= 0xffff,
        vsRichClientExperienceAnimations	= 0x1,
        vsRichClientExperienceGradients	= 0x2
    } 	vsRichClientExperienceOptions;




EXTERN_C const IID LIBID_EnvDTE100;

#ifndef __Solution4_INTERFACE_DEFINED__
#define __Solution4_INTERFACE_DEFINED__

/* interface Solution4 */
/* [helpstringcontext][helpstring][helpcontext][object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_Solution4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cda7305c-78b6-4d9d-90ad-93ebe71f9341")
    Solution4 : public Solution3
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFromTemplateEx( 
            /* [in] */ __RPC__in BSTR FileName,
            /* [in] */ __RPC__in BSTR Destination,
            /* [in] */ __RPC__in BSTR ProjectName,
            /* [in] */ __RPC__in BSTR SolutionName,
            /* [defaultvalue][in] */ VARIANT_BOOL Exclusive,
            /* [defaultvalue][in] */ DWORD Options,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **IppptReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Solution4Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Solution4 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ VARIANT index,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddFromTemplate )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [in][idldescattr] */ __RPC__in BSTR Destination,
            /* [in][idldescattr] */ __RPC__in BSTR ProjectName,
            /* [in][idldescattr] */ BOOLEAN Exclusive,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddFromFile )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [in][idldescattr] */ BOOLEAN Exclusive,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ BOOLEAN SaveFirst,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Properties **retval);
        
        /* [id][propget][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirty )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_IsDirty )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in_opt Project *proj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TemplatePath )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ProjectType,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Saved )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Globals )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Globals **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AddIns )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt AddIns **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Extender )( 
            __RPC__in Solution4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExtenderName,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExtenderNames )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExtenderCATID )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsOpen )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SolutionBuild )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt SolutionBuild **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR Destination,
            /* [idldescattr] */ __RPC__in BSTR Name,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Projects )( 
            __RPC__in Solution4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Projects **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *FindProjectItem )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR FileName,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ProjectItemsTemplatePath )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR ProjectKind,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddSolutionFolder )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR Name,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetProjectTemplate )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR TemplateName,
            /* [idldescattr] */ __RPC__in BSTR Language,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetProjectItemTemplate )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR TemplateName,
            /* [idldescattr] */ __RPC__in BSTR Language,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetProjectItemTemplates )( 
            __RPC__in Solution4 * This,
            /* [idldescattr] */ __RPC__in BSTR Language,
            /* [idldescattr] */ __RPC__in BSTR CustomDataSignature,
            /* [retval][out] */ __RPC__deref_out_opt Templates **retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddFromTemplateEx )( 
            __RPC__in Solution4 * This,
            /* [in] */ __RPC__in BSTR FileName,
            /* [in] */ __RPC__in BSTR Destination,
            /* [in] */ __RPC__in BSTR ProjectName,
            /* [in] */ __RPC__in BSTR SolutionName,
            /* [defaultvalue][in] */ VARIANT_BOOL Exclusive,
            /* [defaultvalue][in] */ DWORD Options,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **IppptReturn);
        
        END_INTERFACE
    } Solution4Vtbl;

    interface Solution4
    {
        CONST_VTBL struct Solution4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Solution4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Solution4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Solution4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Solution4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Solution4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Solution4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Solution4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Solution4_Item(This,index,retval)	\
    ( (This)->lpVtbl -> Item(This,index,retval) ) 

#define Solution4__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> _NewEnum(This,retval) ) 

#define Solution4_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Solution4_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Solution4_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define Solution4_get_FileName(This,retval)	\
    ( (This)->lpVtbl -> get_FileName(This,retval) ) 

#define Solution4_SaveAs(This,FileName,retval)	\
    ( (This)->lpVtbl -> SaveAs(This,FileName,retval) ) 

#define Solution4_AddFromTemplate(This,FileName,Destination,ProjectName,Exclusive,retval)	\
    ( (This)->lpVtbl -> AddFromTemplate(This,FileName,Destination,ProjectName,Exclusive,retval) ) 

#define Solution4_AddFromFile(This,FileName,Exclusive,retval)	\
    ( (This)->lpVtbl -> AddFromFile(This,FileName,Exclusive,retval) ) 

#define Solution4_Open(This,FileName,retval)	\
    ( (This)->lpVtbl -> Open(This,FileName,retval) ) 

#define Solution4_Close(This,SaveFirst,retval)	\
    ( (This)->lpVtbl -> Close(This,SaveFirst,retval) ) 

#define Solution4_get_Properties(This,retval)	\
    ( (This)->lpVtbl -> get_Properties(This,retval) ) 

#define Solution4_get_IsDirty(This,retval)	\
    ( (This)->lpVtbl -> get_IsDirty(This,retval) ) 

#define Solution4_put_IsDirty(This,noname,retval)	\
    ( (This)->lpVtbl -> put_IsDirty(This,noname,retval) ) 

#define Solution4_Remove(This,proj,retval)	\
    ( (This)->lpVtbl -> Remove(This,proj,retval) ) 

#define Solution4_get_TemplatePath(This,ProjectType,retval)	\
    ( (This)->lpVtbl -> get_TemplatePath(This,ProjectType,retval) ) 

#define Solution4_get_FullName(This,retval)	\
    ( (This)->lpVtbl -> get_FullName(This,retval) ) 

#define Solution4_get_Saved(This,retval)	\
    ( (This)->lpVtbl -> get_Saved(This,retval) ) 

#define Solution4_put_Saved(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Saved(This,noname,retval) ) 

#define Solution4_get_Globals(This,retval)	\
    ( (This)->lpVtbl -> get_Globals(This,retval) ) 

#define Solution4_get_AddIns(This,retval)	\
    ( (This)->lpVtbl -> get_AddIns(This,retval) ) 

#define Solution4_get_Extender(This,ExtenderName,retval)	\
    ( (This)->lpVtbl -> get_Extender(This,ExtenderName,retval) ) 

#define Solution4_get_ExtenderNames(This,retval)	\
    ( (This)->lpVtbl -> get_ExtenderNames(This,retval) ) 

#define Solution4_get_ExtenderCATID(This,retval)	\
    ( (This)->lpVtbl -> get_ExtenderCATID(This,retval) ) 

#define Solution4_get_IsOpen(This,retval)	\
    ( (This)->lpVtbl -> get_IsOpen(This,retval) ) 

#define Solution4_get_SolutionBuild(This,retval)	\
    ( (This)->lpVtbl -> get_SolutionBuild(This,retval) ) 

#define Solution4_Create(This,Destination,Name,retval)	\
    ( (This)->lpVtbl -> Create(This,Destination,Name,retval) ) 

#define Solution4_get_Projects(This,retval)	\
    ( (This)->lpVtbl -> get_Projects(This,retval) ) 

#define Solution4_FindProjectItem(This,FileName,retval)	\
    ( (This)->lpVtbl -> FindProjectItem(This,FileName,retval) ) 

#define Solution4_ProjectItemsTemplatePath(This,ProjectKind,retval)	\
    ( (This)->lpVtbl -> ProjectItemsTemplatePath(This,ProjectKind,retval) ) 

#define Solution4_AddSolutionFolder(This,Name,retval)	\
    ( (This)->lpVtbl -> AddSolutionFolder(This,Name,retval) ) 

#define Solution4_GetProjectTemplate(This,TemplateName,Language,retval)	\
    ( (This)->lpVtbl -> GetProjectTemplate(This,TemplateName,Language,retval) ) 

#define Solution4_GetProjectItemTemplate(This,TemplateName,Language,retval)	\
    ( (This)->lpVtbl -> GetProjectItemTemplate(This,TemplateName,Language,retval) ) 

#define Solution4_GetProjectItemTemplates(This,Language,CustomDataSignature,retval)	\
    ( (This)->lpVtbl -> GetProjectItemTemplates(This,Language,CustomDataSignature,retval) ) 


#define Solution4_AddFromTemplateEx(This,FileName,Destination,ProjectName,SolutionName,Exclusive,Options,IppptReturn)	\
    ( (This)->lpVtbl -> AddFromTemplateEx(This,FileName,Destination,ProjectName,SolutionName,Exclusive,Options,IppptReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Solution4_INTERFACE_DEFINED__ */


#ifndef __Expression2_INTERFACE_DEFINED__
#define __Expression2_INTERFACE_DEFINED__

/* interface Expression2 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_Expression2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F15A2DAD-5C82-4802-BEBC-5431B6ED5557")
    Expression2 : public Expression
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MakeObjectID( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteObjectID( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Expression2Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Expression2 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Expression2 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Expression2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Expression2 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Expression2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DataMembers )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Expressions **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            __RPC__in Expression2 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsValidValue )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Debugger **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            __RPC__in Expression2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Expressions **retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeObjectID )( 
            __RPC__in Expression2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteObjectID )( 
            __RPC__in Expression2 * This);
        
        END_INTERFACE
    } Expression2Vtbl;

    interface Expression2
    {
        CONST_VTBL struct Expression2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Expression2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Expression2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Expression2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Expression2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Expression2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Expression2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Expression2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Expression2_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define Expression2_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define Expression2_get_DataMembers(This,retval)	\
    ( (This)->lpVtbl -> get_DataMembers(This,retval) ) 

#define Expression2_get_Value(This,retval)	\
    ( (This)->lpVtbl -> get_Value(This,retval) ) 

#define Expression2_put_Value(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Value(This,noname,retval) ) 

#define Expression2_get_IsValidValue(This,retval)	\
    ( (This)->lpVtbl -> get_IsValidValue(This,retval) ) 

#define Expression2_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Expression2_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Expression2_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 


#define Expression2_MakeObjectID(This)	\
    ( (This)->lpVtbl -> MakeObjectID(This) ) 

#define Expression2_DeleteObjectID(This)	\
    ( (This)->lpVtbl -> DeleteObjectID(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Expression2_INTERFACE_DEFINED__ */


#ifndef __Debugger5_INTERFACE_DEFINED__
#define __Debugger5_INTERFACE_DEFINED__

/* interface Debugger5 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_Debugger5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8BBAA3A-7E99-4630-942C-570F085141EB")
    Debugger5 : public Debugger4
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteObjectID( 
            /* [in] */ __RPC__in BSTR ObjectIDExpression) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExportBreakpoints( 
            /* [in] */ __RPC__in BSTR FileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ImportBreakpoints( 
            /* [in] */ __RPC__in BSTR FileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Debugger5Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Debugger5 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExpression )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExpressionText,
            /* [in][idldescattr] */ BOOLEAN UseAutoExpandRules,
            /* [in][idldescattr] */ signed long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt Expression **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *DetachAll )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepInto )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepOver )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepOut )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Go )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Break )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakMode,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForDesignMode,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SetNextStatement )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *RunToCursor )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ExecuteStatement )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR Statement,
            /* [in][idldescattr] */ signed long Timeout,
            /* [in][idldescattr] */ BOOLEAN TreatAsExpression,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Breakpoints )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Languages **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMode )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out enum dbgDebugMode *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcess )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Process **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentProcess )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in_opt Process *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProgram )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Program **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentProgram )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in_opt Program *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentThread )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Thread **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentThread )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in_opt Thread *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentStackFrame )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt StackFrame **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentStackFrame )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in_opt StackFrame *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HexDisplayMode )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_HexDisplayMode )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HexInputMode )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_HexInputMode )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LastBreakReason )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out enum dbgEventReason *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BreakpointLastHit )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoint **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AllBreakpointsLastHit )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DebuggedProcesses )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LocalProcesses )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *TerminateAll )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *WriteMinidump )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [in][idldescattr] */ enum dbgMinidumpOption Option,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetProcesses )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in_opt Transport *pTransport,
            /* [in][idldescattr] */ __RPC__in BSTR TransportQualifier,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExpression2 )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExpressionText,
            /* [in][idldescattr] */ BOOLEAN UseAutoExpandRules,
            /* [in][idldescattr] */ BOOLEAN TreatAsStatement,
            /* [in][idldescattr] */ signed long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt Expression **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Transports )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt Transports **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ForceContinue )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_ForceContinue )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExceptionGroups )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt ExceptionGroups **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolPath )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolPathState )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolCachePath )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_OnlyLoadSymbolsManually )( 
            __RPC__in Debugger5 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SetSymbolSettings )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolPath,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolPathState,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolCachePath,
            /* [in][idldescattr] */ BOOLEAN OnlyLoadSymbolsManually,
            /* [in][idldescattr] */ BOOLEAN LoadSymbolsNow,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExpression3 )( 
            __RPC__in Debugger5 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExpressionText,
            /* [in][idldescattr] */ __RPC__in_opt StackFrame *StackFrame,
            /* [in][idldescattr] */ BOOLEAN UseAutoExpandRules,
            /* [in][idldescattr] */ BOOLEAN TreatAsStatement,
            /* [in][idldescattr] */ BOOLEAN AllowAutoFuncEval,
            /* [in][idldescattr] */ signed long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt Expression **retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteObjectID )( 
            __RPC__in Debugger5 * This,
            /* [in] */ __RPC__in BSTR ObjectIDExpression);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExportBreakpoints )( 
            __RPC__in Debugger5 * This,
            /* [in] */ __RPC__in BSTR FileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ImportBreakpoints )( 
            __RPC__in Debugger5 * This,
            /* [in] */ __RPC__in BSTR FileName);
        
        END_INTERFACE
    } Debugger5Vtbl;

    interface Debugger5
    {
        CONST_VTBL struct Debugger5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Debugger5_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Debugger5_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Debugger5_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Debugger5_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Debugger5_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Debugger5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Debugger5_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Debugger5_GetExpression(This,ExpressionText,UseAutoExpandRules,Timeout,retval)	\
    ( (This)->lpVtbl -> GetExpression(This,ExpressionText,UseAutoExpandRules,Timeout,retval) ) 

#define Debugger5_DetachAll(This,retval)	\
    ( (This)->lpVtbl -> DetachAll(This,retval) ) 

#define Debugger5_StepInto(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepInto(This,WaitForBreakOrEnd,retval) ) 

#define Debugger5_StepOver(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepOver(This,WaitForBreakOrEnd,retval) ) 

#define Debugger5_StepOut(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepOut(This,WaitForBreakOrEnd,retval) ) 

#define Debugger5_Go(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> Go(This,WaitForBreakOrEnd,retval) ) 

#define Debugger5_Break(This,WaitForBreakMode,retval)	\
    ( (This)->lpVtbl -> Break(This,WaitForBreakMode,retval) ) 

#define Debugger5_Stop(This,WaitForDesignMode,retval)	\
    ( (This)->lpVtbl -> Stop(This,WaitForDesignMode,retval) ) 

#define Debugger5_SetNextStatement(This,retval)	\
    ( (This)->lpVtbl -> SetNextStatement(This,retval) ) 

#define Debugger5_RunToCursor(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> RunToCursor(This,WaitForBreakOrEnd,retval) ) 

#define Debugger5_ExecuteStatement(This,Statement,Timeout,TreatAsExpression,retval)	\
    ( (This)->lpVtbl -> ExecuteStatement(This,Statement,Timeout,TreatAsExpression,retval) ) 

#define Debugger5_get_Breakpoints(This,retval)	\
    ( (This)->lpVtbl -> get_Breakpoints(This,retval) ) 

#define Debugger5_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define Debugger5_get_CurrentMode(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentMode(This,retval) ) 

#define Debugger5_get_CurrentProcess(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentProcess(This,retval) ) 

#define Debugger5_put_CurrentProcess(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentProcess(This,noname,retval) ) 

#define Debugger5_get_CurrentProgram(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentProgram(This,retval) ) 

#define Debugger5_put_CurrentProgram(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentProgram(This,noname,retval) ) 

#define Debugger5_get_CurrentThread(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentThread(This,retval) ) 

#define Debugger5_put_CurrentThread(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentThread(This,noname,retval) ) 

#define Debugger5_get_CurrentStackFrame(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentStackFrame(This,retval) ) 

#define Debugger5_put_CurrentStackFrame(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentStackFrame(This,noname,retval) ) 

#define Debugger5_get_HexDisplayMode(This,retval)	\
    ( (This)->lpVtbl -> get_HexDisplayMode(This,retval) ) 

#define Debugger5_put_HexDisplayMode(This,noname,retval)	\
    ( (This)->lpVtbl -> put_HexDisplayMode(This,noname,retval) ) 

#define Debugger5_get_HexInputMode(This,retval)	\
    ( (This)->lpVtbl -> get_HexInputMode(This,retval) ) 

#define Debugger5_put_HexInputMode(This,noname,retval)	\
    ( (This)->lpVtbl -> put_HexInputMode(This,noname,retval) ) 

#define Debugger5_get_LastBreakReason(This,retval)	\
    ( (This)->lpVtbl -> get_LastBreakReason(This,retval) ) 

#define Debugger5_get_BreakpointLastHit(This,retval)	\
    ( (This)->lpVtbl -> get_BreakpointLastHit(This,retval) ) 

#define Debugger5_get_AllBreakpointsLastHit(This,retval)	\
    ( (This)->lpVtbl -> get_AllBreakpointsLastHit(This,retval) ) 

#define Debugger5_get_DebuggedProcesses(This,retval)	\
    ( (This)->lpVtbl -> get_DebuggedProcesses(This,retval) ) 

#define Debugger5_get_LocalProcesses(This,retval)	\
    ( (This)->lpVtbl -> get_LocalProcesses(This,retval) ) 

#define Debugger5_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Debugger5_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Debugger5_TerminateAll(This,retval)	\
    ( (This)->lpVtbl -> TerminateAll(This,retval) ) 

#define Debugger5_WriteMinidump(This,FileName,Option,retval)	\
    ( (This)->lpVtbl -> WriteMinidump(This,FileName,Option,retval) ) 

#define Debugger5_GetProcesses(This,pTransport,TransportQualifier,retval)	\
    ( (This)->lpVtbl -> GetProcesses(This,pTransport,TransportQualifier,retval) ) 

#define Debugger5_GetExpression2(This,ExpressionText,UseAutoExpandRules,TreatAsStatement,Timeout,retval)	\
    ( (This)->lpVtbl -> GetExpression2(This,ExpressionText,UseAutoExpandRules,TreatAsStatement,Timeout,retval) ) 

#define Debugger5_get_Transports(This,retval)	\
    ( (This)->lpVtbl -> get_Transports(This,retval) ) 

#define Debugger5_get_ForceContinue(This,retval)	\
    ( (This)->lpVtbl -> get_ForceContinue(This,retval) ) 

#define Debugger5_put_ForceContinue(This,noname,retval)	\
    ( (This)->lpVtbl -> put_ForceContinue(This,noname,retval) ) 

#define Debugger5_get_ExceptionGroups(This,retval)	\
    ( (This)->lpVtbl -> get_ExceptionGroups(This,retval) ) 

#define Debugger5_get_SymbolPath(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolPath(This,retval) ) 

#define Debugger5_get_SymbolPathState(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolPathState(This,retval) ) 

#define Debugger5_get_SymbolCachePath(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolCachePath(This,retval) ) 

#define Debugger5_get_OnlyLoadSymbolsManually(This,retval)	\
    ( (This)->lpVtbl -> get_OnlyLoadSymbolsManually(This,retval) ) 

#define Debugger5_SetSymbolSettings(This,SymbolPath,SymbolPathState,SymbolCachePath,OnlyLoadSymbolsManually,LoadSymbolsNow,retval)	\
    ( (This)->lpVtbl -> SetSymbolSettings(This,SymbolPath,SymbolPathState,SymbolCachePath,OnlyLoadSymbolsManually,LoadSymbolsNow,retval) ) 

#define Debugger5_GetExpression3(This,ExpressionText,StackFrame,UseAutoExpandRules,TreatAsStatement,AllowAutoFuncEval,Timeout,retval)	\
    ( (This)->lpVtbl -> GetExpression3(This,ExpressionText,StackFrame,UseAutoExpandRules,TreatAsStatement,AllowAutoFuncEval,Timeout,retval) ) 


#define Debugger5_DeleteObjectID(This,ObjectIDExpression)	\
    ( (This)->lpVtbl -> DeleteObjectID(This,ObjectIDExpression) ) 

#define Debugger5_ExportBreakpoints(This,FileName)	\
    ( (This)->lpVtbl -> ExportBreakpoints(This,FileName) ) 

#define Debugger5_ImportBreakpoints(This,FileName)	\
    ( (This)->lpVtbl -> ImportBreakpoints(This,FileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Debugger5_INTERFACE_DEFINED__ */

#endif /* __EnvDTE100_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


