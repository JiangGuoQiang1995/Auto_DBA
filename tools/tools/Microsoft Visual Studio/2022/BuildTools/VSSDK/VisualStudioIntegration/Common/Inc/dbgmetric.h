#ifndef __METRIC_H__
#define __METRIC_H__

// ------------------------------------------------------------------
// Predefined metric names

// "CLSID"
extern LPCWSTR metricCLSID;
// "Name"
extern LPCWSTR metricName;
// "Language"
extern LPCWSTR metricLanguage;



#ifndef NO_DBGMETRIC // if NO_DBGMETIC is defined, don't include functions

// ------------------------------------------------------------------
// General purpose metric routines

//HRESULT GetMetric(LPCWSTR pszMachine, LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, VARIANT* pvarValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, _Out_ DWORD* pdwValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, _Out_ DWORD* pdwValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetric(HKEY key, _In_ LPCWSTR pszMetric, _Out_ DWORD* pdwValue);
HRESULT __stdcall GetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, BSTR* pbstrValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, BSTR* pbstrValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetric(HKEY key, _In_ LPCWSTR pszMetric, _Outptr_ BSTR* pbstrValue);
HRESULT __stdcall GetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, _Out_ GUID* pguidValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, _Out_ GUID* pguidValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetric(HKEY key, _In_ LPCWSTR pszMetric, _Out_ GUID* pguidValue);
HRESULT __stdcall GetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidValues, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidValues, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);
HRESULT __stdcall GetMetric(HKEY key, _In_ LPCWSTR pszMetric, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidValues, _Inout_ DWORD* pdwSize);

//HRESULT SetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, const VARIANT varValue);
HRESULT __stdcall SetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, const DWORD dwValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, const DWORD dwValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, LPCWSTR pszValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, LPCWSTR pszValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, REFGUID guidValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, REFGUID guidValue, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, _In_count_(dwSize) const GUID* rgguidValues, DWORD dwSize, bool fUserSpecific, LPCWSTR pszAltRoot);
HRESULT __stdcall SetMetricEx(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetricSubPath, LPCWSTR pszMetric, _In_count_(dwSize) const GUID* rgguidValues, DWORD dwSize, bool fUserSpecific, LPCWSTR pszAltRoot);

HRESULT __stdcall OpenMetricSectionKey(HKEY hkeyRoot, LPCWSTR pszType, REFGUID guidSection, REGSAM samDesired, bool fCreate, HKEY* phkeyMetrics, LPCWSTR pszAltRoot);
HRESULT __stdcall OpenMetricSectionKeyEx(HKEY hkeyRoot, LPCWSTR pszType, REFGUID guidSection, LPCWSTR szMetricSubPath, REGSAM samDesired, bool fCreate, HKEY* phkeyMetrics, LPCWSTR pszAltRoot);
HRESULT __stdcall EnumMetricSections(LPCWSTR pszType, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidSections, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);

HRESULT __stdcall RemoveMetric(LPCWSTR pszType, REFGUID guidSection, LPCWSTR pszMetric, LPCWSTR pszAltRoot);

HRESULT __stdcall SetMetricLocale(WORD wLangId);
WORD __stdcall GetMetricLocale();

HRESULT ReadTextFileAsBstr(LPCWSTR szFileName, BSTR *pbstrFileContent);
#endif // end ifndef NO_DBGMETRIC



// Predefined metric types
// "Engine"
extern LPCWSTR metrictypeEngine;
// "PortSupplier"
extern LPCWSTR metrictypePortSupplier;
// "Exception"
extern LPCWSTR metrictypeException;
// "EEExtensions"
extern LPCWSTR metricttypeEEExtension;
// "ExpressionEvaluator"
extern LPCWSTR metrictypeExpressionEvaluator;

