

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

#ifndef __msdbg150_h__
#define __msdbg150_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugExceptionCondition_FWD_DEFINED__
#define __IDebugExceptionCondition_FWD_DEFINED__
typedef interface IDebugExceptionCondition IDebugExceptionCondition;

#endif 	/* __IDebugExceptionCondition_FWD_DEFINED__ */


#ifndef __IDebugExceptionConditionList_FWD_DEFINED__
#define __IDebugExceptionConditionList_FWD_DEFINED__
typedef interface IDebugExceptionConditionList IDebugExceptionConditionList;

#endif 	/* __IDebugExceptionConditionList_FWD_DEFINED__ */


#ifndef __IDebugSession150_FWD_DEFINED__
#define __IDebugSession150_FWD_DEFINED__
typedef interface IDebugSession150 IDebugSession150;

#endif 	/* __IDebugSession150_FWD_DEFINED__ */


#ifndef __IEnumDebugExceptionInfo150_FWD_DEFINED__
#define __IEnumDebugExceptionInfo150_FWD_DEFINED__
typedef interface IEnumDebugExceptionInfo150 IEnumDebugExceptionInfo150;

#endif 	/* __IEnumDebugExceptionInfo150_FWD_DEFINED__ */


#ifndef __IDebugExceptionDetails_FWD_DEFINED__
#define __IDebugExceptionDetails_FWD_DEFINED__
typedef interface IDebugExceptionDetails IDebugExceptionDetails;

#endif 	/* __IDebugExceptionDetails_FWD_DEFINED__ */


#ifndef __IDebugExceptionEvent150_FWD_DEFINED__
#define __IDebugExceptionEvent150_FWD_DEFINED__
typedef interface IDebugExceptionEvent150 IDebugExceptionEvent150;

#endif 	/* __IDebugExceptionEvent150_FWD_DEFINED__ */


#ifndef __IDebugExceptionSettingsChangeNotification150_FWD_DEFINED__
#define __IDebugExceptionSettingsChangeNotification150_FWD_DEFINED__
typedef interface IDebugExceptionSettingsChangeNotification150 IDebugExceptionSettingsChangeNotification150;

#endif 	/* __IDebugExceptionSettingsChangeNotification150_FWD_DEFINED__ */


#ifndef __IDebugExceptionSettingsManager150_FWD_DEFINED__
#define __IDebugExceptionSettingsManager150_FWD_DEFINED__
typedef interface IDebugExceptionSettingsManager150 IDebugExceptionSettingsManager150;

#endif 	/* __IDebugExceptionSettingsManager150_FWD_DEFINED__ */


#ifndef __IDebugEngine150_FWD_DEFINED__
#define __IDebugEngine150_FWD_DEFINED__
typedef interface IDebugEngine150 IDebugEngine150;

#endif 	/* __IDebugEngine150_FWD_DEFINED__ */


#ifndef __IDebugQueryPerformanceCountersCompletionRoutine150_FWD_DEFINED__
#define __IDebugQueryPerformanceCountersCompletionRoutine150_FWD_DEFINED__
typedef interface IDebugQueryPerformanceCountersCompletionRoutine150 IDebugQueryPerformanceCountersCompletionRoutine150;

#endif 	/* __IDebugQueryPerformanceCountersCompletionRoutine150_FWD_DEFINED__ */


#ifndef __IDebugProgram150_FWD_DEFINED__
#define __IDebugProgram150_FWD_DEFINED__
typedef interface IDebugProgram150 IDebugProgram150;

#endif 	/* __IDebugProgram150_FWD_DEFINED__ */


#ifndef __IVsDebuggerScriptInstallCheck_FWD_DEFINED__
#define __IVsDebuggerScriptInstallCheck_FWD_DEFINED__
typedef interface IVsDebuggerScriptInstallCheck IVsDebuggerScriptInstallCheck;

#endif 	/* __IVsDebuggerScriptInstallCheck_FWD_DEFINED__ */


#ifndef __IDebugCodeContextInfoCompletionRoutine150_FWD_DEFINED__
#define __IDebugCodeContextInfoCompletionRoutine150_FWD_DEFINED__
typedef interface IDebugCodeContextInfoCompletionRoutine150 IDebugCodeContextInfoCompletionRoutine150;

#endif 	/* __IDebugCodeContextInfoCompletionRoutine150_FWD_DEFINED__ */


#ifndef __IDebugCodeContext150_FWD_DEFINED__
#define __IDebugCodeContext150_FWD_DEFINED__
typedef interface IDebugCodeContext150 IDebugCodeContext150;

#endif 	/* __IDebugCodeContext150_FWD_DEFINED__ */


#ifndef __IDebugProperty150_FWD_DEFINED__
#define __IDebugProperty150_FWD_DEFINED__
typedef interface IDebugProperty150 IDebugProperty150;

#endif 	/* __IDebugProperty150_FWD_DEFINED__ */


#ifndef __IDebugSourceLinkInfo150_FWD_DEFINED__
#define __IDebugSourceLinkInfo150_FWD_DEFINED__
typedef interface IDebugSourceLinkInfo150 IDebugSourceLinkInfo150;

#endif 	/* __IDebugSourceLinkInfo150_FWD_DEFINED__ */


#ifndef __IDebugSourceLinkDocumentContext150_FWD_DEFINED__
#define __IDebugSourceLinkDocumentContext150_FWD_DEFINED__
typedef interface IDebugSourceLinkDocumentContext150 IDebugSourceLinkDocumentContext150;

#endif 	/* __IDebugSourceLinkDocumentContext150_FWD_DEFINED__ */


#ifndef __IDebugDocumentContext150_FWD_DEFINED__
#define __IDebugDocumentContext150_FWD_DEFINED__
typedef interface IDebugDocumentContext150 IDebugDocumentContext150;

#endif 	/* __IDebugDocumentContext150_FWD_DEFINED__ */


#ifndef __IDebugTelemetryDetailsEvent150_FWD_DEFINED__
#define __IDebugTelemetryDetailsEvent150_FWD_DEFINED__
typedef interface IDebugTelemetryDetailsEvent150 IDebugTelemetryDetailsEvent150;

#endif 	/* __IDebugTelemetryDetailsEvent150_FWD_DEFINED__ */


#ifndef __IEnumDebugTelemetryProperty150_FWD_DEFINED__
#define __IEnumDebugTelemetryProperty150_FWD_DEFINED__
typedef interface IEnumDebugTelemetryProperty150 IEnumDebugTelemetryProperty150;

#endif 	/* __IEnumDebugTelemetryProperty150_FWD_DEFINED__ */


#ifndef __ISymbolPathOptionList150_FWD_DEFINED__
#define __ISymbolPathOptionList150_FWD_DEFINED__
typedef interface ISymbolPathOptionList150 ISymbolPathOptionList150;

