/*
C program to print following pattern.
             H  
             He  
             Hel 
             Hell  
             Hello
*/
#include <stdio.h>

int main() {
    char str[] = "Hello";
    int len = sizeof(str) - 1; // Calculate the length of the string without the null terminator

    // Print the pattern
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", str[j]); // Print characters from the string
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
