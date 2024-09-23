//C program to find the sum of first N natural numbers using goto.
#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int i = 1;  // Starting number

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Loop to calculate the sum of the first N natural numbers
sum_loop:
    if (i <= num) {
        sum += i;
        i++;
        goto sum_loop;
    }

    // Print the result
    printf("The sum of the first %d natural numbers is %d\n", num, sum);

    return 0;
}


