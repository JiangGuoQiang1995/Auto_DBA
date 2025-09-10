

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

#ifndef __VSShell178_h__
#define __VSShell178_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsRunningDocTableEvents8_FWD_DEFINED__
#define __IVsRunningDocTableEvents8_FWD_DEFINED__
typedef interface IVsRunningDocTableEvents8 IVsRunningDocTableEvents8;

#endif 	/* __IVsRunningDocTableEvents8_FWD_DEFINED__ */


#ifndef __IVsAsyncRunningDocumentTable4_FWD_DEFINED__
#define __IVsAsyncRunningDocumentTable4_FWD_DEFINED__
typedef interface IVsAsyncRunningDocumentTable4 IVsAsyncRunningDocumentTable4;

#endif 	/* __IVsAsyncRunningDocumentTable4_FWD_DEFINED__ */


#ifndef __IVsRunningDocumentTable7_FWD_DEFINED__
#define __IVsRunningDocumentTable7_FWD_DEFINED__
typedef interface IVsRunningDocumentTable7 IVsRunningDocumentTable7;

#endif 	/* __IVsRunningDocumentTable7_FWD_DEFINED__ */


#ifndef __IVsAsyncDeferredDocView2_FWD_DEFINED__
#define __IVsAsyncDeferredDocView2_FWD_DEFINED__
typedef interface IVsAsyncDeferredDocView2 IVsAsyncDeferredDocView2;

#endif 	/* __IVsAsyncDeferredDocView2_FWD_DEFINED__ */


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
#include "textfind100.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSShell178_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus
/* [v1_enum] */ 
enum _VSRDTFLAGSUPPER
    {
        RDT_InitializationFailed	= 0x1
    } ;
typedef DWORD VSRDTFLAGSUPPER;

/* [v1_enum] */ 
enum __FRAMESHOW5
    {
        FRAMESHOW_LoadingWindowActivated	= 0xf,
        FRAMESHOW_LoadingWindowShown	= 0x10
    } ;


extern RPC_IF_HANDLE __MIDL_itf_VSShell178_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell178_0000_0000_v0_0_s_ifspec;

#ifndef __IVsRunningDocTableEvents8_INTERFACE_DEFINED__
#define __IVsRunningDocTableEvents8_INTERFACE_DEFINED__