#endif 	/* __ISymbolPathOptionList150_FWD_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings150_FWD_DEFINED__
#define __IVsDebuggerSymbolSettings150_FWD_DEFINED__
typedef interface IVsDebuggerSymbolSettings150 IVsDebuggerSymbolSettings150;

#endif 	/* __IVsDebuggerSymbolSettings150_FWD_DEFINED__ */


#ifndef __IDebugLostBreakStateEvent150_FWD_DEFINED__
#define __IDebugLostBreakStateEvent150_FWD_DEFINED__
typedef interface IDebugLostBreakStateEvent150 IDebugLostBreakStateEvent150;

#endif 	/* __IDebugLostBreakStateEvent150_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg150_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/



extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugExceptionCondition_INTERFACE_DEFINED__
#define __IDebugExceptionCondition_INTERFACE_DEFINED__

/* interface IDebugExceptionCondition */
/* [unique][uuid][object] */ 

#ifndef _MSC_VER
typedef enum EXCEPTION_CONDITION_TYPE : unsigned int
{
    ModuleName,
    FunctionName
} EXCEPTION_CONDITION_TYPE;
#else
typedef 
enum EXCEPTION_CONDITION_TYPE
    {
        ModuleName	= 0,
        FunctionName	= ( ModuleName + 1 ) 
    } 	EXCEPTION_CONDITION_TYPE;

#endif
#ifndef _MSC_VER
typedef enum EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR : unsigned int
{
    TopFrameOnly,
    Full
} EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR;
#else
typedef 
enum EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR
    {
        TopFrameOnly	= 0,
        Full	= ( TopFrameOnly + 1 ) 
    } 	EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR;

#endif
#ifndef _MSC_VER
typedef enum EXCEPTION_CONDITION_OPERATOR : unsigned int
{
    Equals,
    NotEquals
} EXCEPTION_CONDITION_OPERATOR;
#else
typedef 
enum EXCEPTION_CONDITION_OPERATOR
    {
        Equals	= 0,
        NotEquals	= ( Equals + 1 ) 
    } 	EXCEPTION_CONDITION_OPERATOR;

#endif

