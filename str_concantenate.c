//.Write a program to concatenate using strcat() function.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; // Declare a large enough array to hold the concatenated result
    char str2[50];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // Concatenate the strings
    strcat(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