// Predefined engine metric names
// AddressBP
extern LPCWSTR metricAddressBP;
// AlwaysLoadLocal
extern LPCWSTR metricAlwaysLoadLocal;
// LoadInDebuggeeSession
extern LPCWSTR metricLoadInDebuggeeSession;
// LoadedByDebuggee
extern LPCWSTR metricLoadedByDebuggee;
// Attach
extern LPCWSTR metricAttach;
// CallStackBP
extern LPCWSTR metricCallStackBP;
// ConditionalBP
extern LPCWSTR metricConditionalBP;
// DataBP
extern LPCWSTR metricDataBP;
// DataBPAsString
extern LPCWSTR metricDataBPAsString;
// PersistDataBP
extern LPCWSTR metricPersistDataBP;
// BreakWhenValueChanges
extern LPCWSTR metricBreakWhenValueChanges;
// Disassembly
extern LPCWSTR metricDisassembly;
// Dump writing
extern LPCWSTR metricDumpWriting;
// ENC
extern LPCWSTR metricENC;
// Exceptions
extern LPCWSTR metricExceptions;
// FunctionBP
extern LPCWSTR metricFunctionBP;
// HitCountBP
extern LPCWSTR metricHitCountBP;
// JITDebug
extern LPCWSTR metricJITDebug;
// Memory
extern LPCWSTR metricMemory;
// Port supplier
extern LPCWSTR metricPortSupplier;
// Registers
extern LPCWSTR metricRegisters;
// SetNextStatement
extern LPCWSTR metricSetNextStatement;
// SuspendThread
extern LPCWSTR metricSuspendThread;
// WarnIfNoSymbols
extern LPCWSTR metricWarnIfNoSymbols;
// Filtering non-user frames
extern LPCWSTR metricShowNonUserCode;
// What CLSID provides program nodes?
extern LPCWSTR metricProgramProvider;
// Always load the program provider locally?
extern LPCWSTR metricAlwaysLoadProgramProviderLocal;
// Use engine to watch for process events instead of program provider?
extern LPCWSTR metricEngineCanWatchProcess;
// Engines will be placed in the SDM's engine filter in descending order of priority. This determines the order in which WatchForProviderEvents/etc is called during multi-engine launch
extern LPCWSTR metricEnginePriority;
// Can we do remote debugging?
extern LPCWSTR metricRemoteDebugging;
// Does the program provider support returning process information for a process that we are not debugging?
// This should _NOT_ be set to true unlesss the program provider can return information without the use
// of DCOM. This implies that 'metricAlwaysLoadProgramProviderLocal' should be set as well.
extern LPCWSTR metricRemoteProcessListing;
// Should the encmgr use native's encbuild.dll to build for enc?
extern LPCWSTR metricEncUseNativeBuilder;
// When debugging a 64-bit process under WOW, should we load the engine 'remotely'
// or in the devenv process (which is running under WOW64)
extern LPCWSTR metricLoadUnderWOW64;
// When debugging a 64-bit process under WOW, should we load the program provider
// 'remotely' or in the devenv process (which is running under WOW64)
extern LPCWSTR metricLoadProgramProviderUnderWOW64;
// Stop on unhandled exceptions thrown across app domain boundaries
extern LPCWSTR metricStopOnExceptionCrossingManagedBoundary;
// Warn user if there is no "user" code on launch
extern LPCWSTR metricWarnIfNoUserCodeOnLaunch;
// Priority for engine automatic selection (preference given to higher)
extern LPCWSTR metricAutoSelectPriority;
// engines not compatible with this engine (only for automatic engine selection)
extern LPCWSTR metricAutoSelectIncompatibleList;
// engines not compatible with this engine
extern LPCWSTR metricIncompatibleList;
// Disable JIT optimizations while debugging
extern LPCWSTR metricDisableJITOptimization;
// Default memory organization 0=little endian (most typical), 1=big endian
extern LPCWSTR metricBigEndian;
// Allow multiple debuggers (no causality)
extern LPCWSTR metricAllowMultipleDebuggers;
// Ignore GPU race hazards if the data didn't change the value
extern LPCWSTR metricGpuRaceHazardsAllowSame;
// Is this engine an IntelliTrace engine?
extern LPCWSTR metricIntellitraceEngine;
// Does the engine support search in the various evaluation windows.
// This should be enabled only for engines which BOTH implement the async evaluation APIs (IDebugExpression157, IDebugProperty157)
// AND can safely enumerate large numbers of hidden children without a significant risk of side effects.
extern LPCWSTR metricSupportsEESearch;
// Does the engine bind breakpoints and send boud breakpoint events for text spans or documents
// outside of the bp request. For example, the script engine may get a bp request for a .aspx file
// and the actual bound event will be in the dynamic script document, not the project file.
// if this is false or not present, the UI will ignore bound bp events outside the text span in the bp request
extern LPCWSTR metricBindBreakpointsOutsideRequestSpan;
// Is object favorites supported on autos/locals/watch windows
extern LPCWSTR metricSupportsObjectFavorites;
// Does the engine support exception conditions (i.e. originating module)
extern LPCWSTR metricExceptionConditions;
// Does the engine's implementation of IDebugEngineLaunch2 handle non-debug launches
extern LPCWSTR metricUseEngineForNonDebugLaunch;
// CLSID for the IDebugCustomViewer implementation used by this engine. This will be used when metric, vendor, and language are set to null.
extern LPCWSTR metricCustomVisualizerVSHost;

