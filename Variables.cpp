#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Integer types
    int integerVar = 42; // 32-bit signed integer
    long long longIntegerVar = 1234567890123456;
    short shortIntegerVar = 123;

    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 3.141592653589793;
    long double longDoubleVar = 3.14159265358979323846;

    // Boolean type
    bool boolVar = true;

    // Character types
    char charVar = 'A';
    wchar_t wideCharVar = L'Ω';
    char16_t char16Var = u'∑';
    char32_t char32Var = U'∆';

    // String
    string stringVar = "Hello, C++";
    wstring wideStringVar = L"Wide String";
    vector<int> o; // dynamic array of integers

    // Other types
    void *voidPtr = nullptr;
    auto autoVar = 42; // Type automatically deduced by the compiler

    // Display values
    cout << "int: " << integerVar << endl;
    cout << "long long: " << longIntegerVar << endl;
    cout << "short: " << shortIntegerVar << endl;
    cout << "float: " << floatVar << endl;
    cout << "double: " << doubleVar << endl;
    cout << "long double: " << longDoubleVar << endl;
    cout << "bool: " << boolVar << endl;
    cout << "char: " << charVar << endl;
    wcout << L"wide char: " << wideCharVar << endl;
    wcout << L"char16_t: " << char16Var << endl;
    wcout << L"char32_t: " << char32Var << endl;
    cout << "string: " << stringVar << endl;
    wcout << L"wide string: " << wideStringVar << endl;
    cout << "void*: " << voidPtr << endl;
    cout << "auto: " << autoVar << endl;

    return 0;
}
