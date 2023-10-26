// Inputting long strings e.g paragraphs, full names etc
#include <iostream>
using namespace std;
int main()
{
    string str1;
    cout << "Enter a long string: ";
    getline(cin, str1);
    cout << "You entered the following: " << endl;
    cout << str1 << endl;
}