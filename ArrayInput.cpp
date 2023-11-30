#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int index = 0;

    while (index < sizeof(numbers) / sizeof(int))
    {
        cout << "Enter a number: ";
        cin >> numbers[index];
        index++;
    }
    // Printing the array elements
    cout << "\nThe entered numbers are : \n";
    for (int j = 0; j < sizeof(numbers) / sizeof(int); j++)
    {
        cout << numbers[j] << ", ";
    }

    return 0;
}