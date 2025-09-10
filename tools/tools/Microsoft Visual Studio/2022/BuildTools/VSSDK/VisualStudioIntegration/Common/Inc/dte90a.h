

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


#ifndef __dte90a_h__
#define __dte90a_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Debugger4_FWD_DEFINED__
#define __Debugger4_FWD_DEFINED__
typedef interface Debugger4 Debugger4;

#endif 	/* __Debugger4_FWD_DEFINED__ */


#ifndef __Process4_FWD_DEFINED__
#define __Process4_FWD_DEFINED__
typedef interface Process4 Process4;

#endif 	/* __Process4_FWD_DEFINED__ */


#ifndef __Breakpoint3_FWD_DEFINED__
#define __Breakpoint3_FWD_DEFINED__
typedef interface Breakpoint3 Breakpoint3;

#endif 	/* __Breakpoint3_FWD_DEFINED__ */


#ifndef __StackFrame2_FWD_DEFINED__
#define __StackFrame2_FWD_DEFINED__
typedef interface StackFrame2 StackFrame2;

#endif 	/* __StackFrame2_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dte90a_0000_0000 */
/* [local] */ 

#pragma once
#ifndef __INDENTSTYLE__
#define __INDENTSTYLE__
typedef /* [uuid] */  DECLSPEC_UUID("BCCEBE05-D29C-11D2-AABD-00C04F688DDE") 
enum _vsIndentStyle
    {
        vsIndentStyleNone	= 0,
        vsIndentStyleDefault	= ( vsIndentStyleNone + 1 ) ,
        vsIndentStyleSmart	= ( vsIndentStyleDefault + 1 ) 
    } 	vsIndentStyle;

#endif // __INDENTSTYLE__


extern RPC_IF_HANDLE __MIDL_itf_dte90a_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dte90a_0000_0000_v0_0_s_ifspec;


#ifndef __EnvDTE90a_LIBRARY_DEFINED__
#define __EnvDTE90a_LIBRARY_DEFINED__

/* library EnvDTE90a */
/* [version][helpstring][uuid] */ 






EXTERN_C const IID LIBID_EnvDTE90a;

#ifndef __Debugger4_INTERFACE_DEFINED__
#define __Debugger4_INTERFACE_DEFINED__

