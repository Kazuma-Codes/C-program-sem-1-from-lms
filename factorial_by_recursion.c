//Program to find factorial of a number.
#include <stdio.h>

// Function prototype
int factorial(int number);

int main() {
    int x = 9;
    printf("The factorial of %d is %d\n", x, factorial(x));
    return 0;
}

// Function definition
int factorial(int number) {
    if (number == 0) 
        return 1; // Factorial of 0 is 1
    else if (number == 1) 
        return 1; // Base case for recursion
    else 
        return (number * factorial(number - 1)); // Recursive case
}
