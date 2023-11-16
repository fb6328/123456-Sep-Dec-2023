#include <iostream>
using namespace std;
int main()
{
    int value = 20, sum = 0; // initialize variables
    while (value <= 25)      // loop through values
    {
        sum = sum + value; // calculate sum
        value++;           // increment value
    }
    cout << "Sum of numbers from 20 to 25 is: " << sum << endl; // display result
}