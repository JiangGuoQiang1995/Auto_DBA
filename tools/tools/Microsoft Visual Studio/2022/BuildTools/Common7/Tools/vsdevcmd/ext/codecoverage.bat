
if "%VSCMD_TEST%" NEQ "" goto :test
if "%VSCMD_ARG_CLEAN_ENV%" NEQ "" goto :clean_env

if exist "%DevEnvDir%Extensions\Microsoft\CodeCoverage.Console" set "PATH=%DevEnvDir%Extensions\Microsoft\CodeCoverage.Console;%PATH%"

goto :end

@REM ------------------------------------------------------------------------
:test

set __VSCMD_TEST_FailCount=0

setlocal

if NOT EXIST "%DevEnvDir%Extensions\Microsoft\CodeCoverage.Console" goto :test_end
@echo [TEST:%~nx0] Checking for Microsoft.CodeCoverage.Console...
where Microsoft.CodeCoverage.Console.exe > NUL 2>&1
if "%ERRORLEVEL%" NEQ "0" (
    @echo [ERROR:%~nx0] 'where Microsoft.CodeCoverage.Console.exe' failed
    set /A __VSCMD_TEST_FailCount=__VSCMD_TEST_FailCount+1
)

endlocal & set __VSCMD_TEST_FailCount=%__VSCMD_TEST_FailCount%

:test_end

@REM return value other than 0 if tests failed.
if "%__VSCMD_TEST_FailCount%" NEQ "0" (
   set __VSCMD_Test_FailCount=
   exit /B 1
)

set __VSCMD_Test_FailCount=
exit /B 0

@REM ------------------------------------------------------------------------
:clean_env
@REM ******************************************************************
@REM Note: INCLUDE, LIB, LIBPATH, PATH are handled by vsdevcmd.bat
@REM       directly. If the script only changes one of these env vars
@REM       then no custom action is needed.
@REM ******************************************************************

goto :end
:end

exit /B 0