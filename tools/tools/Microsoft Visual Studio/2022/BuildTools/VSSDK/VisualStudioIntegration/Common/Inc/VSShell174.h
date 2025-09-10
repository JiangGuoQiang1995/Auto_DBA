

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

#ifndef __VSShell174_h__
#define __VSShell174_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsAsyncCommandParameters_FWD_DEFINED__
#define __IVsAsyncCommandParameters_FWD_DEFINED__
typedef interface IVsAsyncCommandParameters IVsAsyncCommandParameters;

#endif 	/* __IVsAsyncCommandParameters_FWD_DEFINED__ */


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


/* interface __MIDL_itf_VSShell174_0000_0000 */
/* [local] */ 

#pragma once
#ifdef __cplusplus
#include "dte.h"
#include "textmgr2.h"
#include "guiddef.h"
#endif // __cplusplus
/* [v1_enum] */ 
enum __VSSPROPID13
    {
        VSSPROPID_EnableEnhancedTooltips	= -9088,
        VSHPROPID_SlowEnumeration	= -9089,
        VSSPROPID_FIRST13	= -9089
    } ;
typedef DWORD VSSPROPID13;



extern RPC_IF_HANDLE __MIDL_itf_VSShell174_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell174_0000_0000_v0_0_s_ifspec;

#ifndef __IVsAsyncCommandParameters_INTERFACE_DEFINED__
#define __IVsAsyncCommandParameters_INTERFACE_DEFINED__

/* interface IVsAsyncCommandParameters */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsAsyncCommandParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1553ee45-0c52-4aa4-ab21-f1769749bc7a")
    IVsAsyncCommandParameters : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ShouldRunAsync( 
            /* [retval][out] */ __RPC__out BOOL *res) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OriginalArgument( 
            /* [retval][out] */ __RPC__out VARIANT *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsAsyncCommandParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsAsyncCommandParameters * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsAsyncCommandParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsAsyncCommandParameters * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldRunAsync )( 
            __RPC__in IVsAsyncCommandParameters * This,
            /* [retval][out] */ __RPC__out BOOL *res);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OriginalArgument )( 
            __RPC__in IVsAsyncCommandParameters * This,
            /* [retval][out] */ __RPC__out VARIANT *res);
        
        END_INTERFACE
    } IVsAsyncCommandParametersVtbl;

    interface IVsAsyncCommandParameters
    {
        CONST_VTBL struct IVsAsyncCommandParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsAsyncCommandParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsAsyncCommandParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsAsyncCommandParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsAsyncCommandParameters_get_ShouldRunAsync(This,res)	\
    ( (This)->lpVtbl -> get_ShouldRunAsync(This,res) ) 

#define IVsAsyncCommandParameters_get_OriginalArgument(This,res)	\
    ( (This)->lpVtbl -> get_OriginalArgument(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsAsyncCommandParameters_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_VSShell174_0000_0001 */
/* [local] */ 

/* [v1_enum] */ 
enum __FCSTORAGEFLAGS2
    {
        FCSF_AVOIDPACKAGELOAD	= 0x10
    } ;


extern RPC_IF_HANDLE __MIDL_itf_VSShell174_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSShell174_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


