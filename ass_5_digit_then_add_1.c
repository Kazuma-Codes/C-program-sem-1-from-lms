//If a five-digit number is input through the keyboard, write a program to 
//print a new number by adding one to each of its digits. eg 123 = 234
#include <stdio.h>

int main() {
    int number, digit, new_number = 0, place_value = 1;
    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    // Process each digit and add 1
    while (number > 0) {
        digit = (number % 10 + 1) % 10;  // Add 1 and handle if it becomes 10
        new_number += digit * place_value;  // Form the new number
        place_value *= 10;  // Move to the next place value
        number /= 10;  // Remove the last digit
    }
    // Print the new number
    printf("The new number is: %05d\n", new_number);
    return 0;
}
