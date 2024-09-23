//C program to print multiplication table from 1 to 5.
#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop for rows (1 to 10)
    for (i = 1; i <= 10; i++) {
        // Inner loop for columns (1 to 5)
        for (j = 1; j <= 5; j++) {
            printf("%d\t", i * j); // Print the product of i and j
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0; // Indicate successful execution
}
