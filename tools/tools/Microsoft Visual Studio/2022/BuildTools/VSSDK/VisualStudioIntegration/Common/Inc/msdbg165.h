

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

#ifndef __msdbg165_h__
#define __msdbg165_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugDoNotUseThisInterface165_FWD_DEFINED__
#define __IDebugDoNotUseThisInterface165_FWD_DEFINED__
typedef interface IDebugDoNotUseThisInterface165 IDebugDoNotUseThisInterface165;

#endif 	/* __IDebugDoNotUseThisInterface165_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg165_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
#define DBG_EXATTRIB_EXPANSION_HAS_SIDE_EFFECTS  0x0000000000000040


extern RPC_IF_HANDLE __MIDL_itf_msdbg165_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg165_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugDoNotUseThisInterface165_INTERFACE_DEFINED__
#define __IDebugDoNotUseThisInterface165_INTERFACE_DEFINED__

/* interface IDebugDoNotUseThisInterface165 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugDoNotUseThisInterface165;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2D94AE8-5EE6-4ED2-BCEA-EAE8CBF261FB")
    IDebugDoNotUseThisInterface165 : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDoNotUseThisInterface165Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugDoNotUseThisInterface165 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugDoNotUseThisInterface165 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugDoNotUseThisInterface165 * This);
        
        END_INTERFACE
    } IDebugDoNotUseThisInterface165Vtbl;

    interface IDebugDoNotUseThisInterface165
    {
        CONST_VTBL struct IDebugDoNotUseThisInterface165Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDoNotUseThisInterface165_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDoNotUseThisInterface165_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDoNotUseThisInterface165_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDoNotUseThisInterface165_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


