// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>

int main()
{

    int result;
    char character;

    printf("enter the character: ");
    scanf("%c", &character);

    result = (character >= 'A') && (character <= 'Z');

    printf("the result is %d\n", result);

    return 0;
}