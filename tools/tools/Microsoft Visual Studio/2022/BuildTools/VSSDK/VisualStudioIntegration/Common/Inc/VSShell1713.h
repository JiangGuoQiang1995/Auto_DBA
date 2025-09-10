

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

#ifndef __VSShell1713_h__
#define __VSShell1713_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsSolutionBuildManager7_FWD_DEFINED__
#define __IVsSolutionBuildManager7_FWD_DEFINED__
typedef interface IVsSolutionBuildManager7 IVsSolutionBuildManager7;

#endif 	/* __IVsSolutionBuildManager7_FWD_DEFINED__ */


#ifndef __IVsUIShell8_FWD_DEFINED__
#define __IVsUIShell8_FWD_DEFINED__
typedef interface IVsUIShell8 IVsUIShell8;

#endif 	/* __IVsUIShell8_FWD_DEFINED__ */


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

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSShell1713_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_VSShell1713_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1713_0000_0000_v0_0_s_ifspec;

#ifndef __IVsSolutionBuildManager7_INTERFACE_DEFINED__
#define __IVsSolutionBuildManager7_INTERFACE_DEFINED__

/* interface IVsSolutionBuildManager7 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSolutionBuildManager7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9da1a6a1-7754-43d2-ae47-2e0b5a180e9d")
    IVsSolutionBuildManager7 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BuildId( 
            /* [retval][out] */ __RPC__out INT *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSolutionBuildManager7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSolutionBuildManager7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSolutionBuildManager7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSolutionBuildManager7 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildId )( 
            __RPC__in IVsSolutionBuildManager7 * This,
            /* [retval][out] */ __RPC__out INT *res);
        
        END_INTERFACE
    } IVsSolutionBuildManager7Vtbl;

    interface IVsSolutionBuildManager7
    {
        CONST_VTBL struct IVsSolutionBuildManager7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSolutionBuildManager7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSolutionBuildManager7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSolutionBuildManager7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSolutionBuildManager7_get_BuildId(This,res)	\
    ( (This)->lpVtbl -> get_BuildId(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSolutionBuildManager7_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell1713_0000_0001 */
/* [local] */ 

/* [v1_enum] */ 
enum __ExtendedMessageBoxResult
    {
        ExtendedMessageBoxResult_None	= 0,
        ExtendedMessageBoxResult_OK	= 0x1,
        ExtendedMessageBoxResult_Cancel	= 0x2,
        ExtendedMessageBoxResult_Abort	= 0x3,
        ExtendedMessageBoxResult_Retry	= 0x4,
        ExtendedMessageBoxResult_Ignore	= 0x5,
        ExtendedMessageBoxResult_Yes	= 0x6,
        ExtendedMessageBoxResult_No	= 0x7
    } ;
typedef DWORD ExtendedMessageBoxResult;



extern RPC_IF_HANDLE __MIDL_itf_VSShell1713_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1713_0000_0001_v0_0_s_ifspec;

#ifndef __IVsUIShell8_INTERFACE_DEFINED__
#define __IVsUIShell8_INTERFACE_DEFINED__

/* interface IVsUIShell8 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUIShell8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afd581b8-5936-4554-830c-b1bb1ffe2693")
    IVsUIShell8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowMessageBoxEx( 
            /* [unique][in] */ __RPC__in_opt LPOLESTR title,
            /* [in] */ __RPC__in LPOLESTR text,
            /* [unique][in] */ __RPC__in_opt LPOLESTR helpTopic,
            /* [in] */ OLEMSGBUTTON buttons,
            /* [in] */ OLEMSGDEFBUTTON defaultButton,
            /* [in] */ OLEMSGICON icon,
            /* [in] */ VARIANT_BOOL allowSuppression,
            /* [out] */ __RPC__out VARIANT_BOOL *suppressed,
            /* [retval][out] */ __RPC__out ExtendedMessageBoxResult *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowMessageBoxExWithHelpId( 
            /* [unique][in] */ __RPC__in_opt LPOLESTR title,
            /* [in] */ __RPC__in LPOLESTR text,
            /* [unique][in] */ __RPC__in_opt LPOLESTR helpFile,
            /* [in] */ DWORD helpId,
            /* [in] */ OLEMSGBUTTON buttons,
            /* [in] */ OLEMSGDEFBUTTON defaultButton,
            /* [in] */ OLEMSGICON icon,
            /* [in] */ VARIANT_BOOL allowSuppression,
            /* [out] */ __RPC__out VARIANT_BOOL *suppressed,
            /* [retval][out] */ __RPC__out ExtendedMessageBoxResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUIShell8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUIShell8 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUIShell8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUIShell8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowMessageBoxEx )( 
            __RPC__in IVsUIShell8 * This,
            /* [unique][in] */ __RPC__in_opt LPOLESTR title,
            /* [in] */ __RPC__in LPOLESTR text,
            /* [unique][in] */ __RPC__in_opt LPOLESTR helpTopic,
            /* [in] */ OLEMSGBUTTON buttons,
            /* [in] */ OLEMSGDEFBUTTON defaultButton,
            /* [in] */ OLEMSGICON icon,
            /* [in] */ VARIANT_BOOL allowSuppression,
            /* [out] */ __RPC__out VARIANT_BOOL *suppressed,
            /* [retval][out] */ __RPC__out ExtendedMessageBoxResult *result);
        
        HRESULT ( STDMETHODCALLTYPE *ShowMessageBoxExWithHelpId )( 
            __RPC__in IVsUIShell8 * This,
            /* [unique][in] */ __RPC__in_opt LPOLESTR title,
            /* [in] */ __RPC__in LPOLESTR text,
            /* [unique][in] */ __RPC__in_opt LPOLESTR helpFile,
            /* [in] */ DWORD helpId,
            /* [in] */ OLEMSGBUTTON buttons,
            /* [in] */ OLEMSGDEFBUTTON defaultButton,
            /* [in] */ OLEMSGICON icon,
            /* [in] */ VARIANT_BOOL allowSuppression,
            /* [out] */ __RPC__out VARIANT_BOOL *suppressed,
            /* [retval][out] */ __RPC__out ExtendedMessageBoxResult *result);
        
        END_INTERFACE
    } IVsUIShell8Vtbl;

    interface IVsUIShell8
    {
        CONST_VTBL struct IVsUIShell8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUIShell8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUIShell8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUIShell8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUIShell8_ShowMessageBoxEx(This,title,text,helpTopic,buttons,defaultButton,icon,allowSuppression,suppressed,result)	\
    ( (This)->lpVtbl -> ShowMessageBoxEx(This,title,text,helpTopic,buttons,defaultButton,icon,allowSuppression,suppressed,result) ) 

#define IVsUIShell8_ShowMessageBoxExWithHelpId(This,title,text,helpFile,helpId,buttons,defaultButton,icon,allowSuppression,suppressed,result)	\
    ( (This)->lpVtbl -> ShowMessageBoxExWithHelpId(This,title,text,helpFile,helpId,buttons,defaultButton,icon,allowSuppression,suppressed,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUIShell8_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


