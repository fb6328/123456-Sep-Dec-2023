#include <iostream>
using namespace std;
int main()
{
    // Declare and initialize a 2D array with 3 rows and 4 cloumns
    int twoDArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // Iterating through the 2D array using nested loops
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << twoDArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
