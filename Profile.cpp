#include <iostream>
using namespace std;
int main()
{
    // Simple data input using cin>>
    string fullName;
    cout << "Enter any paragraph of text:";
    getline(cin, fullName);
    cout << fullName << endl;
    return 0;
}