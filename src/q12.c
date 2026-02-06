// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.

#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input from the user
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    // The Logic: Checks if a is greater than b AND c is not equal to 0
    if (a > b && c != 0) {
        printf("True\n");
    } 
    else {  
        // Fixed: It is 'else', not 'else5'
        printf("False\n");
    }

    return 0;
}
