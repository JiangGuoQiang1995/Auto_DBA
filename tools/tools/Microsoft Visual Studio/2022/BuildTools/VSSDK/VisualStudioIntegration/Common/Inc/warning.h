// warnings that are disabled for the Visual Studio builds
#pragma warning(disable:4290) // C++ Exception Specification ignored
#pragma warning(disable:4100) // Unreferenced formal parameter
#pragma warning(disable:4702) // unreachable code
#pragma warning(disable:4800) // forcing value to bool 'true' or 'false' (performance warning)
#pragma warning(disable:4141) // novtable more than once--broken in 8603 compiler
#pragma warning(disable:4296) // bool expression is always true
#pragma warning(disable:4242) // possible loss of data on conversion
#pragma warning(disable:4703) // Local pointer potentially used used w/o being initialized

// warnings disabled temporarily until fixed in VS sources (1/20/00 KarlSi)
#pragma warning(disable:4584) // bass-class 'x' is already a base-class of 'y'
#pragma warning(disable:4995) // using deprecated functionality (eg. iostream)

// warnings disabled temporarily until fixed in VS sources (2004/07/20 DJCarter)
#pragma warning(disable:4334) // '<<' : result of 32-bit shift implicitly converted to 64 bits
#pragma warning(disable:4293) // '<<' : shift count negative or too big, undefined behavior
#pragma warning(disable:4430) // missing type specifier - int assumed. Note: C++ does not support default-int

// warnings disabled temporarily until fixed in VS sources (2012/11/05 MarkLe)
// In the 17.1 compiler, C4312 is now enabled by default and VS sources are not clean
#pragma warning(disable:4312) // 'type cast' : conversion from 'int' to 'void *' of greater size

// warning disabled for IJW
#pragma warning(disable:4793) // 'vararg' : causes native code generation

// warnings disabled temporarily until fixed in VS sources (2014/01/06 JoEmmett)
#pragma warning(disable:4838) // narrowing conversion in initialization

// warnings disabled temporarily until fixed in VS sources (2014/04/07 XiangFan)
#pragma warning(disable:4456) // variable shadowing
#pragma warning(disable:4457) // variable shadowing
#pragma warning(disable:4458) // variable shadowing
#pragma warning(disable:4459) // variable shadowing

// warnings disabled temporarily until fixed in VS sources (2015/05/01 yuriysol)
#pragma warning(disable:4474) // too many arguments passed for format string
#pragma warning(disable:4477) // format string '%s' requires an argument of type 'char *' but variadic argument 1 has type 'wchar_t*'

#pragma warning(disable:4577) // noexcept used with no exception handling mode (2015/05/04 joemmett)

// warnings disabled until fixed in VS sources (2015/23/21 markle)
// C4595 is a new warning for C++ standard conformance; operator new/delete are not allowed to be inline
// Warning is enabled in VC compiler versions 19.00.23615.00+.
#pragma warning(disable:4595) // 'operator new': non-member operator new or delete functions may not be declared inline
