// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    if (a > b && c != 0) {
        printf("True\n");
    } 
    else {  
        printf("False\n");
    }

    return 0;
}
