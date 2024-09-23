// Program to check whether a number is a palindrome or not.
#include <stdio.h>

int main() {
    int a, b, c, s = 0;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    c = a; // Save the original number for comparison
    
    while (a > 0) {
        b = a % 10; // Get the last digit
        s = (s * 10) + b; // Build the reversed number
        a = a / 10; // Remove the last digit from the number
    }
    
    if (s == c) {
        printf("The number %d is a palindrome\n", c);
    } else {
        printf("The number %d is not a palindrome\n", c);
    }
    
    return 0; // Indicate successful execution
}
