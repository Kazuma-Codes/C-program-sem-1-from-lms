// Write a program in C to print first 50 natural numbers using recursion.
#include <stdio.h>

// Function declaration
void printNaturalNumbers(int n);

int main() {
    int n = 50; // Number of natural numbers to print
    printf("First %d natural numbers:\n", n);
    
    // Call the recursive function
    printNaturalNumbers(1); // Start from 1

    return 0;
}

// Recursive function to print natural numbers
void printNaturalNumbers(int n) {
    if (n > 50) {
        return; // Base case: Stop when n exceeds 50
    }
    printf("%d ", n); // Print the current natural number
    printNaturalNumbers(n + 1); // Recursive call with the next number
}
