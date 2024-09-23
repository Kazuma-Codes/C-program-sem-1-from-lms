//: Illustrate the loop control statements for:a. Checking whether a number is Prime/Armstrong/Perfect or not.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int number) {
    int i;
    // Special cases
    if (number <= 1) {
        return 0;
    }
    // Check for divisibility from 2 to square root of the number
    for (i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = number;
    
    // Calculate the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;
    
    // Calculate the Armstrong number
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        return 1; // Armstrong number
    }
    return 0; // Not an Armstrong number
}

// Function to check if a number is a Perfect number
int isPerfect(int number) {
    int sum = 0;
    // Find all divisors and sum them up
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    // Check if sum of divisors is equal to the number
    if (sum == number && number != 0) {
        return 1; // Perfect number
    }
    return 0; // Not a perfect number
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    // Check if the number is a Perfect number
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
