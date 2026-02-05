// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.

#include <stdio.h>

int main() {
 
    int x = 5; 
    
    
    int math_result = (++x) * 3 - 10;
    
    printf("--- Part 1 ---\n");
    printf("Initial x: 5\n");
    printf("Final x: %d\n", x);
    printf("Result ((++x) * 3 - 10): %d\n\n", math_result);


    int a = 10;
    int b = 10;
    int c = 99;
    
    int logic_result = (a == b) && (b != c);
    
    printf("--- Part 2 ---\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    if (logic_result) {
        printf("Result: TRUE (1) -> a equals b AND b is not c.\n");
    } else {
        printf("Result: FALSE (0)\n");
    }

    return 0;
}