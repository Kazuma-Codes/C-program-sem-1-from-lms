//C program to print Fibonacci series up to user specifies limit using goto.
#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, next;

    // Prompt the user to enter the limit
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    // Check if the limit is positive
    if (limit < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Print the Fibonacci series up to the limit
    printf("Fibonacci series up to %d:\n", limit);

print_fibonacci:
    if (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        goto print_fibonacci;
    }

    printf("\n");

    return 0;
}
