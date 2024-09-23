//C program to find the factorial of a number entered by the user using goto.
#include <stdio.h>

int main() {
    int num;
    int factorial = 1; // Use unsigned long long to handle large factorials

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Initialize the loop variable
    int i = 1;

factorial_loop:
    // Calculate factorial
    factorial *= i;
    i++;

    // Check if the loop should continue
    if (i <= num) {
        goto factorial_loop;
    }

    // Print the result
    printf("Factorial of %d is %llu\n", num, factorial);

    return 0;
}
