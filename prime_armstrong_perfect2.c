// Illustrate the loop control statements for:
//a. Print the series for some range for the above mentioned categories.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int number) {
    int i;
    if (number <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
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

    return (result == number); // Returns 1 if true, 0 otherwise
}

// Function to check if a number is a Perfect number
int isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return (sum == number && number != 0); // Returns 1 if true, 0 otherwise
}

int main() {
    int lowerRange, upperRange;
    
    printf("Enter the lower range: ");
    scanf("%d", &lowerRange);
    printf("Enter the upper range: ");
    scanf("%d", &upperRange);
    
    printf("Prime numbers in the range %d to %d:\n", lowerRange, upperRange);
    for (int i = lowerRange; i <= upperRange; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        else 
        printf("0",i);
    }
    
    printf("\n\nArmstrong numbers in the range %d to %d:\n", lowerRange, upperRange);
    for (int i = lowerRange; i <= upperRange; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n\nPerfect numbers in the range %d to %d:\n", lowerRange, upperRange);
    for (int i = lowerRange; i <= upperRange; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}