// Filtering non-user frames
extern LPCWSTR metricShowNonUserCode;

// Stepping in "user" code only
extern LPCWSTR metricJustMyCodeStepping;
// Allow all threads to run when doing a funceval
extern LPCWSTR metricAllThreadsRunOnFuncEval;
// Use Shim API to get ICorDebug
extern LPCWSTR metricUseShimAPI;
// Attempt to map breakpoints in client-side script
extern LPCWSTR metricMapClientBreakpoints;
// Enable funceval quick abort
extern LPCWSTR metricEnableFuncEvalQuickAbort;
// Specify detour dll names for funceval quick abort
extern LPCWSTR metricFuncEvalQuickAbortDlls;
// Specify EXEs for which we shouldn't do FEQA
extern LPCWSTR metricFuncEvalQuickAbortExcludeList;
// Trace settings.
extern LPCWSTR metricTracing;
extern LPCWSTR metricEnableTracing;
// Enable/disable crossthread dependency notifications
extern LPCWSTR metricCrossThreadDependencyNotification;

// Can the engine get the JMC code specs
extern LPCWSTR metricJMCCodeSpecs;

// Managed engine activation
extern LPCWSTR metricEngineClass;
extern LPCWSTR metricEngineAssembly;
extern LPCWSTR metricProgramProviderClass;
extern LPCWSTR metricProgramProviderAssembly;

// Predefined EE metric names
// Engine
extern LPCWSTR metricEngine;
// Preload Modules
extern LPCWSTR metricPreloadModules;
// ThisObjectName
extern LPCWSTR metricThisObjectName;
// HideGoToSource
extern LPCWSTR metricHideGoToSource;
// HideGoToDisassembly
extern LPCWSTR metricHideGoToDisassembly;
// HideRunToCursor
extern LPCWSTR metricHideRunToCursor;
// HideBreakpointCommands
extern LPCWSTR metricHideCallStackBreakpoints;
// SupportsExtendedSideEffects
extern LPCWSTR metricSupportsExtendedSideEffects;

// Predefined EE Extension metric names
// ExtensionDll
extern LPCWSTR metricExtensionDll;
// RegistersSupported
extern LPCWSTR metricExtensionRegistersSupported;
// RegistersEntryPoint
extern LPCWSTR metricExtensionRegistersEntryPoint;
// TypesSupported
extern LPCWSTR metricExtensionTypesSupported;
// TypesEntryPoint
extern LPCWSTR metricExtensionTypesEntryPoint;

// Predefined PortSupplier metric names
// PortPickerCLSID
extern LPCWSTR metricPortPickerCLSID;
// RemotePortPickerCLSID
extern LPCWSTR metricRemotePortPickerCLSID;
// DisallowUserEnteredPorts
extern LPCWSTR metricDisallowUserEnteredPorts;
// PidBase
extern LPCWSTR metricPidBase;


#ifndef NO_DBGMETRIC // if NO_DBGMETIC is defined, don't include functions

// ------------------------------------------------------------------
// Engine-specific metric routines

HRESULT __stdcall EnumDebugEngines(REFGUID guidPortSupplier, BOOL fRequireRemoteDebugging, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidEngines, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);

#endif // end ifndef NO_DBGMETRIC



#ifndef NO_DBGMETRIC // if NO_DBGMETIC is defined, don't include functions

// ------------------------------------------------------------------
// EE-specific metric routines

HRESULT __stdcall GetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, _Out_ DWORD* pdwValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, BSTR* pbstrValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, _Out_ GUID* pguidValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidValues, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);

HRESULT __stdcall SetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, DWORD dwValue, LPCWSTR pszAltRoot);
HRESULT __stdcall SetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, LPCWSTR pszValue, LPCWSTR pszAltRoot);
HRESULT __stdcall SetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, REFGUID guidValue, LPCWSTR pszAltRoot);
HRESULT __stdcall SetEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, _In_count_(dwSize) const GUID* rgguidValues, DWORD dwSize, LPCWSTR pszAltRoot);

HRESULT __stdcall EnumEEs(_Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidLang, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) GUID* rgguidVendor, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);

HRESULT __stdcall RemoveEEMetric(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, LPCWSTR pszAltRoot);

