//Program to calculate the length of a string entered by a user
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a character array to hold the string

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    // Calculate the length of the string
    int length = strlen(str);

    // Output the length
    printf("Length of the entered string: %d\n", length);

    return 0;
}
