//Program to find factorial of a number.
#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1! = 1
    }
    return n * factorial(n - 1); // Recursive call
}
