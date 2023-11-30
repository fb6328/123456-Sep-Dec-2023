#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare a 2D array with 5 rows and 4 columns
    string studentDetails[5][4] = {{"172235", "166705", "124263", "170458"},
                                   {"Nour Mustafa", "Cephas Melisa", "Chumo Victr", "Kagai Clara"},
                                   {"BBIT", "BCOM", "CNS", "BHM"},
                                   {"80.45", "76.56", "90.25", "78.80"},
                                   {"A", "A", "A", "A"}};
    for (int rowIndex = 0; rowIndex < 5; ++rowIndex)
    {
        for (int colIndex = 0; colIndex < 4; ++colIndex)
        {
            cout << studentDetails[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }
    return 0;
}
