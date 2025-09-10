

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

#ifndef __vsshell167_h__
#define __vsshell167_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsWindowFrameNotify4_FWD_DEFINED__
#define __IVsWindowFrameNotify4_FWD_DEFINED__
typedef interface IVsWindowFrameNotify4 IVsWindowFrameNotify4;

#endif 	/* __IVsWindowFrameNotify4_FWD_DEFINED__ */


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
#include "vsshell164.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell167_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSOVERLAYICON4
    {
        OVERLAYICON_WARNING	= 6,
        OVERLAYICON_ALERT	= 7,
        OVERLAYICON_OFFLINE	= 4,
        OVERLAYICON_ONLINE	= 3,
        OVERLAYICON_ERROR	= 8,
        OVERLAYICON_FRIEND	= 9,
        OVERLAYICON_LOCK	= 10,
        OVERLAYICON_LOGINDISABLED	= 11,
        OVERLAYICON_PROPERTY	= 12,
        OVERLAYICON_PROTECTED	= 13,
        OVERLAYICON_SEALED	= 14,
        OVERLAYICON_STATIC	= 15,
        OVERLAYICON_TIMELINEMARKBLACK	= 16,
        OVERLAYICON_TIMELINEMARKGRAY	= 17,
        OVERLAYICON_TIMELINEMARKPURPLE	= 18,
        OVERLAYICON_TIMELINEMARKRED	= 19,
        OVERLAYICON_MAXINDEX4	= 19
    } ;
typedef DWORD VSOVERLAYICON4;


enum __VSFPROPID11
    {
        VSFPROPID_IsSharedDocument	= -5052,
        VSFPROPID_RelativePath	= -5053
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell167_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell167_0000_0000_v0_0_s_ifspec;

#ifndef __IVsWindowFrameNotify4_INTERFACE_DEFINED__
#define __IVsWindowFrameNotify4_INTERFACE_DEFINED__

/* interface IVsWindowFrameNotify4 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrameNotify4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23AF8C33-07FD-4542-B624-E9C2B1768185")
    IVsWindowFrameNotify4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnPropertyChanged( 
            /* [in] */ VSFPROPID propid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrameNotify4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrameNotify4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrameNotify4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrameNotify4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPropertyChanged )( 
            __RPC__in IVsWindowFrameNotify4 * This,
            /* [in] */ VSFPROPID propid);
        
        END_INTERFACE
    } IVsWindowFrameNotify4Vtbl;

    interface IVsWindowFrameNotify4
    {
        CONST_VTBL struct IVsWindowFrameNotify4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrameNotify4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrameNotify4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrameNotify4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrameNotify4_OnPropertyChanged(This,propid)	\
    ( (This)->lpVtbl -> OnPropertyChanged(This,propid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrameNotify4_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


