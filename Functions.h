#include <iostream>
using namespace std;

// Greetings function. Displays a number of statements on the screen
void greetings()
{
    // Function body
    cout << "Hello! Welcome to today's class" << endl;
    cout << "We will continue looking at functions in C++" << endl;
    cout << "We will start shortly" << endl;
    cout << "If you have any question from previous classes, put it in the chat now\n ";
    cout << "Are you all OK?. Let me see a yes/no in the chat." << endl;
    cout << "Good! In fact let me put all these outputs in a function called greetings()" << endl;
    cout << "Notice that the function will be created outside the main function.";
    cout << " So, I will have to move all these cout statements to the function." << endl;
}

int sumOfValues(int val1, int val2)
{
    // Function body
    //  Calculate sum of two values supplied
    return val1 + val2;
}

// Function to calculate the are of a right-angled triangle
double myTriangle(double base, double height)
{
    double area;
    area = base * height * 0.5;
    return area;
}
/*
Write a function called checkEven() that receives an integer as a parameter and
returns true if the parameter is an even number and false otherwise (if the integer odd).
*/
bool checkEven(int num)
{
    bool result;        // Declare result variable to store either true or false
    if ((num % 2 == 0)) // Check if number supplied is divisible by 2
    {
        result = true;
    }
    else
    {
        result = false;
    };
    return result;
}
// Checks largest number given three numbers
int findLargestNumber(int num1, int num2, int num3)
{
    int maxNum;
    if (num1 > num2 && num1 > num3)
    {
        maxNum = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        maxNum = num2;
    }
    else
        maxNum = num3;
    return maxNum;
}
// Checks largest number given three numbers using Switch Case Statement
int findLargestNumberUsingSwithCase()
{
    int num1 = 2, num2 = 3, num3 = 5;
    int maxNum = num1;

    switch (maxNum)
    {
    case 1:
        if (num1 >= num2 && num1 >= num3)
            maxNum = num1;
        break;
    case 2:
        if (num2 > num1 && num2 > num3)
            maxNum = num2;
        break;
    default:
        maxNum = num3;
        break;
    }
    return maxNum;
}
/*
Create a C++ function to calculate sum of 5 numbers stored in an array
*/
int calcSumOfArrayElements(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
