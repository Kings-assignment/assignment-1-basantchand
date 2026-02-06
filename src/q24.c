// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (sqrt(num) == (int)sqrt(num))
    {
        printf("The number is a perfect square.\n");
    }
    else
    {
        printf("The number is not a perfect square.\n");
    }

    return 0;
}
