/*Implicit(automatic conversion) vs
Explicit(operatoor conversion)*/
#include <iostream>
using namespace std;

int main()
{
    double num = 15.5;                       // Declare and initialize a double variable
    int num1, num2, num3, num4, num5, myNum; // Declare an interger variables
    char myChar;                             // Declare a character variable
    int myInt = 45;                          // Declare and initialize interger variable
    float myfloat = 4.567;                   // Declare and initialize float variable

    cout << "Implicit Type Casting" << endl;
    num1 = num; // Implicit type casting, automatic conversion
    cout << "Value of num2: " << num1 << endl;
    cout << "\n\nExplicit Type Casting" << endl;
    cout << "Before explicit conversion: \n";
    cout << "num before explicit conversion: " << num << endl;
    num1 = (int)num; // Explicit type casting, operator conversion

    // Explicit Conversion (operator function)
    num2 = static_cast<int>(num);      // Static cast operator is used to convert the value of num1 into integer type
    num3 = (int)(num);                 // Static Casting operator is used to convert the value of num1 into integer
    num4 = int(num);                   // Static Casting operator is used to convert the value of num1 into integer
    num5 = static_cast<int>(num);      // Convert the value of num1 to integer using static_cast operator
    myChar = static_cast<char>(myInt); // Convert a char to integer using static_cast operator

    cout << "After explicit conversion: \n";
    cout << "num1 after explicit conversion: " << num1 << endl;
    cout << "num2 after explicit conversion: " << num2 << endl;
    cout << "num3 after explicit conversion: " << num3 << endl;
    cout << "num4 after explicit conversion: " << num4 << endl;
    cout << "num5 after explicit conversion: " << num5 << endl;
    cout << "myChar after explicit conversion: " << myChar << endl;

    return 0;
}