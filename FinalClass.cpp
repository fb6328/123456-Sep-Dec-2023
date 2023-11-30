#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    // All we need to do is declare the function here and invoke it.
    // Declaration
    // void greetings(); // Function prototype
    // Invocation of the functions
    // cout << "Sum 1 is " << sumOfValues(4, 5);
    // cout << "Sum 2 is " << sumOfValues(10, 20);
    //  greetings();
    /* int base, height, area;
     char resp;
     do
     {
         cout << "Enter the base:\n";
         cin >> base;
         cout << "Enter the height:\n";
         cin >> height;
         area = myTriangle(base, height);
         cout << "The area is: " << area << endl;
         cout << "Do you want to calculate the area of another triangle?\n";
         cin >> resp;
     } while (resp == 'Y'); */
    // char resp;
    int num1, num2, num3;
    /*  do
      {
          int num;
          cout << "Enter a number to see if it is even or odd\n";
          cin >> num;
          string message = (checkEven(num) == 1) ? "Yes" : "No";
          cout << "Is " << num << " even? " << message << endl;
          cout << "Do you want to check another number? Enter Y to continue\n";
          cin >> resp;
      } while (resp == 'Y'); */
    cout << "Largest Number is " << findLargestNumberUsingSwithCase();

    /* int arrayValues[] = {10, 20, 30, 40, 50};
     cout << "Sum of numbers in the array = " << calcSumOfArrayElements(arrayValues) << endl;*/
    return 0;
}