/* interface IVsRunningDocTableEvents8 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsRunningDocTableEvents8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("962b1102-ac20-4519-8c94-b3e30c3ea038")
    IVsRunningDocTableEvents8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeforeLoadingDocumentWindowShow( 
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [in] */ VARIANT_BOOL fIsFirstShow,
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRunningDocTableEvents8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRunningDocTableEvents8 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRunningDocTableEvents8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRunningDocTableEvents8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeLoadingDocumentWindowShow )( 
            __RPC__in IVsRunningDocTableEvents8 * This,
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [in] */ VARIANT_BOOL fIsFirstShow,
            /* [in] */ __RPC__in_opt IVsWindowFrame *pFrame);
        
        END_INTERFACE
    } IVsRunningDocTableEvents8Vtbl;

    interface IVsRunningDocTableEvents8
    {
        CONST_VTBL struct IVsRunningDocTableEvents8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRunningDocTableEvents8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRunningDocTableEvents8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRunningDocTableEvents8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRunningDocTableEvents8_OnBeforeLoadingDocumentWindowShow(This,dwDocumentCookie,fIsFirstShow,pFrame)	\
    ( (This)->lpVtbl -> OnBeforeLoadingDocumentWindowShow(This,dwDocumentCookie,fIsFirstShow,pFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRunningDocTableEvents8_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncRunningDocumentTable4_INTERFACE_DEFINED__
#define __IVsAsyncRunningDocumentTable4_INTERFACE_DEFINED__

/* interface IVsAsyncRunningDocumentTable4 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncRunningDocumentTable4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2b731902-8e20-4219-8294-9539ffdf2a80")
    IVsAsyncRunningDocumentTable4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDocumentDataAsync( 
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncRunningDocumentTable4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncRunningDocumentTable4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncRunningDocumentTable4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncRunningDocumentTable4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentDataAsync )( 
            __RPC__in IVsAsyncRunningDocumentTable4 * This,
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsAsyncRunningDocumentTable4Vtbl;

    interface IVsAsyncRunningDocumentTable4
    {
        CONST_VTBL struct IVsAsyncRunningDocumentTable4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncRunningDocumentTable4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncRunningDocumentTable4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncRunningDocumentTable4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncRunningDocumentTable4_GetDocumentDataAsync(This,dwDocumentCookie,ppTask)	\
    ( (This)->lpVtbl -> GetDocumentDataAsync(This,dwDocumentCookie,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncRunningDocumentTable4_INTERFACE_DEFINED__ */


#ifndef __IVsRunningDocumentTable7_INTERFACE_DEFINED__
#define __IVsRunningDocumentTable7_INTERFACE_DEFINED__

/* interface IVsRunningDocumentTable7 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsRunningDocumentTable7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c84c8c02-dc20-4f19-a794-a14070b3c2cf")
    IVsRunningDocumentTable7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDocumentFlagsEx( 
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [out] */ __RPC__out VSRDTFLAGSUPPER *pgrfUpperFlags,
            /* [out] */ __RPC__out VSRDTFLAGS *pgrfLowerFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsRunningDocumentTable7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsRunningDocumentTable7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsRunningDocumentTable7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsRunningDocumentTable7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentFlagsEx )( 
            __RPC__in IVsRunningDocumentTable7 * This,
            /* [in] */ VSCOOKIE dwDocumentCookie,
            /* [out] */ __RPC__out VSRDTFLAGSUPPER *pgrfUpperFlags,
            /* [out] */ __RPC__out VSRDTFLAGS *pgrfLowerFlags);
        
        END_INTERFACE
    } IVsRunningDocumentTable7Vtbl;

    interface IVsRunningDocumentTable7
    {
        CONST_VTBL struct IVsRunningDocumentTable7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsRunningDocumentTable7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsRunningDocumentTable7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsRunningDocumentTable7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsRunningDocumentTable7_GetDocumentFlagsEx(This,dwDocumentCookie,pgrfUpperFlags,pgrfLowerFlags)	\
    ( (This)->lpVtbl -> GetDocumentFlagsEx(This,dwDocumentCookie,pgrfUpperFlags,pgrfLowerFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsRunningDocumentTable7_INTERFACE_DEFINED__ */


#ifndef __IVsAsyncDeferredDocView2_INTERFACE_DEFINED__
#define __IVsAsyncDeferredDocView2_INTERFACE_DEFINED__

/* interface IVsAsyncDeferredDocView2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncDeferredDocView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5339b02-5620-4819-9b94-7225835024f9")
    IVsAsyncDeferredDocView2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadDocViewAsync( 
            /* [in] */ __RPC__in_opt IUnknown *pDocData,
            /* [in] */ GUID guidCommandUIContext,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncDeferredDocView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncDeferredDocView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncDeferredDocView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncDeferredDocView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadDocViewAsync )( 
            __RPC__in IVsAsyncDeferredDocView2 * This,
            /* [in] */ __RPC__in_opt IUnknown *pDocData,
            /* [in] */ GUID guidCommandUIContext,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **res);
        
        END_INTERFACE
    } IVsAsyncDeferredDocView2Vtbl;

    interface IVsAsyncDeferredDocView2
    {
        CONST_VTBL struct IVsAsyncDeferredDocView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncDeferredDocView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncDeferredDocView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncDeferredDocView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncDeferredDocView2_LoadDocViewAsync(This,pDocData,guidCommandUIContext,res)	\
    ( (This)->lpVtbl -> LoadDocViewAsync(This,pDocData,guidCommandUIContext,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncDeferredDocView2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


