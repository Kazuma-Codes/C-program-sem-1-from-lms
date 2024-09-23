//C program to check whether a number is palindrome or not using goto.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Check if the number is negative
    if (num < 0) {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }

    // Reverse the number
reverse_loop:
    if (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
        goto reverse_loop;
    }

    // Check if the reversed number is the same as the original
    if (reversed == original) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
