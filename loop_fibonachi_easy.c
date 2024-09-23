#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user how many terms of the Fibonacci series to display
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms
    printf("Fibonacci Series: %d, %d", first, second);

    // Generate and print the rest of the Fibonacci series
    for (int i = 3; i <= n; i++) {
        next = first + second; // Calculate the next term
        printf(", %d", next); // Print the next term
        first = second; // Update first
        second = next; // Update second
    }
/*updating means that first second value will shift to first and next to second*/
    printf("\n"); // New line for better formatting
    return 0; // Indicate successful execution
}
