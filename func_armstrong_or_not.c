//Write a program in C to check armstrong numbers using the function.
#include <stdio.h>
#include <math.h>

// Function declaration
int isArmstrong(int num);

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

// Function definition
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the sum of cubes of digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}
