// Write a program to check if the number is a perfect number or not.
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Read input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("The number must be a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Find the sum of the proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a perfect number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
