

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

#ifndef __vsshell155_h__
#define __vsshell155_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsUserSettings3_FWD_DEFINED__
#define __IVsUserSettings3_FWD_DEFINED__
typedef interface IVsUserSettings3 IVsUserSettings3;

#endif 	/* __IVsUserSettings3_FWD_DEFINED__ */


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
#include "vsshell153.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell155_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_vsshell155_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell155_0000_0000_v0_0_s_ifspec;

#ifndef __IVsUserSettings3_INTERFACE_DEFINED__
#define __IVsUserSettings3_INTERFACE_DEFINED__

/* interface IVsUserSettings3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUserSettings3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AD1813A-8691-468A-A777-BD0FDA5CF48E")
    IVsUserSettings3 : public IVsUserSettings2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ExportSettingsAsync( 
            /* [in] */ __RPC__in REFGUID category,
            /* [in] */ __RPC__in_opt IVsSettingsWriter *settingsWriter,
            /* [in] */ __RPC__in_opt IVsSettingsStorageContainer *storageContainer,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUserSettings3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUserSettings3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUserSettings3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUserSettings3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExportSettings )( 
            __RPC__in IVsUserSettings3 * This,
            /* [in] */ __RPC__in REFGUID category,
            /* [in] */ __RPC__in_opt IVsSettingsWriter *settingsWriter,
            /* [in] */ __RPC__in_opt IVsSettingsStorageContainer *storageContainer);
        
        HRESULT ( STDMETHODCALLTYPE *ImportSettings )( 
            __RPC__in IVsUserSettings3 * This,
            /* [in] */ __RPC__in REFGUID category,
            /* [in] */ __RPC__in_opt IVsSettingsReader *settingsReader,
            /* [in] */ UserSettingsFlags flags,
            /* [in] */ __RPC__in_opt IVsSettingsStorageContainer *storageContainer);
        
        HRESULT ( STDMETHODCALLTYPE *ExportSettingsAsync )( 
            __RPC__in IVsUserSettings3 * This,
            /* [in] */ __RPC__in REFGUID category,
            /* [in] */ __RPC__in_opt IVsSettingsWriter *settingsWriter,
            /* [in] */ __RPC__in_opt IVsSettingsStorageContainer *storageContainer,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IVsUserSettings3Vtbl;

    interface IVsUserSettings3
    {
        CONST_VTBL struct IVsUserSettings3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUserSettings3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUserSettings3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUserSettings3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUserSettings3_ExportSettings(This,category,settingsWriter,storageContainer)	\
    ( (This)->lpVtbl -> ExportSettings(This,category,settingsWriter,storageContainer) ) 

#define IVsUserSettings3_ImportSettings(This,category,settingsReader,flags,storageContainer)	\
    ( (This)->lpVtbl -> ImportSettings(This,category,settingsReader,flags,storageContainer) ) 


#define IVsUserSettings3_ExportSettingsAsync(This,category,settingsWriter,storageContainer,ppTask)	\
    ( (This)->lpVtbl -> ExportSettingsAsync(This,category,settingsWriter,storageContainer,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUserSettings3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell155_0000_0001 */
/* [local] */ 


enum __VSDBGLAUNCHFLAGS155
    {
        DBGLAUNCH_ParallelLaunch	= 0x2000000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS155;



extern RPC_IF_HANDLE __MIDL_itf_vsshell155_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell155_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


