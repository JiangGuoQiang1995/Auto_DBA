

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

#ifndef __textfind100_h__
#define __textfind100_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SVsFindManager_FWD_DEFINED__
#define __SVsFindManager_FWD_DEFINED__
typedef interface SVsFindManager SVsFindManager;

#endif 	/* __SVsFindManager_FWD_DEFINED__ */


#ifndef __IVsFindManager_FWD_DEFINED__
#define __IVsFindManager_FWD_DEFINED__
typedef interface IVsFindManager IVsFindManager;

#endif 	/* __IVsFindManager_FWD_DEFINED__ */


/* header files for imported files */
#include "textfind.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_textfind100_0000_0000 */
/* [local] */ 


#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textfind100_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textfind100_0000_0000_v0_0_s_ifspec;

#ifndef __SVsFindManager_INTERFACE_DEFINED__
#define __SVsFindManager_INTERFACE_DEFINED__

/* interface SVsFindManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsFindManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("912CA552-54A3-4CCA-8F50-DBCF322FB870")
    SVsFindManager : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsFindManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsFindManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsFindManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsFindManager * This);
        
        END_INTERFACE
    } SVsFindManagerVtbl;

    interface SVsFindManager
    {
        CONST_VTBL struct SVsFindManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsFindManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsFindManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsFindManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsFindManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_textfind100_0000_0001 */
/* [local] */ 

#define SID_SVsFindManager IID_SVsFindManager


extern RPC_IF_HANDLE __MIDL_itf_textfind100_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textfind100_0000_0001_v0_0_s_ifspec;

#ifndef __IVsFindManager_INTERFACE_DEFINED__
#define __IVsFindManager_INTERFACE_DEFINED__

/* interface IVsFindManager */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsFindManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53BE8AC6-1975-4240-8F60-367665A7E525")
    IVsFindManager : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTarget( 
            /* [retval][out] */ __RPC__deref_out_opt IVsFindTarget **ppTarget) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsFindManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsFindManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsFindManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsFindManager * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTarget )( 
            __RPC__in IVsFindManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsFindTarget **ppTarget);
        
        END_INTERFACE
    } IVsFindManagerVtbl;

    interface IVsFindManager
    {
        CONST_VTBL struct IVsFindManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsFindManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsFindManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsFindManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsFindManager_get_CurrentTarget(This,ppTarget)	\
    ( (This)->lpVtbl -> get_CurrentTarget(This,ppTarget) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsFindManager_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


