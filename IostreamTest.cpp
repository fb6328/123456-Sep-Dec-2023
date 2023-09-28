// Simple Iostream Test program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, city, email;
    int age;
    cout << "...... My Profile ..........." << endl;
    cout << "Enter a name ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter city";
    cin >> city;
    cout << "Enter email address";
    cin >> email;

    cout << "..... My Profile is .... " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Email: " << email << endl;
    // cerr << "This is a sample error message" << endl;
    cout << "....................." << endl;
}
