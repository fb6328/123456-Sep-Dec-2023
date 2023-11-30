#include <iostream>
using namespace std;

int main()
{
    // Variables
    int sum, product, mean;
    // Declare and initaialize an integer array of ten elements
    int nums[] = {10,
                  20,
                  30,
                  40,
                  50,
                  60,
                  70,
                  80,
                  90,
                  100};

    for (int j = 0; j < sizeof(nums) / sizeof(int); j++)
    {

        sum += nums[j];
        product *= nums[j];
    }
    cout << "This is the sum " << sum << endl;
    cout << "The product of the values is " << product << endl;
    mean = sum / (sizeof(nums) / sizeof(int));
    cout << "The mean of values is " << mean << endl;
}
