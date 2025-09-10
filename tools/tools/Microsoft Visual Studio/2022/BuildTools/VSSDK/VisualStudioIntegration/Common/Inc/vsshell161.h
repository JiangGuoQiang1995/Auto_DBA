

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

#ifndef __vsshell161_h__
#define __vsshell161_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsDummy_FWD_DEFINED__
#define __IVsDummy_FWD_DEFINED__
typedef interface IVsDummy IVsDummy;

#endif 	/* __IVsDummy_FWD_DEFINED__ */


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


/* interface __MIDL_itf_vsshell161_0000_0000 */
/* [local] */ 

#pragma once
typedef DWORD VSCOOKIE;

typedef DWORD VSDOCCOOKIE;

#pragma once
#define VS_E_EDITORDISABLED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x2010)

enum __VSSHOWCONTEXTMENUOPTS2
    {
        VSCTXMENU_PLACETOP	= 0x10000,
        VSCTXMENU_PLACEBOTTOM	= 0x20000,
        VSCTXMENU_LEFTALIGN	= 0x40000,
        VSCTXMENU_RIGHTALIGN	= 0x80000
    } ;


extern RPC_IF_HANDLE __MIDL_itf_vsshell161_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell161_0000_0000_v0_0_s_ifspec;

#ifndef __IVsDummy_INTERFACE_DEFINED__
#define __IVsDummy_INTERFACE_DEFINED__

/* interface IVsDummy */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsDummy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e8edd020-efab-4aba-99a6-aba6345ae135")
    IVsDummy : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDummyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDummy * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDummy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDummy * This);
        
        END_INTERFACE
    } IVsDummyVtbl;

    interface IVsDummy
    {
        CONST_VTBL struct IVsDummyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDummy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDummy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDummy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDummy_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