/* interface Debugger4 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_Debugger4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("133BAD54-8E8D-451b-9DB0-AF38ED9819CC")
    Debugger4 : public Debugger3
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetExpression3( 
            /* [in] */ __RPC__in BSTR ExpressionText,
            /* [defaultvalue][optional][in] */ __RPC__in /* external definition not present */ StackFrame *StackFrame,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL UseAutoExpandRules,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL TreatAsStatement,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [defaultvalue][in] */ long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expression **Expression) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Debugger4Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Debugger4 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExpression )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExpressionText,
            /* [in][idldescattr] */ BOOLEAN UseAutoExpandRules,
            /* [in][idldescattr] */ signed long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt Expression **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *DetachAll )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepInto )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepOver )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *StepOut )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Go )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Break )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakMode,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForDesignMode,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SetNextStatement )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *RunToCursor )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ExecuteStatement )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR Statement,
            /* [in][idldescattr] */ signed long Timeout,
            /* [in][idldescattr] */ BOOLEAN TreatAsExpression,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Breakpoints )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Languages **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMode )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out enum dbgDebugMode *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcess )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Process **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentProcess )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in_opt Process *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProgram )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Program **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentProgram )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in_opt Program *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentThread )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Thread **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentThread )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in_opt Thread *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentStackFrame )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt StackFrame **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentStackFrame )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in_opt StackFrame *noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HexDisplayMode )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_HexDisplayMode )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HexInputMode )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_HexInputMode )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LastBreakReason )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out enum dbgEventReason *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BreakpointLastHit )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoint **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AllBreakpointsLastHit )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DebuggedProcesses )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LocalProcesses )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *TerminateAll )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *WriteMinidump )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR FileName,
            /* [in][idldescattr] */ enum dbgMinidumpOption Option,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetProcesses )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in_opt Transport *pTransport,
            /* [in][idldescattr] */ __RPC__in BSTR TransportQualifier,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExpression2 )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR ExpressionText,
            /* [in][idldescattr] */ BOOLEAN UseAutoExpandRules,
            /* [in][idldescattr] */ BOOLEAN TreatAsStatement,
            /* [in][idldescattr] */ signed long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt Expression **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Transports )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Transports **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ForceContinue )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_ForceContinue )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ExceptionGroups )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt ExceptionGroups **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolPath )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolPathState )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolCachePath )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_OnlyLoadSymbolsManually )( 
            __RPC__in Debugger4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SetSymbolSettings )( 
            __RPC__in Debugger4 * This,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolPath,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolPathState,
            /* [in][idldescattr] */ __RPC__in BSTR SymbolCachePath,
            /* [in][idldescattr] */ BOOLEAN OnlyLoadSymbolsManually,
            /* [in][idldescattr] */ BOOLEAN LoadSymbolsNow,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetExpression3 )( 
            __RPC__in Debugger4 * This,
            /* [in] */ __RPC__in BSTR ExpressionText,
            /* [defaultvalue][optional][in] */ __RPC__in /* external definition not present */ StackFrame *StackFrame,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL UseAutoExpandRules,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL TreatAsStatement,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [defaultvalue][in] */ long Timeout,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expression **Expression);
        
        END_INTERFACE
    } Debugger4Vtbl;

    interface Debugger4
    {
        CONST_VTBL struct Debugger4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Debugger4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Debugger4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Debugger4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Debugger4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Debugger4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Debugger4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Debugger4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Debugger4_GetExpression(This,ExpressionText,UseAutoExpandRules,Timeout,retval)	\
    ( (This)->lpVtbl -> GetExpression(This,ExpressionText,UseAutoExpandRules,Timeout,retval) ) 

#define Debugger4_DetachAll(This,retval)	\
    ( (This)->lpVtbl -> DetachAll(This,retval) ) 

#define Debugger4_StepInto(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepInto(This,WaitForBreakOrEnd,retval) ) 

#define Debugger4_StepOver(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepOver(This,WaitForBreakOrEnd,retval) ) 

#define Debugger4_StepOut(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> StepOut(This,WaitForBreakOrEnd,retval) ) 

#define Debugger4_Go(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> Go(This,WaitForBreakOrEnd,retval) ) 

#define Debugger4_Break(This,WaitForBreakMode,retval)	\
    ( (This)->lpVtbl -> Break(This,WaitForBreakMode,retval) ) 

#define Debugger4_Stop(This,WaitForDesignMode,retval)	\
    ( (This)->lpVtbl -> Stop(This,WaitForDesignMode,retval) ) 

#define Debugger4_SetNextStatement(This,retval)	\
    ( (This)->lpVtbl -> SetNextStatement(This,retval) ) 

#define Debugger4_RunToCursor(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> RunToCursor(This,WaitForBreakOrEnd,retval) ) 

#define Debugger4_ExecuteStatement(This,Statement,Timeout,TreatAsExpression,retval)	\
    ( (This)->lpVtbl -> ExecuteStatement(This,Statement,Timeout,TreatAsExpression,retval) ) 

#define Debugger4_get_Breakpoints(This,retval)	\
    ( (This)->lpVtbl -> get_Breakpoints(This,retval) ) 

#define Debugger4_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define Debugger4_get_CurrentMode(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentMode(This,retval) ) 

#define Debugger4_get_CurrentProcess(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentProcess(This,retval) ) 

#define Debugger4_put_CurrentProcess(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentProcess(This,noname,retval) ) 

#define Debugger4_get_CurrentProgram(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentProgram(This,retval) ) 

#define Debugger4_put_CurrentProgram(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentProgram(This,noname,retval) ) 

#define Debugger4_get_CurrentThread(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentThread(This,retval) ) 

#define Debugger4_put_CurrentThread(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentThread(This,noname,retval) ) 

#define Debugger4_get_CurrentStackFrame(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentStackFrame(This,retval) ) 

#define Debugger4_put_CurrentStackFrame(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CurrentStackFrame(This,noname,retval) ) 

#define Debugger4_get_HexDisplayMode(This,retval)	\
    ( (This)->lpVtbl -> get_HexDisplayMode(This,retval) ) 

#define Debugger4_put_HexDisplayMode(This,noname,retval)	\
    ( (This)->lpVtbl -> put_HexDisplayMode(This,noname,retval) ) 

#define Debugger4_get_HexInputMode(This,retval)	\
    ( (This)->lpVtbl -> get_HexInputMode(This,retval) ) 

#define Debugger4_put_HexInputMode(This,noname,retval)	\
    ( (This)->lpVtbl -> put_HexInputMode(This,noname,retval) ) 

#define Debugger4_get_LastBreakReason(This,retval)	\
    ( (This)->lpVtbl -> get_LastBreakReason(This,retval) ) 

#define Debugger4_get_BreakpointLastHit(This,retval)	\
    ( (This)->lpVtbl -> get_BreakpointLastHit(This,retval) ) 

#define Debugger4_get_AllBreakpointsLastHit(This,retval)	\
    ( (This)->lpVtbl -> get_AllBreakpointsLastHit(This,retval) ) 

#define Debugger4_get_DebuggedProcesses(This,retval)	\
    ( (This)->lpVtbl -> get_DebuggedProcesses(This,retval) ) 

#define Debugger4_get_LocalProcesses(This,retval)	\
    ( (This)->lpVtbl -> get_LocalProcesses(This,retval) ) 

#define Debugger4_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Debugger4_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Debugger4_TerminateAll(This,retval)	\
    ( (This)->lpVtbl -> TerminateAll(This,retval) ) 

#define Debugger4_WriteMinidump(This,FileName,Option,retval)	\
    ( (This)->lpVtbl -> WriteMinidump(This,FileName,Option,retval) ) 

#define Debugger4_GetProcesses(This,pTransport,TransportQualifier,retval)	\
    ( (This)->lpVtbl -> GetProcesses(This,pTransport,TransportQualifier,retval) ) 

#define Debugger4_GetExpression2(This,ExpressionText,UseAutoExpandRules,TreatAsStatement,Timeout,retval)	\
    ( (This)->lpVtbl -> GetExpression2(This,ExpressionText,UseAutoExpandRules,TreatAsStatement,Timeout,retval) ) 

#define Debugger4_get_Transports(This,retval)	\
    ( (This)->lpVtbl -> get_Transports(This,retval) ) 

#define Debugger4_get_ForceContinue(This,retval)	\
    ( (This)->lpVtbl -> get_ForceContinue(This,retval) ) 

#define Debugger4_put_ForceContinue(This,noname,retval)	\
    ( (This)->lpVtbl -> put_ForceContinue(This,noname,retval) ) 

#define Debugger4_get_ExceptionGroups(This,retval)	\
    ( (This)->lpVtbl -> get_ExceptionGroups(This,retval) ) 

#define Debugger4_get_SymbolPath(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolPath(This,retval) ) 

#define Debugger4_get_SymbolPathState(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolPathState(This,retval) ) 

#define Debugger4_get_SymbolCachePath(This,retval)	\
    ( (This)->lpVtbl -> get_SymbolCachePath(This,retval) ) 

#define Debugger4_get_OnlyLoadSymbolsManually(This,retval)	\
    ( (This)->lpVtbl -> get_OnlyLoadSymbolsManually(This,retval) ) 

#define Debugger4_SetSymbolSettings(This,SymbolPath,SymbolPathState,SymbolCachePath,OnlyLoadSymbolsManually,LoadSymbolsNow,retval)	\
    ( (This)->lpVtbl -> SetSymbolSettings(This,SymbolPath,SymbolPathState,SymbolCachePath,OnlyLoadSymbolsManually,LoadSymbolsNow,retval) ) 


#define Debugger4_GetExpression3(This,ExpressionText,StackFrame,UseAutoExpandRules,TreatAsStatement,AllowAutoFuncEval,Timeout,Expression)	\
    ( (This)->lpVtbl -> GetExpression3(This,ExpressionText,StackFrame,UseAutoExpandRules,TreatAsStatement,AllowAutoFuncEval,Timeout,Expression) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Debugger4_INTERFACE_DEFINED__ */


#ifndef __Process4_INTERFACE_DEFINED__
#define __Process4_INTERFACE_DEFINED__

/* interface Process4 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_Process4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49DB35DD-FDD9-43ba-BD3F-2BAF50F5C45E")
    Process4 : public Process3
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnvironmentVariables( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *EnvironmentVariables) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CommandLine( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *CommandLine) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentDirectory( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *CurrentDirectory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Process4Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Process4 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Detach )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Break )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakMode,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ BOOLEAN WaitForBreakOrEnd,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessID )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Programs )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Programs **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Debugger **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Processes **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Attach2 )( 
            __RPC__in Process4 * This,
            /* [in][idldescattr] */ VARIANT Engines,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Transport )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Transport **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TransportQualifier )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Threads )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Threads **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeingDebugged )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Modules )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt Modules **retval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnvironmentVariables )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *EnvironmentVariables);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CommandLine )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *CommandLine);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDirectory )( 
            __RPC__in Process4 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *CurrentDirectory);
        
        END_INTERFACE
    } Process4Vtbl;

    interface Process4
    {
        CONST_VTBL struct Process4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Process4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Process4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Process4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Process4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Process4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Process4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Process4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Process4_Attach(This,retval)	\
    ( (This)->lpVtbl -> Attach(This,retval) ) 

#define Process4_Detach(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> Detach(This,WaitForBreakOrEnd,retval) ) 

#define Process4_Break(This,WaitForBreakMode,retval)	\
    ( (This)->lpVtbl -> Break(This,WaitForBreakMode,retval) ) 

#define Process4_Terminate(This,WaitForBreakOrEnd,retval)	\
    ( (This)->lpVtbl -> Terminate(This,WaitForBreakOrEnd,retval) ) 

#define Process4_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define Process4_get_ProcessID(This,retval)	\
    ( (This)->lpVtbl -> get_ProcessID(This,retval) ) 

#define Process4_get_Programs(This,retval)	\
    ( (This)->lpVtbl -> get_Programs(This,retval) ) 

#define Process4_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Process4_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Process4_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 

#define Process4_Attach2(This,Engines,retval)	\
    ( (This)->lpVtbl -> Attach2(This,Engines,retval) ) 

#define Process4_get_Transport(This,retval)	\
    ( (This)->lpVtbl -> get_Transport(This,retval) ) 

#define Process4_get_TransportQualifier(This,retval)	\
    ( (This)->lpVtbl -> get_TransportQualifier(This,retval) ) 

#define Process4_get_Threads(This,retval)	\
    ( (This)->lpVtbl -> get_Threads(This,retval) ) 

#define Process4_get_IsBeingDebugged(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeingDebugged(This,retval) ) 

#define Process4_get_UserName(This,retval)	\
    ( (This)->lpVtbl -> get_UserName(This,retval) ) 

#define Process4_get_Modules(This,retval)	\
    ( (This)->lpVtbl -> get_Modules(This,retval) ) 


#define Process4_get_EnvironmentVariables(This,EnvironmentVariables)	\
    ( (This)->lpVtbl -> get_EnvironmentVariables(This,EnvironmentVariables) ) 

#define Process4_get_CommandLine(This,CommandLine)	\
    ( (This)->lpVtbl -> get_CommandLine(This,CommandLine) ) 

#define Process4_get_CurrentDirectory(This,CurrentDirectory)	\
    ( (This)->lpVtbl -> get_CurrentDirectory(This,CurrentDirectory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Process4_INTERFACE_DEFINED__ */


#ifndef __Breakpoint3_INTERFACE_DEFINED__
#define __Breakpoint3_INTERFACE_DEFINED__

/* interface Breakpoint3 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_Breakpoint3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81C189C5-0EF0-459c-B907-A22F6B7B355C")
    Breakpoint3 : public Breakpoint2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *Address) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct Breakpoint3Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in Breakpoint3 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out enum dbgBreakpointType *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LocationType )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out enum dbgBreakpointLocationType *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FunctionName )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FunctionLineOffset )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FunctionColumnOffset )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_File )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FileLine )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FileColumn )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ConditionType )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out enum dbgBreakpointConditionType *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HitCountType )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out enum dbgHitCountType *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HitCountTarget )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHits )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out signed long *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Program )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Program **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoint **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Children )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Breakpoints **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ResetHitCount )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Process )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Process2 **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BreakWhenHit )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_BreakWhenHit )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Message )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Macro )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Macro )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FilterBy )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_FilterBy )( 
            __RPC__in Breakpoint3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            __RPC__in Breakpoint3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *Address);
        
        END_INTERFACE
    } Breakpoint3Vtbl;

    interface Breakpoint3
    {
        CONST_VTBL struct Breakpoint3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Breakpoint3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define Breakpoint3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define Breakpoint3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define Breakpoint3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define Breakpoint3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define Breakpoint3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define Breakpoint3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define Breakpoint3_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 

#define Breakpoint3_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define Breakpoint3_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define Breakpoint3_put_Name(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Name(This,noname,retval) ) 

#define Breakpoint3_get_LocationType(This,retval)	\
    ( (This)->lpVtbl -> get_LocationType(This,retval) ) 

#define Breakpoint3_get_FunctionName(This,retval)	\
    ( (This)->lpVtbl -> get_FunctionName(This,retval) ) 

#define Breakpoint3_get_FunctionLineOffset(This,retval)	\
    ( (This)->lpVtbl -> get_FunctionLineOffset(This,retval) ) 

#define Breakpoint3_get_FunctionColumnOffset(This,retval)	\
    ( (This)->lpVtbl -> get_FunctionColumnOffset(This,retval) ) 

#define Breakpoint3_get_File(This,retval)	\
    ( (This)->lpVtbl -> get_File(This,retval) ) 

#define Breakpoint3_get_FileLine(This,retval)	\
    ( (This)->lpVtbl -> get_FileLine(This,retval) ) 

#define Breakpoint3_get_FileColumn(This,retval)	\
    ( (This)->lpVtbl -> get_FileColumn(This,retval) ) 

#define Breakpoint3_get_ConditionType(This,retval)	\
    ( (This)->lpVtbl -> get_ConditionType(This,retval) ) 

#define Breakpoint3_get_Condition(This,retval)	\
    ( (This)->lpVtbl -> get_Condition(This,retval) ) 

#define Breakpoint3_get_Language(This,retval)	\
    ( (This)->lpVtbl -> get_Language(This,retval) ) 

#define Breakpoint3_get_HitCountType(This,retval)	\
    ( (This)->lpVtbl -> get_HitCountType(This,retval) ) 

#define Breakpoint3_get_HitCountTarget(This,retval)	\
    ( (This)->lpVtbl -> get_HitCountTarget(This,retval) ) 

#define Breakpoint3_get_Enabled(This,retval)	\
    ( (This)->lpVtbl -> get_Enabled(This,retval) ) 

#define Breakpoint3_put_Enabled(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Enabled(This,noname,retval) ) 

#define Breakpoint3_get_Tag(This,retval)	\
    ( (This)->lpVtbl -> get_Tag(This,retval) ) 

#define Breakpoint3_put_Tag(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Tag(This,noname,retval) ) 

#define Breakpoint3_get_CurrentHits(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentHits(This,retval) ) 

#define Breakpoint3_get_Program(This,retval)	\
    ( (This)->lpVtbl -> get_Program(This,retval) ) 

#define Breakpoint3_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define Breakpoint3_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define Breakpoint3_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 

#define Breakpoint3_get_Children(This,retval)	\
    ( (This)->lpVtbl -> get_Children(This,retval) ) 

#define Breakpoint3_ResetHitCount(This,retval)	\
    ( (This)->lpVtbl -> ResetHitCount(This,retval) ) 

#define Breakpoint3_get_Process(This,retval)	\
    ( (This)->lpVtbl -> get_Process(This,retval) ) 

#define Breakpoint3_get_BreakWhenHit(This,retval)	\
    ( (This)->lpVtbl -> get_BreakWhenHit(This,retval) ) 

#define Breakpoint3_put_BreakWhenHit(This,noname,retval)	\
    ( (This)->lpVtbl -> put_BreakWhenHit(This,noname,retval) ) 

#define Breakpoint3_get_Message(This,retval)	\
    ( (This)->lpVtbl -> get_Message(This,retval) ) 

#define Breakpoint3_put_Message(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Message(This,noname,retval) ) 

#define Breakpoint3_get_Macro(This,retval)	\
    ( (This)->lpVtbl -> get_Macro(This,retval) ) 

#define Breakpoint3_put_Macro(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Macro(This,noname,retval) ) 

#define Breakpoint3_get_FilterBy(This,retval)	\
    ( (This)->lpVtbl -> get_FilterBy(This,retval) ) 

#define Breakpoint3_put_FilterBy(This,noname,retval)	\
    ( (This)->lpVtbl -> put_FilterBy(This,noname,retval) ) 


#define Breakpoint3_get_Address(This,Address)	\
    ( (This)->lpVtbl -> get_Address(This,Address) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Breakpoint3_INTERFACE_DEFINED__ */


#ifndef __StackFrame2_INTERFACE_DEFINED__
#define __StackFrame2_INTERFACE_DEFINED__

/* interface StackFrame2 */
/* [object][version][dual][uuid] */ 


EXTERN_C const IID IID_StackFrame2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD76BAF1-20DF-4659-864F-E8AEB46139FB")
    StackFrame2 : public StackFrame
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ __RPC__out ULONG *Depth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UserCode( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *UserCode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Locals2( 
            /* [in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expressions **Expressions) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Arguments2( 
            /* [in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expressions **Expressions) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LineNumber( 
            /* [retval][out] */ __RPC__out DWORD *LineNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *FileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct StackFrame2Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in StackFrame2 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in StackFrame2 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in StackFrame2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in StackFrame2 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in StackFrame2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_FunctionName )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ReturnType )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Locals )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Expressions **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Expressions **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt Thread **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt StackFrames **retval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__out ULONG *Depth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserCode )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *UserCode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Locals2 )( 
            __RPC__in StackFrame2 * This,
            /* [in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expressions **Expressions);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments2 )( 
            __RPC__in StackFrame2 * This,
            /* [in] */ VARIANT_BOOL AllowAutoFuncEval,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Expressions **Expressions);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LineNumber )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__out DWORD *LineNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            __RPC__in StackFrame2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *FileName);
        
        END_INTERFACE
    } StackFrame2Vtbl;

    interface StackFrame2
    {
        CONST_VTBL struct StackFrame2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define StackFrame2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define StackFrame2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define StackFrame2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define StackFrame2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define StackFrame2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define StackFrame2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define StackFrame2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define StackFrame2_get_Language(This,retval)	\
    ( (This)->lpVtbl -> get_Language(This,retval) ) 

#define StackFrame2_get_FunctionName(This,retval)	\
    ( (This)->lpVtbl -> get_FunctionName(This,retval) ) 

#define StackFrame2_get_ReturnType(This,retval)	\
    ( (This)->lpVtbl -> get_ReturnType(This,retval) ) 

#define StackFrame2_get_Locals(This,retval)	\
    ( (This)->lpVtbl -> get_Locals(This,retval) ) 

#define StackFrame2_get_Arguments(This,retval)	\
    ( (This)->lpVtbl -> get_Arguments(This,retval) ) 

#define StackFrame2_get_Module(This,retval)	\
    ( (This)->lpVtbl -> get_Module(This,retval) ) 

#define StackFrame2_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define StackFrame2_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define StackFrame2_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 


#define StackFrame2_get_Depth(This,Depth)	\
    ( (This)->lpVtbl -> get_Depth(This,Depth) ) 

#define StackFrame2_get_UserCode(This,UserCode)	\
    ( (This)->lpVtbl -> get_UserCode(This,UserCode) ) 

#define StackFrame2_get_Locals2(This,AllowAutoFuncEval,Expressions)	\
    ( (This)->lpVtbl -> get_Locals2(This,AllowAutoFuncEval,Expressions) ) 

#define StackFrame2_get_Arguments2(This,AllowAutoFuncEval,Expressions)	\
    ( (This)->lpVtbl -> get_Arguments2(This,AllowAutoFuncEval,Expressions) ) 

#define StackFrame2_get_LineNumber(This,LineNumber)	\
    ( (This)->lpVtbl -> get_LineNumber(This,LineNumber) ) 

#define StackFrame2_get_FileName(This,FileName)	\
    ( (This)->lpVtbl -> get_FileName(This,FileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __StackFrame2_INTERFACE_DEFINED__ */

#endif /* __EnvDTE90a_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


