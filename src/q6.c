// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.

#include <stdio.h>

int main() {
    float length, width, area;

    // Prompt user for input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Display result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
