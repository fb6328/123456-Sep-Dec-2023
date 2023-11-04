#include <iostream>
using namespace std;

int main()
{
    int opt; // Switch...case variable
    cout << "Hi. This is your BBIT Sem 1 Timetable (Sep-Dec 2023)";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday" << endl;
    cout << "Please select day of choice (e.g. 1, 2, 3, etc...)" << endl;
    cin >> opt;
    switch (opt)
    {
    case 1: // 1st possible value of the switch case variable
        cout << "Monday Classes\n...................." << endl;
        cout << "\t1. BBIT 1106: Maths for Business" << endl;
        cout << "\t2. BBIT 1102: Intro to Programming" << endl;
        break; // Directs the compiler to stop execution and jump out of the switch ..case
    case 2:
        cout << "Tuesday Classes\n..................." << endl;
        cout << "\t2. BBIT 1102: Intro to Programming" << endl;
        cout << "\t1. BBIT 1104: Ethics" << endl;
        break;
        /*Please continue code from this point
        for the rest of the weekdays*/
    case 3: // 1st possible value of the switch case variable
        cout << "Wednesday Classes\n...................." << endl;
        cout << "\t1. BBIT 1106: Maths for Business" << endl;
        cout << "\t2. BBIT 1102: Theology" << endl;
        cout << "\t2. BBIT 1102: Fundamentals of IT" << endl;
        break; // Directs the compiler to stop execution and jump out of the switch ..case
    default:
        cout << "Invalid Input";
    }
    return 0;
}
