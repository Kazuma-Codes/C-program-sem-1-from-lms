//Write a program in C to display the sum of the numbers
//enter by a user and stop taking input when user enter zero.
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Continuously take input from the user
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum += num;  // Add the input to the sum
    } while (num != 0);  // Stop when the user enters 0

    // Display the sum
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
