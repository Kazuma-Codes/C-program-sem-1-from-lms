//. C program to calculate length of the string using recursion 
#include <stdio.h>

// Function declaration
int stringLength(char *str);

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read a string with spaces

    // Calculate and display the length of the string
    printf("The length of the string is: %d\n", stringLength(str));

    return 0;
}

// Recursive function to calculate the length of the string
int stringLength(char *str) {
    if (*str == '\0') {
        return 0; // Base case: end of the string
    }
    return 1 + stringLength(str + 1); // Recursive call
}