EXTERN_C const IID IID_IDebugExceptionCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBFD0196-B9A4-48FC-AB5E-77E4A2EFD887")
    IDebugExceptionCondition : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_TYPE *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CallStackBehavior( 
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Operator( 
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_OPERATOR *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExceptionCondition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExceptionCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExceptionCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IDebugExceptionCondition * This,
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_TYPE *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CallStackBehavior )( 
            __RPC__in IDebugExceptionCondition * This,
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_CALLSTACK_BEHAVIOR *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Operator )( 
            __RPC__in IDebugExceptionCondition * This,
            /* [retval][out] */ __RPC__out EXCEPTION_CONDITION_OPERATOR *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in IDebugExceptionCondition * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        END_INTERFACE
    } IDebugExceptionConditionVtbl;

    interface IDebugExceptionCondition
    {
        CONST_VTBL struct IDebugExceptionConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionCondition_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IDebugExceptionCondition_get_CallStackBehavior(This,pVal)	\
    ( (This)->lpVtbl -> get_CallStackBehavior(This,pVal) ) 

#define IDebugExceptionCondition_get_Operator(This,pVal)	\
    ( (This)->lpVtbl -> get_Operator(This,pVal) ) 

#define IDebugExceptionCondition_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionCondition_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionConditionList_INTERFACE_DEFINED__
#define __IDebugExceptionConditionList_INTERFACE_DEFINED__

/* interface IDebugExceptionConditionList */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugExceptionConditionList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14FB02FF-2D1B-496A-96C7-2F565BBFCEA4")
    IDebugExceptionConditionList : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lIndex,
            /* [retval][out] */ __RPC__deref_out_opt IDebugExceptionCondition **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionConditionListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExceptionConditionList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExceptionConditionList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExceptionConditionList * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IDebugExceptionConditionList * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IDebugExceptionConditionList * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ __RPC__deref_out_opt IDebugExceptionCondition **ppVal);
        
        END_INTERFACE
    } IDebugExceptionConditionListVtbl;

    interface IDebugExceptionConditionList
    {
        CONST_VTBL struct IDebugExceptionConditionListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionConditionList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionConditionList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionConditionList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionConditionList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IDebugExceptionConditionList_get_Item(This,lIndex,ppVal)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionConditionList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0002_v0_0_s_ifspec;

#ifndef __IDebugSession150_INTERFACE_DEFINED__
#define __IDebugSession150_INTERFACE_DEFINED__

/* interface IDebugSession150 */
/* [unique][uuid][object] */ 

typedef struct tagEXCEPTION_INFO150
    {
    IDebugProgram2 *pProgram;
    BSTR bstrProgramName;
    BSTR bstrExceptionName;
    DWORD dwCode;
    EXCEPTION_STATE dwState;
    GUID guidType;
    IDebugExceptionConditionList *pConditions;
    } 	EXCEPTION_INFO150;


EXTERN_C const IID IID_IDebugSession150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B762667-EB09-4B7E-AC1A-5BAABCCC412A")
    IDebugSession150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetExceptions( 
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveSetExceptions( 
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDefaultExceptions( 
            /* [full][in] */ __RPC__in_opt EXCEPTION_INFO150 *pParentException,
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSetExceptions( 
            /* [in] */ __RPC__in REFGUID guidType,
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSession150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSession150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSession150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSession150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetExceptions )( 
            __RPC__in IDebugSession150 * This,
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveSetExceptions )( 
            __RPC__in IDebugSession150 * This,
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDefaultExceptions )( 
            __RPC__in IDebugSession150 * This,
            /* [full][in] */ __RPC__in_opt EXCEPTION_INFO150 *pParentException,
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSetExceptions )( 
            __RPC__in IDebugSession150 * This,
            /* [in] */ __RPC__in REFGUID guidType,
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum);
        
        END_INTERFACE
    } IDebugSession150Vtbl;

    interface IDebugSession150
    {
        CONST_VTBL struct IDebugSession150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSession150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSession150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSession150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSession150_SetExceptions(This,pExceptionList)	\
    ( (This)->lpVtbl -> SetExceptions(This,pExceptionList) ) 

#define IDebugSession150_RemoveSetExceptions(This,pExceptionList)	\
    ( (This)->lpVtbl -> RemoveSetExceptions(This,pExceptionList) ) 

#define IDebugSession150_EnumDefaultExceptions(This,pParentException,ppEnum)	\
    ( (This)->lpVtbl -> EnumDefaultExceptions(This,pParentException,ppEnum) ) 

#define IDebugSession150_EnumSetExceptions(This,guidType,ppEnum)	\
    ( (This)->lpVtbl -> EnumSetExceptions(This,guidType,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSession150_INTERFACE_DEFINED__ */


#ifndef __IEnumDebugExceptionInfo150_INTERFACE_DEFINED__
#define __IEnumDebugExceptionInfo150_INTERFACE_DEFINED__

/* interface IEnumDebugExceptionInfo150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumDebugExceptionInfo150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("418C94A5-23B8-461E-A117-69543CE0DB36")
    IEnumDebugExceptionInfo150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXCEPTION_INFO150 *rgelt,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out ULONG *pcelt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumDebugExceptionInfo150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumDebugExceptionInfo150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumDebugExceptionInfo150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumDebugExceptionInfo150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumDebugExceptionInfo150 * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXCEPTION_INFO150 *rgelt,
            /* [out][in] */ __RPC__inout ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumDebugExceptionInfo150 * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumDebugExceptionInfo150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumDebugExceptionInfo150 * This,
            /* [out] */ __RPC__deref_out_opt IEnumDebugExceptionInfo150 **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumDebugExceptionInfo150 * This,
            /* [out] */ __RPC__out ULONG *pcelt);
        
        END_INTERFACE
    } IEnumDebugExceptionInfo150Vtbl;

    interface IEnumDebugExceptionInfo150
    {
        CONST_VTBL struct IEnumDebugExceptionInfo150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDebugExceptionInfo150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDebugExceptionInfo150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDebugExceptionInfo150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDebugExceptionInfo150_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumDebugExceptionInfo150_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumDebugExceptionInfo150_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDebugExceptionInfo150_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumDebugExceptionInfo150_GetCount(This,pcelt)	\
    ( (This)->lpVtbl -> GetCount(This,pcelt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDebugExceptionInfo150_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionDetails_INTERFACE_DEFINED__
#define __IDebugExceptionDetails_INTERFACE_DEFINED__

/* interface IDebugExceptionDetails */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionDetails;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15030210-D2C0-410D-9044-9F8091B992D8")
    IDebugExceptionDetails : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFormattedDescription( 
            /* [annotation][in] */ 
            _In_opt_  IDebugStackFrame2 *pStackFrameContext,
            /* [out] */ BSTR *pbstrDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExceptionMessage( 
            /* [out] */ BSTR *pbstrMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeName( 
            /* [in] */ BOOL fFullName,
            /* [out] */ BSTR *pbstrTypeName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [out] */ BSTR *pbstrSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHResult( 
            /* [out] */ DWORD *pHResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInnerExceptionDetails( 
            /* [out] */ IDebugExceptionDetails **ppDetails) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStackTrace( 
            /* [out] */ BSTR *pbstrMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExceptionObjectExpression( 
            /* [out] */ BSTR *pbstrExceptionObjectExpression) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionDetailsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionDetails * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionDetails * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionDetails * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormattedDescription )( 
            IDebugExceptionDetails * This,
            /* [annotation][in] */ 
            _In_opt_  IDebugStackFrame2 *pStackFrameContext,
            /* [out] */ BSTR *pbstrDescription);
        
        HRESULT ( STDMETHODCALLTYPE *GetExceptionMessage )( 
            IDebugExceptionDetails * This,
            /* [out] */ BSTR *pbstrMessage);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IDebugExceptionDetails * This,
            /* [in] */ BOOL fFullName,
            /* [out] */ BSTR *pbstrTypeName);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IDebugExceptionDetails * This,
            /* [out] */ BSTR *pbstrSource);
        
        HRESULT ( STDMETHODCALLTYPE *GetHResult )( 
            IDebugExceptionDetails * This,
            /* [out] */ DWORD *pHResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerExceptionDetails )( 
            IDebugExceptionDetails * This,
            /* [out] */ IDebugExceptionDetails **ppDetails);
        
        HRESULT ( STDMETHODCALLTYPE *GetStackTrace )( 
            IDebugExceptionDetails * This,
            /* [out] */ BSTR *pbstrMessage);
        
        HRESULT ( STDMETHODCALLTYPE *GetExceptionObjectExpression )( 
            IDebugExceptionDetails * This,
            /* [out] */ BSTR *pbstrExceptionObjectExpression);
        
        END_INTERFACE
    } IDebugExceptionDetailsVtbl;

    interface IDebugExceptionDetails
    {
        CONST_VTBL struct IDebugExceptionDetailsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionDetails_GetFormattedDescription(This,pStackFrameContext,pbstrDescription)	\
    ( (This)->lpVtbl -> GetFormattedDescription(This,pStackFrameContext,pbstrDescription) ) 

#define IDebugExceptionDetails_GetExceptionMessage(This,pbstrMessage)	\
    ( (This)->lpVtbl -> GetExceptionMessage(This,pbstrMessage) ) 

#define IDebugExceptionDetails_GetTypeName(This,fFullName,pbstrTypeName)	\
    ( (This)->lpVtbl -> GetTypeName(This,fFullName,pbstrTypeName) ) 

#define IDebugExceptionDetails_GetSource(This,pbstrSource)	\
    ( (This)->lpVtbl -> GetSource(This,pbstrSource) ) 

#define IDebugExceptionDetails_GetHResult(This,pHResult)	\
    ( (This)->lpVtbl -> GetHResult(This,pHResult) ) 

#define IDebugExceptionDetails_GetInnerExceptionDetails(This,ppDetails)	\
    ( (This)->lpVtbl -> GetInnerExceptionDetails(This,ppDetails) ) 

#define IDebugExceptionDetails_GetStackTrace(This,pbstrMessage)	\
    ( (This)->lpVtbl -> GetStackTrace(This,pbstrMessage) ) 

#define IDebugExceptionDetails_GetExceptionObjectExpression(This,pbstrExceptionObjectExpression)	\
    ( (This)->lpVtbl -> GetExceptionObjectExpression(This,pbstrExceptionObjectExpression) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionDetails_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionEvent150_INTERFACE_DEFINED__
#define __IDebugExceptionEvent150_INTERFACE_DEFINED__

/* interface IDebugExceptionEvent150 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionEvent150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A91AD17C-1174-4563-9C1E-56C837C2ADEE")
    IDebugExceptionEvent150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExceptionDetails( 
            /* [out] */ IDebugExceptionDetails **ppDetails) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetException( 
            /* [out] */ EXCEPTION_INFO150 *pExceptionInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionEvent150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionEvent150 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionEvent150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionEvent150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExceptionDetails )( 
            IDebugExceptionEvent150 * This,
            /* [out] */ IDebugExceptionDetails **ppDetails);
        
        HRESULT ( STDMETHODCALLTYPE *GetException )( 
            IDebugExceptionEvent150 * This,
            /* [out] */ EXCEPTION_INFO150 *pExceptionInfo);
        
        END_INTERFACE
    } IDebugExceptionEvent150Vtbl;

    interface IDebugExceptionEvent150
    {
        CONST_VTBL struct IDebugExceptionEvent150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionEvent150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionEvent150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionEvent150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionEvent150_GetExceptionDetails(This,ppDetails)	\
    ( (This)->lpVtbl -> GetExceptionDetails(This,ppDetails) ) 

#define IDebugExceptionEvent150_GetException(This,pExceptionInfo)	\
    ( (This)->lpVtbl -> GetException(This,pExceptionInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionEvent150_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionSettingsChangeNotification150_INTERFACE_DEFINED__
#define __IDebugExceptionSettingsChangeNotification150_INTERFACE_DEFINED__

/* interface IDebugExceptionSettingsChangeNotification150 */
/* [custom][unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionSettingsChangeNotification150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ACC93823-3CB2-421E-AF29-272777AE8180")
    IDebugExceptionSettingsChangeNotification150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnExceptionSettingChanged( 
            /* [custom][full][in] */ EXCEPTION_INFO150 *pExceptionInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnExceptionSettingRemoved( 
            /* [custom][full][in] */ EXCEPTION_INFO150 *pExceptionInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAllExceptionSettingsChanged( 
            /* [in] */ REFGUID guidType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAllExceptionSettingsRemoved( 
            /* [in] */ REFGUID guidType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionSettingsChangeNotification150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionSettingsChangeNotification150 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionSettingsChangeNotification150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionSettingsChangeNotification150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnExceptionSettingChanged )( 
            IDebugExceptionSettingsChangeNotification150 * This,
            /* [custom][full][in] */ EXCEPTION_INFO150 *pExceptionInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnExceptionSettingRemoved )( 
            IDebugExceptionSettingsChangeNotification150 * This,
            /* [custom][full][in] */ EXCEPTION_INFO150 *pExceptionInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnAllExceptionSettingsChanged )( 
            IDebugExceptionSettingsChangeNotification150 * This,
            /* [in] */ REFGUID guidType);
        
        HRESULT ( STDMETHODCALLTYPE *OnAllExceptionSettingsRemoved )( 
            IDebugExceptionSettingsChangeNotification150 * This,
            /* [in] */ REFGUID guidType);
        
        END_INTERFACE
    } IDebugExceptionSettingsChangeNotification150Vtbl;

    interface IDebugExceptionSettingsChangeNotification150
    {
        CONST_VTBL struct IDebugExceptionSettingsChangeNotification150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionSettingsChangeNotification150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionSettingsChangeNotification150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionSettingsChangeNotification150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionSettingsChangeNotification150_OnExceptionSettingChanged(This,pExceptionInfo)	\
    ( (This)->lpVtbl -> OnExceptionSettingChanged(This,pExceptionInfo) ) 

#define IDebugExceptionSettingsChangeNotification150_OnExceptionSettingRemoved(This,pExceptionInfo)	\
    ( (This)->lpVtbl -> OnExceptionSettingRemoved(This,pExceptionInfo) ) 

#define IDebugExceptionSettingsChangeNotification150_OnAllExceptionSettingsChanged(This,guidType)	\
    ( (This)->lpVtbl -> OnAllExceptionSettingsChanged(This,guidType) ) 

#define IDebugExceptionSettingsChangeNotification150_OnAllExceptionSettingsRemoved(This,guidType)	\
    ( (This)->lpVtbl -> OnAllExceptionSettingsRemoved(This,guidType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionSettingsChangeNotification150_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionSettingsManager150_INTERFACE_DEFINED__
#define __IDebugExceptionSettingsManager150_INTERFACE_DEFINED__

/* interface IDebugExceptionSettingsManager150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugExceptionSettingsManager150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("791019DE-09C3-4438-9A74-078511727A09")
    IDebugExceptionSettingsManager150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseExceptionSettingsEvents( 
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification150 *pEventSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseExceptionSettingsEvents( 
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification150 *pEventSink) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionSettingsManager150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExceptionSettingsManager150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExceptionSettingsManager150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExceptionSettingsManager150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseExceptionSettingsEvents )( 
            __RPC__in IDebugExceptionSettingsManager150 * This,
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification150 *pEventSink);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseExceptionSettingsEvents )( 
            __RPC__in IDebugExceptionSettingsManager150 * This,
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification150 *pEventSink);
        
        END_INTERFACE
    } IDebugExceptionSettingsManager150Vtbl;

    interface IDebugExceptionSettingsManager150
    {
        CONST_VTBL struct IDebugExceptionSettingsManager150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionSettingsManager150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionSettingsManager150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionSettingsManager150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionSettingsManager150_AdviseExceptionSettingsEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> AdviseExceptionSettingsEvents(This,pEventSink) ) 

#define IDebugExceptionSettingsManager150_UnadviseExceptionSettingsEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> UnadviseExceptionSettingsEvents(This,pEventSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionSettingsManager150_INTERFACE_DEFINED__ */


#ifndef __IDebugEngine150_INTERFACE_DEFINED__
#define __IDebugEngine150_INTERFACE_DEFINED__

/* interface IDebugEngine150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugEngine150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C6C8422-1241-4FB1-8106-5762C7E27E59")
    IDebugEngine150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetExceptions( 
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveSetExceptions( 
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugEngine150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugEngine150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugEngine150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugEngine150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetExceptions )( 
            __RPC__in IDebugEngine150 * This,
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveSetExceptions )( 
            __RPC__in IDebugEngine150 * This,
            /* [in] */ __RPC__in_opt IEnumDebugExceptionInfo150 *pExceptionList);
        
        END_INTERFACE
    } IDebugEngine150Vtbl;

    interface IDebugEngine150
    {
        CONST_VTBL struct IDebugEngine150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugEngine150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugEngine150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugEngine150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugEngine150_SetExceptions(This,pExceptionList)	\
    ( (This)->lpVtbl -> SetExceptions(This,pExceptionList) ) 

#define IDebugEngine150_RemoveSetExceptions(This,pExceptionList)	\
    ( (This)->lpVtbl -> RemoveSetExceptions(This,pExceptionList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugEngine150_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0009 */
/* [local] */ 

typedef struct tagPROCESS_PERFORMANCE_COUNTERS
    {
    UINT32 StartStopCounter;
    UINT64 SystemTime;
    UINT64 UserTime;
    UINT64 KernelTime;
    UINT64 RuntimeOverhead;
    UINT64 OSOverhead;
    UINT64 TotalOverhead;
    UINT64 Id;
    } 	PROCESS_PERFORMANCE_COUNTERS;

typedef struct tagQUERY_PROCESS_PERFORMANCE_COUNTERS_RESULT
    {
    HRESULT ErrorCode;
    PROCESS_PERFORMANCE_COUNTERS Counters;
    } 	QUERY_PROCESS_PERFORMANCE_COUNTERS_RESULT;



extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0009_v0_0_s_ifspec;

#ifndef __IDebugQueryPerformanceCountersCompletionRoutine150_INTERFACE_DEFINED__
#define __IDebugQueryPerformanceCountersCompletionRoutine150_INTERFACE_DEFINED__

/* interface IDebugQueryPerformanceCountersCompletionRoutine150 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugQueryPerformanceCountersCompletionRoutine150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("442FBF28-FA75-4697-AA4F-41DC1E9B7777")
    IDebugQueryPerformanceCountersCompletionRoutine150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryPerformanceCountersOnComplete( 
            /* [in] */ __RPC__in QUERY_PROCESS_PERFORMANCE_COUNTERS_RESULT *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugQueryPerformanceCountersCompletionRoutine150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugQueryPerformanceCountersCompletionRoutine150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugQueryPerformanceCountersCompletionRoutine150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugQueryPerformanceCountersCompletionRoutine150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryPerformanceCountersOnComplete )( 
            __RPC__in IDebugQueryPerformanceCountersCompletionRoutine150 * This,
            /* [in] */ __RPC__in QUERY_PROCESS_PERFORMANCE_COUNTERS_RESULT *pResult);
        
        END_INTERFACE
    } IDebugQueryPerformanceCountersCompletionRoutine150Vtbl;

    interface IDebugQueryPerformanceCountersCompletionRoutine150
    {
        CONST_VTBL struct IDebugQueryPerformanceCountersCompletionRoutine150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugQueryPerformanceCountersCompletionRoutine150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugQueryPerformanceCountersCompletionRoutine150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugQueryPerformanceCountersCompletionRoutine150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugQueryPerformanceCountersCompletionRoutine150_QueryPerformanceCountersOnComplete(This,pResult)	\
    ( (This)->lpVtbl -> QueryPerformanceCountersOnComplete(This,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugQueryPerformanceCountersCompletionRoutine150_INTERFACE_DEFINED__ */


#ifndef __IDebugProgram150_INTERFACE_DEFINED__
#define __IDebugProgram150_INTERFACE_DEFINED__

/* interface IDebugProgram150 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugProgram150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EC6F085-FFBE-41B8-979F-F885A86EA181")
    IDebugProgram150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryPerformanceCounters( 
            /* [in] */ __RPC__in_opt IDebugQueryPerformanceCountersCompletionRoutine150 *pCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProgram150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProgram150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProgram150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProgram150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryPerformanceCounters )( 
            __RPC__in IDebugProgram150 * This,
            /* [in] */ __RPC__in_opt IDebugQueryPerformanceCountersCompletionRoutine150 *pCallback);
        
        END_INTERFACE
    } IDebugProgram150Vtbl;

    interface IDebugProgram150
    {
        CONST_VTBL struct IDebugProgram150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProgram150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProgram150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProgram150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProgram150_QueryPerformanceCounters(This,pCallback)	\
    ( (This)->lpVtbl -> QueryPerformanceCounters(This,pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProgram150_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerScriptInstallCheck_INTERFACE_DEFINED__
#define __IVsDebuggerScriptInstallCheck_INTERFACE_DEFINED__

/* interface IVsDebuggerScriptInstallCheck */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IVsDebuggerScriptInstallCheck;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F6A40B8-D6B5-44B9-86E9-1D6B1B208E3F")
    IVsDebuggerScriptInstallCheck : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CheckScriptDebuggerInstalled( 
            /* [retval][out] */ VARIANT_BOOL *isInstalled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerScriptInstallCheckVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerScriptInstallCheck * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerScriptInstallCheck * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerScriptInstallCheck * This);
        
        HRESULT ( STDMETHODCALLTYPE *CheckScriptDebuggerInstalled )( 
            IVsDebuggerScriptInstallCheck * This,
            /* [retval][out] */ VARIANT_BOOL *isInstalled);
        
        END_INTERFACE
    } IVsDebuggerScriptInstallCheckVtbl;

    interface IVsDebuggerScriptInstallCheck
    {
        CONST_VTBL struct IVsDebuggerScriptInstallCheckVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerScriptInstallCheck_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerScriptInstallCheck_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerScriptInstallCheck_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerScriptInstallCheck_CheckScriptDebuggerInstalled(This,isInstalled)	\
    ( (This)->lpVtbl -> CheckScriptDebuggerInstalled(This,isInstalled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerScriptInstallCheck_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0012 */
/* [local] */ 

#define SID_SVsDebuggerScriptInstallCheck __uuidof(IVsDebuggerScriptInstallCheck
typedef struct tagCONTEXT_INFO_RESULT
    {
    HRESULT ErrorCode;
    CONTEXT_INFO ContextInfo;
    } 	CONTEXT_INFO_RESULT;



extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0012_v0_0_s_ifspec;

#ifndef __IDebugCodeContextInfoCompletionRoutine150_INTERFACE_DEFINED__
#define __IDebugCodeContextInfoCompletionRoutine150_INTERFACE_DEFINED__

/* interface IDebugCodeContextInfoCompletionRoutine150 */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IDebugCodeContextInfoCompletionRoutine150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF4CD6E7-7AD0-45A4-B1BF-D94BBBF0B0E5")
    IDebugCodeContextInfoCompletionRoutine150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCodeContextInfoComplete( 
            /* [in] */ __RPC__in CONTEXT_INFO_RESULT *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCodeContextInfoCompletionRoutine150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugCodeContextInfoCompletionRoutine150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugCodeContextInfoCompletionRoutine150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugCodeContextInfoCompletionRoutine150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCodeContextInfoComplete )( 
            __RPC__in IDebugCodeContextInfoCompletionRoutine150 * This,
            /* [in] */ __RPC__in CONTEXT_INFO_RESULT *pResult);
        
        END_INTERFACE
    } IDebugCodeContextInfoCompletionRoutine150Vtbl;

    interface IDebugCodeContextInfoCompletionRoutine150
    {
        CONST_VTBL struct IDebugCodeContextInfoCompletionRoutine150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCodeContextInfoCompletionRoutine150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCodeContextInfoCompletionRoutine150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCodeContextInfoCompletionRoutine150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCodeContextInfoCompletionRoutine150_OnCodeContextInfoComplete(This,pResult)	\
    ( (This)->lpVtbl -> OnCodeContextInfoComplete(This,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCodeContextInfoCompletionRoutine150_INTERFACE_DEFINED__ */


#ifndef __IDebugCodeContext150_INTERFACE_DEFINED__
#define __IDebugCodeContext150_INTERFACE_DEFINED__

/* interface IDebugCodeContext150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugCodeContext150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EB39B6B-8EFF-4B9D-8CBD-EDA45D5C588F")
    IDebugCodeContext150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfoAsync( 
            /* [in] */ CONTEXT_INFO_FIELDS dwRequestedFields,
            /* [in] */ __RPC__in_opt IDebugCodeContextInfoCompletionRoutine150 *pCompletionRoutine) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCodeContext150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugCodeContext150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugCodeContext150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugCodeContext150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfoAsync )( 
            __RPC__in IDebugCodeContext150 * This,
            /* [in] */ CONTEXT_INFO_FIELDS dwRequestedFields,
            /* [in] */ __RPC__in_opt IDebugCodeContextInfoCompletionRoutine150 *pCompletionRoutine);
        
        END_INTERFACE
    } IDebugCodeContext150Vtbl;

    interface IDebugCodeContext150
    {
        CONST_VTBL struct IDebugCodeContext150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCodeContext150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCodeContext150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCodeContext150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCodeContext150_GetInfoAsync(This,dwRequestedFields,pCompletionRoutine)	\
    ( (This)->lpVtbl -> GetInfoAsync(This,dwRequestedFields,pCompletionRoutine) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCodeContext150_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0014 */
/* [local] */ 


enum enum_EVALFLAGS150
    {
        EVAL150_RETURNVALUE	= 0x2,
        EVAL150_NOSIDEEFFECTS	= 0x4,
        EVAL150_ALLOWBPS	= 0x8,
        EVAL150_ALLOWERRORREPORT	= 0x10,
        EVAL150_FUNCTION_AS_ADDRESS	= 0x40,
        EVAL150_NOFUNCEVAL	= 0x80,
        EVAL150_NOEVENTS	= 0x1000,
        EVAL150_DESIGN_TIME_EXPR_EVAL	= 0x2000,
        EVAL150_ALLOW_IMPLICIT_VARS	= 0x4000,
        EVAL150_FORCE_EVALUATION_NOW	= 0x8000,
        EVAL150_NO_IL_INTERPRETER_DEPRECATED	= 0x10000,
        EVAL150_ALLOW_FUNC_EVALS_EVEN_IF_NO_SIDE_EFFECTS	= 0x20000,
        EVAL150_ALLOW_THREADSLIPPING	= 0x40000,
        EVAL150_SHOW_VALUERAW	= 0x80000,
        EVAL150_FORCE_REAL_FUNCEVAL	= 0x100000,
        EVAL150_ILINTERPRETER_BEING_USED	= 0x200000,
        EVAL150_ALLOW_EXTENDED_SIDE_EFFECTS	= 0x400000
    } ;
#define DBG_ATTRIB_CANEVALUATENOW							0x0400000000000000
#define DBG_ATTRIB_NEED_REFRESH_FOR_EXTENDED_SIDE_EFFECTS    0x0800000000000000


extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0014_v0_0_s_ifspec;

#ifndef __IDebugProperty150_INTERFACE_DEFINED__
#define __IDebugProperty150_INTERFACE_DEFINED__

/* interface IDebugProperty150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugProperty150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f4e34da-6b2b-4624-93c5-93a058cd95de")
    IDebugProperty150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRefreshButtonText( 
            /* [out] */ __RPC__deref_out_opt BSTR *bstrRefreshButtonText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProperty150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProperty150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProperty150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProperty150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRefreshButtonText )( 
            __RPC__in IDebugProperty150 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *bstrRefreshButtonText);
        
        END_INTERFACE
    } IDebugProperty150Vtbl;

    interface IDebugProperty150
    {
        CONST_VTBL struct IDebugProperty150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProperty150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProperty150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProperty150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProperty150_GetRefreshButtonText(This,bstrRefreshButtonText)	\
    ( (This)->lpVtbl -> GetRefreshButtonText(This,bstrRefreshButtonText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProperty150_INTERFACE_DEFINED__ */


#ifndef __IDebugSourceLinkInfo150_INTERFACE_DEFINED__
#define __IDebugSourceLinkInfo150_INTERFACE_DEFINED__

/* interface IDebugSourceLinkInfo150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSourceLinkInfo150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6a31f3f2-bf97-452d-888b-cd526d1e9d80")
    IDebugSourceLinkInfo150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUrl( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelativeFilePath( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRelativeFilePath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSourceLinkInfo150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSourceLinkInfo150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSourceLinkInfo150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSourceLinkInfo150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUrl )( 
            __RPC__in IDebugSourceLinkInfo150 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrUrl);
        
        HRESULT ( STDMETHODCALLTYPE *GetRelativeFilePath )( 
            __RPC__in IDebugSourceLinkInfo150 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRelativeFilePath);
        
        END_INTERFACE
    } IDebugSourceLinkInfo150Vtbl;

    interface IDebugSourceLinkInfo150
    {
        CONST_VTBL struct IDebugSourceLinkInfo150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSourceLinkInfo150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSourceLinkInfo150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSourceLinkInfo150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSourceLinkInfo150_GetUrl(This,pbstrUrl)	\
    ( (This)->lpVtbl -> GetUrl(This,pbstrUrl) ) 

#define IDebugSourceLinkInfo150_GetRelativeFilePath(This,pbstrRelativeFilePath)	\
    ( (This)->lpVtbl -> GetRelativeFilePath(This,pbstrRelativeFilePath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSourceLinkInfo150_INTERFACE_DEFINED__ */


#ifndef __IDebugSourceLinkDocumentContext150_INTERFACE_DEFINED__
#define __IDebugSourceLinkDocumentContext150_INTERFACE_DEFINED__

/* interface IDebugSourceLinkDocumentContext150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSourceLinkDocumentContext150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("667f17de-b438-4ada-a1e5-5517db9f6533")
    IDebugSourceLinkDocumentContext150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSourceLinkInfo( 
            /* [out] */ __RPC__deref_out_opt IDebugSourceLinkInfo150 **ppSourceLinkInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSourceLinkDocumentContext150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSourceLinkDocumentContext150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSourceLinkDocumentContext150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSourceLinkDocumentContext150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceLinkInfo )( 
            __RPC__in IDebugSourceLinkDocumentContext150 * This,
            /* [out] */ __RPC__deref_out_opt IDebugSourceLinkInfo150 **ppSourceLinkInfo);
        
        END_INTERFACE
    } IDebugSourceLinkDocumentContext150Vtbl;

    interface IDebugSourceLinkDocumentContext150
    {
        CONST_VTBL struct IDebugSourceLinkDocumentContext150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSourceLinkDocumentContext150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSourceLinkDocumentContext150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSourceLinkDocumentContext150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSourceLinkDocumentContext150_GetSourceLinkInfo(This,ppSourceLinkInfo)	\
    ( (This)->lpVtbl -> GetSourceLinkInfo(This,ppSourceLinkInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSourceLinkDocumentContext150_INTERFACE_DEFINED__ */


#ifndef __IDebugDocumentContext150_INTERFACE_DEFINED__
#define __IDebugDocumentContext150_INTERFACE_DEFINED__

/* interface IDebugDocumentContext150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugDocumentContext150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3cfd5762-425b-4a0b-a962-3a6cacbcaef5")
    IDebugDocumentContext150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UseDefaultSourceSearchDirectories( 
            /* [out] */ __RPC__out BOOL *pfUseDefaultSourceSearchDirectories) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDocumentContext150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugDocumentContext150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugDocumentContext150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugDocumentContext150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UseDefaultSourceSearchDirectories )( 
            __RPC__in IDebugDocumentContext150 * This,
            /* [out] */ __RPC__out BOOL *pfUseDefaultSourceSearchDirectories);
        
        END_INTERFACE
    } IDebugDocumentContext150Vtbl;

    interface IDebugDocumentContext150
    {
        CONST_VTBL struct IDebugDocumentContext150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDocumentContext150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDocumentContext150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDocumentContext150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDocumentContext150_UseDefaultSourceSearchDirectories(This,pfUseDefaultSourceSearchDirectories)	\
    ( (This)->lpVtbl -> UseDefaultSourceSearchDirectories(This,pfUseDefaultSourceSearchDirectories) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDocumentContext150_INTERFACE_DEFINED__ */


#ifndef __IDebugTelemetryDetailsEvent150_INTERFACE_DEFINED__
#define __IDebugTelemetryDetailsEvent150_INTERFACE_DEFINED__

/* interface IDebugTelemetryDetailsEvent150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugTelemetryDetailsEvent150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F2652B2-CD3C-4AED-A946-A3DB6F379412")
    IDebugTelemetryDetailsEvent150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [out] */ __RPC__deref_out_opt BSTR *eventName,
            /* [out] */ __RPC__deref_out_opt IEnumDebugTelemetryProperty150 **propertyEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugTelemetryDetailsEvent150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugTelemetryDetailsEvent150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugTelemetryDetailsEvent150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugTelemetryDetailsEvent150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            __RPC__in IDebugTelemetryDetailsEvent150 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *eventName,
            /* [out] */ __RPC__deref_out_opt IEnumDebugTelemetryProperty150 **propertyEnum);
        
        END_INTERFACE
    } IDebugTelemetryDetailsEvent150Vtbl;

    interface IDebugTelemetryDetailsEvent150
    {
        CONST_VTBL struct IDebugTelemetryDetailsEvent150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugTelemetryDetailsEvent150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugTelemetryDetailsEvent150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugTelemetryDetailsEvent150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugTelemetryDetailsEvent150_GetInfo(This,eventName,propertyEnum)	\
    ( (This)->lpVtbl -> GetInfo(This,eventName,propertyEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugTelemetryDetailsEvent150_INTERFACE_DEFINED__ */


#ifndef __IEnumDebugTelemetryProperty150_INTERFACE_DEFINED__
#define __IEnumDebugTelemetryProperty150_INTERFACE_DEFINED__

/* interface IEnumDebugTelemetryProperty150 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IEnumDebugTelemetryProperty150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("161EA122-D0A3-47A8-9063-F6878E0F5F9B")
    IEnumDebugTelemetryProperty150 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG requestCount,
            /* [annotation][length_is][size_is][out] */ 
            __RPC__out_ecount_part(requestCount, *returnCount)  BSTR *nameArray,
            /* [annotation][length_is][size_is][out] */ 
            __RPC__out_ecount_part(requestCount, *returnCount)  VARIANT *valueArray,
            /* [annotation][out] */ 
            _Out_  ULONG *returnCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [annotation][out] */ 
            _Out_  ULONG *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumDebugTelemetryProperty150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDebugTelemetryProperty150 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDebugTelemetryProperty150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDebugTelemetryProperty150 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDebugTelemetryProperty150 * This,
            /* [in] */ ULONG requestCount,
            /* [annotation][length_is][size_is][out] */ 
            __RPC__out_ecount_part(requestCount, *returnCount)  BSTR *nameArray,
            /* [annotation][length_is][size_is][out] */ 
            __RPC__out_ecount_part(requestCount, *returnCount)  VARIANT *valueArray,
            /* [annotation][out] */ 
            _Out_  ULONG *returnCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IEnumDebugTelemetryProperty150 * This,
            /* [annotation][out] */ 
            _Out_  ULONG *result);
        
        END_INTERFACE
    } IEnumDebugTelemetryProperty150Vtbl;

    interface IEnumDebugTelemetryProperty150
    {
        CONST_VTBL struct IEnumDebugTelemetryProperty150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDebugTelemetryProperty150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDebugTelemetryProperty150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDebugTelemetryProperty150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDebugTelemetryProperty150_Next(This,requestCount,nameArray,valueArray,returnCount)	\
    ( (This)->lpVtbl -> Next(This,requestCount,nameArray,valueArray,returnCount) ) 

#define IEnumDebugTelemetryProperty150_GetCount(This,result)	\
    ( (This)->lpVtbl -> GetCount(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDebugTelemetryProperty150_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0020 */
/* [local] */ 


enum enum_LAUNCH_FLAGS150
    {
        LAUNCH_STDIO_TO_OUTPUT_WINDOW	= 0x100
    } ;
typedef DWORD LAUNCH_FLAGS150;


enum enum_SYMBOL_PATH_TYPE
    {
        Normal	= 0,
        VSTS	= ( Normal + 1 ) 
    } ;
typedef DWORD SYMBOL_PATH_TYPE;

typedef struct SymbolPath
    {
    SYMBOL_PATH_TYPE Type;
    BSTR Url;
    BSTR AccountId;
    BSTR AccountProviderId;
    BSTR TenantId;
    BSTR DisplayName;
    } 	SymbolPath;


enum enum_DEBUGPROP_INFO_FLAGS150
    {
        DEBUGPROP150_INFO_FULLNAME	= 0x1,
        DEBUGPROP150_INFO_NAME	= 0x2,
        DEBUGPROP150_INFO_TYPE	= 0x4,
        DEBUGPROP150_INFO_VALUE	= 0x8,
        DEBUGPROP150_INFO_ATTRIB	= 0x10,
        DEBUGPROP150_INFO_PROP	= 0x20,
        DEBUGPROP150_INFO_VALUE_AUTOEXPAND	= 0x10000,
        DEBUGPROP150_INFO_NOFUNCEVAL	= 0x20000,
        DEBUGPROP150_INFO_VALUE_RAW	= 0x40000,
        DEBUGPROP150_INFO_VALUE_NO_TOSTRING	= 0x80000,
        DEBUGPROP150_INFO_NO_NONPUBLIC_MEMBERS	= 0x100000,
        DEBUGPROP150_INFO_NONE	= 0,
        DEBUGPROP150_INFO_STANDARD	= ( ( ( DEBUGPROP150_INFO_ATTRIB | DEBUGPROP150_INFO_NAME )  | DEBUGPROP150_INFO_TYPE )  | DEBUGPROP150_INFO_VALUE ) ,
        DEBUGPROP150_INFO_ALL	= 0xffffffff,
        DEBUGPROP150_INFO_NOSIDEEFFECTS	= 0x200000,
        DEBUGPROP150_INFO_NO_IL_INTERPRETER	= 0x400000,
        DEBUGPROP150_INFO_ALLOW_FUNC_EVALS_EVEN_IF_NO_SIDE_EFFECTS	= 0x800000,
        DEBUGPROP150_INFO_ALLOW_THREADSLIPPING	= 0x1000000,
        DEBUGPROP150_INFO_FORCE_REAL_FUNCEVAL	= 0x2000000,
        DEBUGPROP150_INFO_ILINTERPRETER_BEING_USED	= 0x4000000,
        DEBUGPROP150_INFO_FORCE_EVALUATION_NOW_WITH_EXT_SIDE_EFFECTS	= 0x8000000
    } ;
typedef DWORD DEBUGPROP150_INFO_FLAGS;

typedef struct SymbolPathOption
    {
    SymbolPath Path;
    VARIANT_BOOL IsEnabled;
    } 	SymbolPathOption;



extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0020_v0_0_s_ifspec;

#ifndef __ISymbolPathOptionList150_INTERFACE_DEFINED__
#define __ISymbolPathOptionList150_INTERFACE_DEFINED__

/* interface ISymbolPathOptionList150 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_ISymbolPathOptionList150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bd717aa1-85b7-49c1-ab11-9c524c873647")
    ISymbolPathOptionList150 : public IUnknown
    {
    public:
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [custom][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lIndex,
            /* [retval][out] */ SymbolPathOption *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ SymbolPath path,
            VARIANT_BOOL isEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ ISymbolPathOptionList150 **ppSymbolPathOptionList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LPCOLESTR name) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ long lStartIndex,
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL useWildcard,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISymbolPathOptionList150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISymbolPathOptionList150 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISymbolPathOptionList150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISymbolPathOptionList150 * This);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISymbolPathOptionList150 * This,
            /* [retval][out] */ long *pVal);
        
        /* [custom][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISymbolPathOptionList150 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ SymbolPathOption *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISymbolPathOptionList150 * This,
            /* [in] */ SymbolPath path,
            VARIANT_BOOL isEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISymbolPathOptionList150 * This);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISymbolPathOptionList150 * This,
            /* [retval][out] */ ISymbolPathOptionList150 **ppSymbolPathOptionList);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISymbolPathOptionList150 * This,
            /* [in] */ LPCOLESTR name);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ISymbolPathOptionList150 * This,
            /* [in] */ long lStartIndex,
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL useWildcard,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } ISymbolPathOptionList150Vtbl;

    interface ISymbolPathOptionList150
    {
        CONST_VTBL struct ISymbolPathOptionList150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISymbolPathOptionList150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISymbolPathOptionList150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISymbolPathOptionList150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISymbolPathOptionList150_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ISymbolPathOptionList150_get_Item(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) ) 

#define ISymbolPathOptionList150_Add(This,path,isEnabled)	\
    ( (This)->lpVtbl -> Add(This,path,isEnabled) ) 

#define ISymbolPathOptionList150_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISymbolPathOptionList150_Clone(This,ppSymbolPathOptionList)	\
    ( (This)->lpVtbl -> Clone(This,ppSymbolPathOptionList) ) 

#define ISymbolPathOptionList150_Remove(This,name)	\
    ( (This)->lpVtbl -> Remove(This,name) ) 

#define ISymbolPathOptionList150_Find(This,lStartIndex,name,useWildcard,plIndex)	\
    ( (This)->lpVtbl -> Find(This,lStartIndex,name,useWildcard,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISymbolPathOptionList150_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings150_INTERFACE_DEFINED__
#define __IVsDebuggerSymbolSettings150_INTERFACE_DEFINED__

/* interface IVsDebuggerSymbolSettings150 */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerSymbolSettings150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d4cea00d-f3ed-49c9-9513-bc4fec8c6a98")
    IVsDebuggerSymbolSettings150 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedSymbolPaths( 
            /* [retval][out] */ ISymbolPathOptionList150 **ppSymbolPaths) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerSymbolSettings150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerSymbolSettings150 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerSymbolSettings150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerSymbolSettings150 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedSymbolPaths )( 
            IVsDebuggerSymbolSettings150 * This,
            /* [retval][out] */ ISymbolPathOptionList150 **ppSymbolPaths);
        
        END_INTERFACE
    } IVsDebuggerSymbolSettings150Vtbl;

    interface IVsDebuggerSymbolSettings150
    {
        CONST_VTBL struct IVsDebuggerSymbolSettings150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerSymbolSettings150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerSymbolSettings150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerSymbolSettings150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerSymbolSettings150_get_ExtendedSymbolPaths(This,ppSymbolPaths)	\
    ( (This)->lpVtbl -> get_ExtendedSymbolPaths(This,ppSymbolPaths) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerSymbolSettings150_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg150_0000_0022 */
/* [local] */ 


enum enum_EXCEPTION_STATE150
    {
        EXCEPTION_IS_VSCODE_FILTER	= 0x10000
    } ;
typedef DWORD EXCEPTION_STATE;



extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg150_0000_0022_v0_0_s_ifspec;

#ifndef __IDebugLostBreakStateEvent150_INTERFACE_DEFINED__
#define __IDebugLostBreakStateEvent150_INTERFACE_DEFINED__

/* interface IDebugLostBreakStateEvent150 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugLostBreakStateEvent150;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33B3C3D1-9A81-4D9A-AD69-14D66148D818")
    IDebugLostBreakStateEvent150 : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugLostBreakStateEvent150Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugLostBreakStateEvent150 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugLostBreakStateEvent150 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugLostBreakStateEvent150 * This);
        
        END_INTERFACE
    } IDebugLostBreakStateEvent150Vtbl;

    interface IDebugLostBreakStateEvent150
    {
        CONST_VTBL struct IDebugLostBreakStateEvent150Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugLostBreakStateEvent150_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugLostBreakStateEvent150_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugLostBreakStateEvent150_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugLostBreakStateEvent150_INTERFACE_DEFINED__ */


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


