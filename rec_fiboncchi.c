//Program of fibonacci program using recursion
#include <stdio.h>

// Function declaration
int fibonacci(int n);

int main() {
    int number;

    // Input the number
    printf("Enter the position in Fibonacci series: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci number at position %d is %d\n", number, fibonacci(number));
    }

    return 0;
}

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) = 0
    }
    if (n == 1) {
        return 1; // Base case: F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive calls
}
