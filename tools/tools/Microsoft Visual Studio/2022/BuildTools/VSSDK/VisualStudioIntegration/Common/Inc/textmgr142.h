

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

#ifndef __textmgr142_h__
#define __textmgr142_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsExpansionManager2_FWD_DEFINED__
#define __IVsExpansionManager2_FWD_DEFINED__
typedef interface IVsExpansionManager2 IVsExpansionManager2;

#endif 	/* __IVsExpansionManager2_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vsshell110.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_textmgr142_0000_0000 */
/* [local] */ 

#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textmgr142_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textmgr142_0000_0000_v0_0_s_ifspec;

#ifndef __IVsExpansionManager2_INTERFACE_DEFINED__
#define __IVsExpansionManager2_INTERFACE_DEFINED__

/* interface IVsExpansionManager2 */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsExpansionManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7A271CD7-A2F7-4EDA-B500-614CC3D039FB")
    IVsExpansionManager2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateExpansionsAsync( 
            /* [in] */ GUID guidLang,
            /* [in] */ BOOL fShortCutOnly,
            /* [size_is][in] */ __RPC__in_ecount_full(iCountTypes) BSTR *bstrTypes,
            /* [in] */ long iCountTypes,
            /* [in] */ BOOL fIncludeNULLType,
            /* [in] */ BOOL fIncludeDuplicates,
            /* [out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsExpansionManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsExpansionManager2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsExpansionManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsExpansionManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateExpansionsAsync )( 
            __RPC__in IVsExpansionManager2 * This,
            /* [in] */ GUID guidLang,
            /* [in] */ BOOL fShortCutOnly,
            /* [size_is][in] */ __RPC__in_ecount_full(iCountTypes) BSTR *bstrTypes,
            /* [in] */ long iCountTypes,
            /* [in] */ BOOL fIncludeNULLType,
            /* [in] */ BOOL fIncludeDuplicates,
            /* [out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsExpansionManager2Vtbl;

    interface IVsExpansionManager2
    {
        CONST_VTBL struct IVsExpansionManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsExpansionManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsExpansionManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsExpansionManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsExpansionManager2_EnumerateExpansionsAsync(This,guidLang,fShortCutOnly,bstrTypes,iCountTypes,fIncludeNULLType,fIncludeDuplicates,ppTask)	\
    ( (This)->lpVtbl -> EnumerateExpansionsAsync(This,guidLang,fShortCutOnly,bstrTypes,iCountTypes,fIncludeNULLType,fIncludeDuplicates,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsExpansionManager2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


