// Logical, Arithmetic and Comparison operators
#include <iostream>
using namespace std;
int main()
{
    // *****Arithmetic operators*****
    int num1 = 10, num2 = 30;       // declare two integer variables
    bool var1 = true, var2 = false; // declare and initialize two bool variables
    // Addition operator '+'
    cout << "Sum of the two numbers: " << num1 + num2 << endl;
    // Subtraction operator '-'
    cout << "Difference of the two numbers: " << num2 - num1 << endl;
    // Multiplication operator '*'
    cout << "Product of the two numbers: " << num1 * num2 << endl;
    // Division operator '/'
    cout << "Division of the two numbers: " << (float)(num1 / num2) << endl;
    // Modulus operator '%'
    cout << "Modulus of the two numbers: " << num1 % num2 << endl;
    // Increment operator '++'
    cout << "Increment num1 by 1 :" << ++num1 << endl;
    // Decrement operator '--'
    cout << "Decrement num1 by 1 :" << --num1 << endl;
    //****Comparison operators****
    // Greater than operator '>'
    cout << num1 << " greater than " << num2 << " = " << (bool)(num1 > num2) << endl;
    // Less than operator '<'
    cout << num1 << " less than " << num2 << " = " << (bool)(num1 < num2) << endl;
    // Equal to operator '=='
    cout << num1 << " equal to " << num2 << " = " << (bool)(num1 == num2) << endl;
    // Not equal to operator '!='
    cout << num1 << " not equal to " << num2 << " = " << (bool)(num1 != num2) << endl;
    //****Boolean operators****
    // Boolean operator '&&'
    cout << var1 << " && " << var2 << "=" << (var1 && var2) << endl;
    // Boolean operator '||'
    cout << var1 << " || " << var2 << "=" << (var1 || var2) << endl;
    // Boolean operator '!'
    cout << " ! " << var1 << "=" << (!var1) << endl;

    return 0;
}