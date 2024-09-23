//Program to find factorial of a number using for loop.
#include <stdio.h>

int main() {
    int fact = 1, i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    /*example   fact = 1 * 1 = 1
                fact = 1 * 2 = 2
                fact = 2 * 3 = 6
                fact = 6 * 4 = 24
                fact = 24 * 5 = 120*/
                
    printf("Factorial of %d is %d\n", n, fact);
    return 0; // Indicate successful execution
}
