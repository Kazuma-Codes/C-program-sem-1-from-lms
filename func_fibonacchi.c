// Write a program to display fibonacci series upto user required number using function.
#include <stdio.h>

// Function declaration
void fibonacci(int n);

int main() {
    int number;

    // Input the limit
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the Fibonacci series
    printf("Fibonacci series up to %d: ", number);
    fibonacci(number);

    return 0;
}

// Function to display Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, next;

    while (a <= n) {
        printf("%d ", a); // Print current Fibonacci number
        next = a + b; // Calculate the next Fibonacci number
        a = b; // Update a to the next number
        b = next; // Update b to the next number
    }
    printf("\n");
}
