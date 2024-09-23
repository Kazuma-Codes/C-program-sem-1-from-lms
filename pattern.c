/*Display the pattern
********
********
********
*********/
#include <stdio.h>

int main() {
    int i = 1; // Initialize outer loop counter
    do { // Outer loop for rows
        int j = 1; // Initialize inner loop counter
        do { // Inner loop for columns
            printf("*"); // Print a single asterisk
            j++; // Increment inner loop counter
        } while (j <= 8); // Continue until 8 asterisks are printed
        printf("\n"); // Print a newline character after each row
        i++; // Increment outer loop counter
    } while (i <= 4); // Continue until 4 rows are printed

    return 0; // Indicate successful execution
}
