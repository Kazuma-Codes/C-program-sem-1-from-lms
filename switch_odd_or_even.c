//C program to check whether number is EVEN or ODD using switch.
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use switch statement with modulus operation
    switch (number % 2) {
        case 0:
            printf("%d is EVEN.\n", number);
            break;
        case 1:
            printf("%d is ODD.\n", number);
            break;
    }

    return 0;
}
