// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    if (a > b && c != 0)
    {
        printf("Condition is true.\n");
    }
    else
    {
        printf("Condition is false.\n");
    }

    return 0;
}
