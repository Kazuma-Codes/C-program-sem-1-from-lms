//Program to find square of a number

#include <stdio.h>

// Function prototype, also called function declaration
float square(float x);

// Main function, program starts from here
int main() {
    float m, n;
    printf("\nEnter a number to find its square: ");
    scanf("%f", &m);
    
    // Function call
    n = square(m);
    
    printf("\nSquare of the given number %.2f is %.2f\n", m, n);
    return 0;
}

