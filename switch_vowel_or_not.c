//C program to check whether a character is VOWEL or CONSONANT using switch statement.
#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Use switch statement to check if the character is a vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a VOWEL.\n", ch);
            break;
        default:
            // Check if it's an alphabet character
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a CONSONANT.\n", ch);
            } else {
                printf("%c is not an alphabet character.\n", ch);
            }
            break;
    }

    return 0;
}
