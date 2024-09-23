// Write a program in C to calculate the sum of numbers from 1 to n using recursion
#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and display the sum
    if (number < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The sum of numbers from 1 to %d is %d\n", number, sum(number));
    }

    return 0;
}

// Recursive function to calculate the sum
int sum(int n) {
    if (n == 1) {
        return 1; // Base case: sum of 1 is 1
    }
    return n + sum(n - 1); // Recursive call
}
