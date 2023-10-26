/*Implicit(automatic conversion) vs
Explicit(operatoor conversion)*/
#include <iostream>
using namespace std;

int main()
{
    double num1 = 15.5; // Declare and initialize a double variable
    int num2;           // Declare an interger variable
    cout << "Implicit Type Casting" << endl;
    num2 = num1; // Implicit type casting, automatic conversion
    cout << "Value of num2: " << num2 << endl;
    cout << "\n\nExplicit Type Casting" << endl;
    cout << "Before explicit conversion: \n";
    cout << "num1 before explicit conversion: " << num1 << endl;
    num2 = (int)num1; // Explicit type casting, operator conversion

    // Explicit Conversion (operator function)
    num2 = static_cast<int>(num1); // Static cast operator is used to convert the value of num1 into integer type
    num2 = static_cast<int>(num1); // Static Casting operator is used to convert the value of num1 into integer
    num2 = static_cast<int>(num1); // Static Casting operator is used to convert the value of num1 into integer
    num2 = static_cast<int>(num1); // Convert the value of num1 to integer using static_cast operator
    cout << "num1 after explicit conversion: " << num1 << endl;
    cout << "num2 after explicit conversion: " << num2 << endl;
    return 0;
}