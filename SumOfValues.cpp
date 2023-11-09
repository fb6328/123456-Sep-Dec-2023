int main()
{
    // Beginning of the program
    cout << "A program to compute the sum of numbers between 20 and 25";
    // Initializing sum to 0
    int sum = 0;
    // Iterating through numbers between 20 and 25
    for (int num = 20; num <= 25; num++)
    {
        // Adding current number to sum
        sum += num;
    }
    // Displaying the result
    cout << "\nThe sum of numbers between 20 and 25 is :" << sum;
}