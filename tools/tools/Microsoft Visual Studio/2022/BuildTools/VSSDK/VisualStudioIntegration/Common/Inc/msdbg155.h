

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

#ifndef __msdbg155_h__
#define __msdbg155_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugDocumentContext155_FWD_DEFINED__
#define __IDebugDocumentContext155_FWD_DEFINED__
typedef interface IDebugDocumentContext155 IDebugDocumentContext155;

#endif 	/* __IDebugDocumentContext155_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg155_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/


extern RPC_IF_HANDLE __MIDL_itf_msdbg155_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg155_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugDocumentContext155_INTERFACE_DEFINED__
#define __IDebugDocumentContext155_INTERFACE_DEFINED__

/* interface IDebugDocumentContext155 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugDocumentContext155;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8111C77-5764-498D-9E48-5F1D37C5B538")
    IDebugDocumentContext155 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEmbeddedDocument( 
            /* [annotation][out] */ 
            _Out_  ULONG32 *pcBytes,
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDocumentContext155Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugDocumentContext155 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugDocumentContext155 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugDocumentContext155 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEmbeddedDocument )( 
            IDebugDocumentContext155 * This,
            /* [annotation][out] */ 
            _Out_  ULONG32 *pcBytes,
            /* [annotation][out] */ 
            _Outptr_result_buffer_(*pcBytes)  BYTE **ppBytes);
        
        END_INTERFACE
    } IDebugDocumentContext155Vtbl;

    interface IDebugDocumentContext155
    {
        CONST_VTBL struct IDebugDocumentContext155Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDocumentContext155_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDocumentContext155_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDocumentContext155_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDocumentContext155_GetEmbeddedDocument(This,pcBytes,ppBytes)	\
    ( (This)->lpVtbl -> GetEmbeddedDocument(This,pcBytes,ppBytes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDocumentContext155_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


