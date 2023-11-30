#include <iostream>

using namespace std;

int main()
{

    // declare and initialize an array, holding 5 integers
    int nums[5], sum;

    // declare and initialize a counter integer
    int counter = 0;

    // Prompt the user to enter the 5 numbers
    cout << "Please enter 5 numbers: ";

    // Now, loop through array, as you input the numbers into the array
    while (counter < 5)
    {
        cin >> nums[counter];

        // increment as you access each of the array's indices
        counter++;
    }

    cout << "\n\n";
    cout << "Here is the content of our nums array: " << endl;

    // iterate through the array and output each of the array's values
    for (int iterator = 0; iterator < 5; ++iterator)
    {
        cout << nums[iterator] << endl;
        sum += nums[iterator];
    }

    cout << "The sum is :" << sum << endl;
    cout << "The size of array nums is " << sizeof(nums) / sizeof(int);

    return 0;
}