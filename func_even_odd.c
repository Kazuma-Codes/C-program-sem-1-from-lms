// Write a program in C to check a given number is even or odd using the function.
#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to check even or odd
    checkEvenOdd(number);

    return 0;
}

// Function definition
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
