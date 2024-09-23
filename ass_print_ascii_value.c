/* Write a program to print the ASCII value of a character.*/
#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", character, character);

    return 0;
}
