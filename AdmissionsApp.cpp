#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if (age >= 7)
    {
        cout << "admit to grade school\n";
    }
    else if (age >= 5 && age <= 6)
    {
        cout << "admit to kindergerten\n";
    }
    else if (age >= 3 && age <= 4)
    {
        cout << "admit to pre_school\n";
    }
    else if (age >= 1 && age <= 2)
    {
        cout << "admit to play_group\n";
    }
    else
    {
        cout << "Reject\n";
    }
    return 0;
}