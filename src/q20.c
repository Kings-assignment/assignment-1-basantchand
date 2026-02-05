// Write an expression that checks if a number is a multiple of either 3 or 5.

#include <stdio.h>

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 3 == 0 || number % 5 == 0)
    {
        std::cout << number << " is a multiple of 3 or 5." << std::endl;
    }
    else
    {
        std::cout << number << " is NOT a multiple of 3 or 5." << std::endl;
    }

    return 0;
}