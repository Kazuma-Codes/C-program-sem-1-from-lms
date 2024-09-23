/* Write a program to input a three digit number and print the
digit at 1’s place, 100’s place and 1000’s place one by one separated by a single line.*/
#include <stdio.h>

int main() {
    int number;
    int ones, tens, hundreds;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extracting digits
    ones = number % 10;           // 1's place
    tens = (number / 10) % 10;    // 10's place
    hundreds = number / 100;      // 100's place

    // Output the digits
    printf("Digit at 1's place: %d\n", ones);
    printf("Digit at 10's place: %d\n", tens);
    printf("Digit at 100's place: %d\n", hundreds);

    return 0;
}
