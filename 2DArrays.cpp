#include <iostream>
using namespace std;
int main()
{
    int sum, product, mean;
    // Declare and initialize a 2D array with 3 rows and 4 cloumns
    int twoDArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // Iterating through the 2D array using nested loops
    for (int rowIndex = 0; rowIndex < 3; ++rowIndex) // Outer loop iterates through the rows
    {
        for (int columnIndex = 0; columnIndex < 4; ++columnIndex) // Inner loop iterates through the column
        {
            cout << twoDArray[rowIndex][columnIndex] << " ";
            sum += twoDArray[rowIndex][columnIndex];
            product *= twoDArray[rowIndex][columnIndex];
        }
        cout << endl;
    }
    cout << "Sum of thevalues is " << sum << endl;
    cout << "Product of the values is " << product << endl;
    mean = sum / (sizeof(twoDArray) / sizeof(int));
    cout << "Mean of the values is " << mean << endl;
    cout << "The size of a [3][4] 2D array is " << sizeof(twoDArray) / sizeof(int);
    return 0;
}
