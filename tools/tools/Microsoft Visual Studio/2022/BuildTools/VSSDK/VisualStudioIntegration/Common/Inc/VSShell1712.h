

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

#ifndef __VSShell1712_h__
#define __VSShell1712_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsFreeThreadedPackageLoadEvents_FWD_DEFINED__
#define __IVsFreeThreadedPackageLoadEvents_FWD_DEFINED__
typedef interface IVsFreeThreadedPackageLoadEvents IVsFreeThreadedPackageLoadEvents;

#endif 	/* __IVsFreeThreadedPackageLoadEvents_FWD_DEFINED__ */


#ifndef __IVsShell8_FWD_DEFINED__
#define __IVsShell8_FWD_DEFINED__
typedef interface IVsShell8 IVsShell8;

#endif 	/* __IVsShell8_FWD_DEFINED__ */


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


/* interface __MIDL_itf_VSShell1712_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_VSShell1712_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell1712_0000_0000_v0_0_s_ifspec;

#ifndef __IVsFreeThreadedPackageLoadEvents_INTERFACE_DEFINED__
#define __IVsFreeThreadedPackageLoadEvents_INTERFACE_DEFINED__

/* interface IVsFreeThreadedPackageLoadEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsFreeThreadedPackageLoadEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("202c0d8b-6ef7-4bbd-b696-52f942aace3f")
    IVsFreeThreadedPackageLoadEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnPackageLoaded( 
            __RPC__in REFGUID refPackageGuid,
            /* [in] */ __RPC__in_opt IVsPackage *pPackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsFreeThreadedPackageLoadEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsFreeThreadedPackageLoadEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsFreeThreadedPackageLoadEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsFreeThreadedPackageLoadEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPackageLoaded )( 
            __RPC__in IVsFreeThreadedPackageLoadEvents * This,
            __RPC__in REFGUID refPackageGuid,
            /* [in] */ __RPC__in_opt IVsPackage *pPackage);
        
        END_INTERFACE
    } IVsFreeThreadedPackageLoadEventsVtbl;

    interface IVsFreeThreadedPackageLoadEvents
    {
        CONST_VTBL struct IVsFreeThreadedPackageLoadEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsFreeThreadedPackageLoadEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsFreeThreadedPackageLoadEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsFreeThreadedPackageLoadEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsFreeThreadedPackageLoadEvents_OnPackageLoaded(This,refPackageGuid,pPackage)	\
    ( (This)->lpVtbl -> OnPackageLoaded(This,refPackageGuid,pPackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsFreeThreadedPackageLoadEvents_INTERFACE_DEFINED__ */


#ifndef __IVsShell8_INTERFACE_DEFINED__
#define __IVsShell8_INTERFACE_DEFINED__

/* interface IVsShell8 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsShell8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa956419-6594-4568-a33a-97a7a96d0d65")
    IVsShell8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseFreeThreadedPackageLoadEvents( 
            /* [in] */ __RPC__in_opt IVsFreeThreadedPackageLoadEvents *pEventSink,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseFreeThreadedPackageLoadEvents( 
            /* [in] */ VSCOOKIE cookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsShell8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsShell8 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsShell8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsShell8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseFreeThreadedPackageLoadEvents )( 
            __RPC__in IVsShell8 * This,
            /* [in] */ __RPC__in_opt IVsFreeThreadedPackageLoadEvents *pEventSink,
            /* [retval][out] */ __RPC__out VSCOOKIE *pCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseFreeThreadedPackageLoadEvents )( 
            __RPC__in IVsShell8 * This,
            /* [in] */ VSCOOKIE cookie);
        
        END_INTERFACE
    } IVsShell8Vtbl;

    interface IVsShell8
    {
        CONST_VTBL struct IVsShell8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsShell8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsShell8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsShell8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsShell8_AdviseFreeThreadedPackageLoadEvents(This,pEventSink,pCookie)	\
    ( (This)->lpVtbl -> AdviseFreeThreadedPackageLoadEvents(This,pEventSink,pCookie) ) 

#define IVsShell8_UnadviseFreeThreadedPackageLoadEvents(This,cookie)	\
    ( (This)->lpVtbl -> UnadviseFreeThreadedPackageLoadEvents(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsShell8_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


