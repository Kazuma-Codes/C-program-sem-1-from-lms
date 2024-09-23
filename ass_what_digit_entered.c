/*Any character is entered through the keyboard, write a program 
to determine whether the character entered is a capital letter, 
a small case letter, a digit or a special symbol.in c*/
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Determine the type of character
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is a capital letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special symbol.\n", ch);
    }

    return 0;
}
/* if using ASCII */
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Get the ASCII value of the character
    int asciiValue = (int)ch;

    // Determine the type of character using ASCII values
    if (asciiValue >= 65 && asciiValue <= 90) { // 'A' to 'Z'
        printf("The character '%c' is a capital letter (ASCII: %d).\n", ch, asciiValue);
    } else if (asciiValue >= 97 && asciiValue <= 122) { // 'a' to 'z'
        printf("The character '%c' is a lowercase letter (ASCII: %d).\n", ch, asciiValue);
    } else if (asciiValue >= 48 && asciiValue <= 57) { // '0' to '9'
        printf("The character '%c' is a digit (ASCII: %d).\n", ch, asciiValue);
    } else {
        printf("The character '%c' is a special symbol (ASCII: %d).\n", ch, asciiValue);
    }

    return 0;
}
