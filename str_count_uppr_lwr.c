//C program to count upper case, lower case and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, upperCount = 0, lowerCount = 0, specialCount = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upperCount++;  // Count uppercase letters
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowerCount++;  // Count lowercase letters
        } else if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '\n') {
            // Ignore digits and spaces, newlines
        } else {
            specialCount++;  // Count special characters
        }
        i++;
    }

    // Output the counts
    printf("Number of uppercase letters: %d\n", upperCount);
    printf("Number of lowercase letters: %d\n", lowerCount);
    printf("Number of special characters: %d\n", specialCount);

    return 0;
}
