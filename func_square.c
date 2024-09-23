//Program to find square of a number
#include <stdio.h>

// Function declaration
float square(float x);

int main() {
    float m, n;
    printf("\nEnter a number to find its square: ");
    scanf("%f", &m);
    
    n = square(m);  // Function call
    printf("\nSquare of the given number %f is %f\n", m, n);

    return 0;
}

// Function definition
float square(float x) {
    float p;
    p = x * x;
    return p;
}
