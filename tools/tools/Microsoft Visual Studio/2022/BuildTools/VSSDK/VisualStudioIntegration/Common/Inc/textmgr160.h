

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


#ifndef __textmgr160_h__
#define __textmgr160_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsDropdownBarClient4_FWD_DEFINED__
#define __IVsDropdownBarClient4_FWD_DEFINED__
typedef interface IVsDropdownBarClient4 IVsDropdownBarClient4;

#endif 	/* __IVsDropdownBarClient4_FWD_DEFINED__ */


/* header files for imported files */
#include "context.h"
#include "IVsQueryEditQuerySave2.h"
#include "IVsQueryEditQuerySave80.h"
#include "textmgr.h"
#include "textmgr2.h"
#include "textmgr100.h"
#include "textmgr110.h"
#include "textmgr120.h"
#include "ImageParameters140.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_textmgr160_0000_0000 */
/* [local] */ 

#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_textmgr160_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textmgr160_0000_0000_v0_0_s_ifspec;


#ifndef __TextMgr160_LIBRARY_DEFINED__
#define __TextMgr160_LIBRARY_DEFINED__

/* library TextMgr160 */
/* [version][uuid] */ 


enum _codewindowbehaviorflags2
    {
        CWB_DISABLEDIFF	= 0x4
    } ;
extern const __declspec(selectany) GUID GUID_EditorDpiContext = { 0xe80cba74, 0xd298, 0x4db5, { 0xa2, 0x8d, 0x65, 0x11, 0x67, 0x50, 0x31, 0xf4 } };

EXTERN_C const IID LIBID_TextMgr160;

#ifndef __IVsDropdownBarClient4_INTERFACE_DEFINED__
#define __IVsDropdownBarClient4_INTERFACE_DEFINED__

/* interface IVsDropdownBarClient4 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsDropdownBarClient4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38002213-5C24-4970-BD9D-C45491879A75")
    IVsDropdownBarClient4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEntryImage( 
            /* [in] */ long iCombo,
            /* [in] */ long iIndex,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDropdownBarClient4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDropdownBarClient4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDropdownBarClient4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDropdownBarClient4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEntryImage )( 
            __RPC__in IVsDropdownBarClient4 * This,
            /* [in] */ long iCombo,
            /* [in] */ long iIndex,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        END_INTERFACE
    } IVsDropdownBarClient4Vtbl;

    interface IVsDropdownBarClient4
    {
        CONST_VTBL struct IVsDropdownBarClient4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDropdownBarClient4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDropdownBarClient4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDropdownBarClient4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDropdownBarClient4_GetEntryImage(This,iCombo,iIndex,moniker)	\
    ( (This)->lpVtbl -> GetEntryImage(This,iCombo,iIndex,moniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDropdownBarClient4_INTERFACE_DEFINED__ */

#endif /* __TextMgr160_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


