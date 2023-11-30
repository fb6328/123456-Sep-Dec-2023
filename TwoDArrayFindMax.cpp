#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{
    // Declare and initialize a 2D array
    int matrix[ROWS][COLS] = {
        {1, 5, 3, 9},
        {8, 2, 7, 4},
        {6, 11, 10, 15}};

    int maxElement = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    // Nested for loop to find the maximum element and its position
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Print the maximum element and its position
    cout << "The maximum element is: " << maxElement << std::endl;
    cout << "Position (Row, Column): (" << maxRow << ", " << maxCol << ")" << std::endl;

    return 0;
}
