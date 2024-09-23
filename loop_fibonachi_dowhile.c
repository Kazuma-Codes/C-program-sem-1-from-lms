// Program to find Fibonacci series using do while.
//a set of integers (the Fibonacci numbers) that starts with a zero,
//followed by a one, then by another one, and then by a series of steadily increasing numbers
#include <stdio.h>

int main() {
    int n, f, f1 = 0, f2 = 1; // Initializing with standard Fibonacci start values
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("The Fibonacci series is:\n");
    
    if (n > 0) {
        printf("%d\t", f1); // Print the first term
    }
    
    if (n > 1) {
        printf("%d\t", f2); // Print the second term
    }
    
    n -= 2; // Adjust the count for the next loop
    
    do {
        f = f1 + f2; // Compute the next Fibonacci number
        printf("%d\t", f); // Print the next Fibonacci number
        f1 = f2; // Update f1 to the previous f2
        f2 = f;  // Update f2 to the newly computed Fibonacci number
        n--;     // Decrease the count of remaining terms
    } while (n > 0);
    
    printf("\n");
    return 0; // Indicate successful execution
}
