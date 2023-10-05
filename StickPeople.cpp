#include <iostream>
#include <string>
using namespace std;

void drawStickMan(string name)
{
    cout << "Drawing " << name << ":\n";
    cout << "  O\n";
    cout << " /|\\\n";
    cout << "/ | \\ \n";
}

void drawStickWoman(string name)
{
    cout << "Drawing " << name << ":\n";
    cout << "  O\n";
    cout << " /|\\\n";
    cout << "/ | \\ \n";
    cout << " /\\\\\n";
}

void drawHoldingHands(string name1, string name2)
{
    cout << "Drawing " << name1 << " and " << name2 << " holding hands:\n";
    cout << "  O\n";
    cout << " /|\\\n";
    cout << "/ | \\ \n";
    cout << "  O\n";
    cout << " /|\\\n";
    cout << "/ | \\ \n";
    cout << " /\n";
}

int main()
{
    drawStickMan("John");
    drawStickWoman("Jane");
    drawHoldingHands("John", "Jane");

    return 0;
}