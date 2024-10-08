//Swap two numbers

#include <stdio.h>

// Function Prototype
void swapx(int *x, int *y);

// Main function
int main() {
    int a = 10, b = 20;
    // Pass by Reference
    swapx(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

// Swap function that swaps two values
void swapx(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d\n", *x, *y);
}
