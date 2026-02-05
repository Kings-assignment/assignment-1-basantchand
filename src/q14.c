// Create an expression that swaps the values of two variables x and y without using a temporary variable.

#include <stdio.h>

int main()
{
    int x, y;
    printf("enter the value of x and y:");
    scanf("%d %d", &x, &y);

    printf(" value of x before x is %d and y is %d", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf(" value of x is %d and y is %d\n", x, y);

    return 0;
}
