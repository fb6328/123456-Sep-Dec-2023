#include <iostream>

// Function prototype
int add(int a, int b);

int main()
{
    int result = add(5, 7);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
