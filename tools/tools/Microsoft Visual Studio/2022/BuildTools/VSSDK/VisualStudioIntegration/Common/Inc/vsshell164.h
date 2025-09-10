

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

#ifndef __vsshell164_h__
#define __vsshell164_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsWindowFrame6_FWD_DEFINED__
#define __IVsWindowFrame6_FWD_DEFINED__
typedef interface IVsWindowFrame6 IVsWindowFrame6;

#endif 	/* __IVsWindowFrame6_FWD_DEFINED__ */


#ifndef __IVsWindowFrameEvents2_FWD_DEFINED__
#define __IVsWindowFrameEvents2_FWD_DEFINED__
typedef interface IVsWindowFrameEvents2 IVsWindowFrameEvents2;

#endif 	/* __IVsWindowFrameEvents2_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell164_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once
extern const __declspec(selectany) GUID UICONTEXT_CloudEnvironmentConnected = { 0xce73bf3d, 0xd614, 0x438a, { 0x9b, 0x93, 0x24, 0xe9, 0xe9, 0xd7, 0x45, 0x3a } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell164_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell164_0000_0000_v0_0_s_ifspec;

#ifndef __IVsWindowFrame6_INTERFACE_DEFINED__
#define __IVsWindowFrame6_INTERFACE_DEFINED__

/* interface IVsWindowFrame6 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrame6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04fd91be-9184-4543-9526-8bccc4ed850d")
    IVsWindowFrame6 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsInSameTabGroup( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *other,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrame6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrame6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrame6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrame6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsInSameTabGroup )( 
            __RPC__in IVsWindowFrame6 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *other,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *result);
        
        END_INTERFACE
    } IVsWindowFrame6Vtbl;

    interface IVsWindowFrame6
    {
        CONST_VTBL struct IVsWindowFrame6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrame6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrame6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrame6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrame6_IsInSameTabGroup(This,other,result)	\
    ( (This)->lpVtbl -> IsInSameTabGroup(This,other,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrame6_INTERFACE_DEFINED__ */


#ifndef __IVsWindowFrameEvents2_INTERFACE_DEFINED__
#define __IVsWindowFrameEvents2_INTERFACE_DEFINED__

/* interface IVsWindowFrameEvents2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrameEvents2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("104B9B1B-9488-4608-A11D-7C3AAA65E407")
    IVsWindowFrameEvents2 : public IVsWindowFrameEvents
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFrameViewReplaced( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrameEvents2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrameEvents2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrameEvents2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameCreated )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameDestroyed )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameIsVisibleChanged )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsVisible);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameIsOnScreenChanged )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsOnScreen);
        
        HRESULT ( STDMETHODCALLTYPE *OnActiveFrameChanged )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *oldFrame,
            /* [in] */ __RPC__in_opt IVsWindowFrame *newFrame);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameViewReplaced )( 
            __RPC__in IVsWindowFrameEvents2 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame);
        
        END_INTERFACE
    } IVsWindowFrameEvents2Vtbl;

    interface IVsWindowFrameEvents2
    {
        CONST_VTBL struct IVsWindowFrameEvents2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrameEvents2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrameEvents2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrameEvents2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrameEvents2_OnFrameCreated(This,frame)	\
    ( (This)->lpVtbl -> OnFrameCreated(This,frame) ) 

#define IVsWindowFrameEvents2_OnFrameDestroyed(This,frame)	\
    ( (This)->lpVtbl -> OnFrameDestroyed(This,frame) ) 

#define IVsWindowFrameEvents2_OnFrameIsVisibleChanged(This,frame,newIsVisible)	\
    ( (This)->lpVtbl -> OnFrameIsVisibleChanged(This,frame,newIsVisible) ) 

#define IVsWindowFrameEvents2_OnFrameIsOnScreenChanged(This,frame,newIsOnScreen)	\
    ( (This)->lpVtbl -> OnFrameIsOnScreenChanged(This,frame,newIsOnScreen) ) 

#define IVsWindowFrameEvents2_OnActiveFrameChanged(This,oldFrame,newFrame)	\
    ( (This)->lpVtbl -> OnActiveFrameChanged(This,oldFrame,newFrame) ) 


#define IVsWindowFrameEvents2_OnFrameViewReplaced(This,frame)	\
    ( (This)->lpVtbl -> OnFrameViewReplaced(This,frame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrameEvents2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