HRESULT __stdcall GetEEMetricFile(REFGUID guidLang, REFGUID guidVendor, LPCWSTR pszMetric, BSTR* pbstrValue, LPCWSTR pszAltRoot);

#endif // end ifndef NO_DBGMETRIC



#ifndef NO_DBGMETRIC // if NO_DBGMETIC is defined, don't include functions

// ------------------------------------------------------------------
// SP-specific metric routines

HRESULT __stdcall GetSPMetric(REFGUID guidSymbolType, LPCWSTR pszStoreType, LPCWSTR pszMetric, BSTR* pbstrValue, LPCWSTR pszAltRoot);
HRESULT __stdcall GetSPMetric(REFGUID guidSymbolType, LPCWSTR pszStoreType, LPCWSTR pszMetric, _Out_ GUID* pguidValue, LPCWSTR pszAltRoot);

HRESULT __stdcall SetSPMetric(REFGUID guidSymbolType, LPCWSTR pszStoreType, LPCWSTR pszMetric, LPCWSTR pszValue, LPCWSTR pszAltRoot);
HRESULT __stdcall SetSPMetric(REFGUID guidSymbolType, LPCWSTR pszStoreType, LPCWSTR pszMetric, REFGUID guidValue, LPCWSTR pszAltRoot);

HRESULT __stdcall RemoveSPMetric(REFGUID guidSymbolType, LPCWSTR pszStoreType, LPCWSTR pszMetric, LPCWSTR pszAltRoot);

#endif // end ifndef NO_DBGMETRIC



// Predefined SP store types
// "file"
extern LPCWSTR storetypeFile;
// "metadata"
extern LPCWSTR storetypeMetadata;


#ifndef NO_DBGMETRIC // if NO_DBGMETIC is defined, don't include functions

// ------------------------------------------------------------------
// Exception metric routines

struct EXCEPTION_DEFAULT_STOP_STATE
{
    BSTR bstrExceptionName;
    DWORD dwCode;
    DWORD /*EXCEPTION_STATE*/ dwState; // EXCEPTION_STOP_FIRST_CHANCE, EXCEPTION_STOP_USER_FIRST_CHANCE, and/or EXCEPTION_STOP_USER_UNCAUGHT
    GUID guidType; // This is the guid category
};

// Enumerate the default stop settings for a particular exception type (ex: guidNativeOnlyEng, 
// guidMDANotification) from the registry. Any exception not is this list has a default stop state of
// EXCEPTION_STOP_SECOND_CHANCE.
HRESULT __stdcall EnumExceptionDefaultStopMetrics(REFGUID guidType, _Out_opt_ DWORD* pdwDefaultState, _Out_opt_cap_post_count_(*pdwSize, *pdwSize) EXCEPTION_DEFAULT_STOP_STATE* rgSettings, _Inout_ DWORD* pdwSize, LPCWSTR pszAltRoot);

HRESULT __stdcall GetExceptionDefaultStopState(REFGUID guidType, _In_opt_ LPCWSTR szExceptionName, DWORD dwCode, _Out_ DWORD * pdwState, _In_z_ LPCWSTR pszAltRoot);

HRESULT __stdcall GetExceptionCategoryMetric(_In_ REFGUID guidType, _Deref_opt_out_ LPBSTR pbstrExceptionCategoryName, _Out_opt_ LPDWORD pdwState, _In_opt_z_ LPCTSTR pszAltRoot);

HRESULT __stdcall EnumExceptionMetrics(_In_ REFGUID guidType, _Outref_result_buffer_to_(*pdwSize, *pdwSize) LPBSTR& rgbstrExceptions, _Outref_result_buffer_to_(*pdwSize, *pdwSize) LPDWORD& rgdwState, _Outref_result_buffer_to_(*pdwSize, *pdwSize) LPDWORD& rgdwCode, _Out_ LPDWORD pdwSize, _In_z_ LPCWSTR pszAltRoot);

HRESULT __stdcall EnumExceptionCategoryMetrics(_Outref_result_buffer_to_(*pdwSize, *pdwSize) LPGUID& rgguidTypes, _Outref_result_buffer_to_(*pdwSize, *pdwSize) LPBSTR& rgbstrExceptions, _Outref_result_buffer_to_(*pdwSize, *pdwSize) LPDWORD& rgdwState, _Out_ LPDWORD pdwSize, _In_ LPCWSTR pszAltRoot);

HRESULT __stdcall RemoveAllExceptionMetrics(REFGUID guidType, LPCWSTR pszAltRoot);

#endif // end ifndef NO_DBGMETRIC

#endif // __METRIC_H__
