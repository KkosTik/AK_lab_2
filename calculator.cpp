#include "calculator.h"
// start
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}
/// <summary>description</summary>
/// <summary>MyMethod is a method in the MyClass class.
/// <para>Here's how you could make a second paragraph in a description. <see cref="System::Console::WriteLine"/> for information about output statements.</para>
/// <seealso cref="MyClass::MyMethod2"/>
/// </summary>
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
// end