// Write an expression that checks if a number is both positive and even.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0 && number % 2 == 0) {
        printf("The number is positive and even.\n");
    } else {
        printf("The number is NOT both positive and even.\n");
    }

    return 0;
}
