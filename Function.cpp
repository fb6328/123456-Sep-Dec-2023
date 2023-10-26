#include <iostream>
#include <string>

using namespace std;

// Global variable declaration and initialization
int globalVar = 30;
const int age = 25; // Constant global variable. Value will not change
void myFunction()
{
    // Function code block
    // Local variables
    int localVar1 = 10, localVar2 = 12;
    string localString1 = "Local String 1", localString2 = "Local String 2";
    cout << "Local Variable 1 =" << localVar1 << endl;
}

void addAndDisplay(int value1, int value2) // A function to add and display values
{
    int sum = value1 + value2; // Sum is a Local variable within the function
    cout << "Sum of " << value1 << " and " << value2 << " is " << sum << endl;
}
int main()
{
    // Main function code block
    globalVar = 50;
    // age = 70;
    cout
        << "Global variable value =" << globalVar << endl;
    cout << "Global variable age = " << age << endl;
    // cout << "Local variable 1 =" << localVar1;
    myFunction();
    addAndDisplay(2, 3);
    return 0;
}
