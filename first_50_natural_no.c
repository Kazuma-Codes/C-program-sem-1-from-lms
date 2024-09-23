//Write a program in C to print first 50 natural numbers using recursion.
#include <stdio.h>

// Function prototype
void numPrint(int);

int main() {
    int n = 1;
    printf("\n\nRecursion: Print first 50 natural numbers:\n");
    printf("-------------------------------------------------\n");
    printf("The natural numbers are: ");
    numPrint(n); // Corrected function call with argument
    printf("\n\n");
    return 0;
}

// Function definition
void numPrint(int n) {
    if (n <= 50) {
        printf(" %d ", n);
        numPrint(n + 1);
    }
}
