#include <iostream>
using namespace std;
int main()
{
    cout << "A simple program to output 12,14,16,18,20,22,24,26,28 on the screen";
    cout << "Using a for loop \n";
    for (int num = 12; num <= 28; num += 2) // loop will run till num is less than or equal to
        // 28 and incremented by 2 in each iteration.
        cout << num << endl;
    return 0;
}