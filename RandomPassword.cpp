#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

// Function to generate a random password
std::string generateRandomPassword(int length)
{
    const std::string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    const int charsetLength = charset.length();

    if (length <= 0)
    {
        return ""; // Return an empty string for invalid length
    }

    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    std::string password;
    for (int i = 0; i < length; i++)
    {
        int randomIndex = rand() % charsetLength; // Generate a random index within the charset
        password += charset[randomIndex];         // Append a random character from the charset to the password
    }

    return password;
}

int main()
{
    int passwordLength;
    std::cout << "Enter the desired password length: ";
    std::cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
