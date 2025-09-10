

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

#ifndef __vsshell1610_h__
#define __vsshell1610_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsDummy2_FWD_DEFINED__
#define __IVsDummy2_FWD_DEFINED__
typedef interface IVsDummy2 IVsDummy2;

#endif 	/* __IVsDummy2_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell1610_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once

enum __VSCREATEEDITORFLAGS3
    {
        CEF_SKIPDEFERRAL	= 0x20
    } ;
typedef DWORD VSCREATEEDITORFLAGS3;


enum __VSOSPEFLAGS3
    {
        OSPE_SKIPDEFERRAL	= 0x200000
    } ;
typedef DWORD VSOSPEFLAGS3;



extern RPC_IF_HANDLE __MIDL_itf_vsshell1610_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell1610_0000_0000_v0_0_s_ifspec;

#ifndef __IVsDummy2_INTERFACE_DEFINED__
#define __IVsDummy2_INTERFACE_DEFINED__

/* interface IVsDummy2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsDummy2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB2BDEEB-6331-4EAE-855E-43FDB0918AB4")
    IVsDummy2 : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDummy2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDummy2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDummy2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDummy2 * This);
        
        END_INTERFACE
    } IVsDummy2Vtbl;

    interface IVsDummy2
    {
        CONST_VTBL struct IVsDummy2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDummy2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDummy2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDummy2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDummy2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


