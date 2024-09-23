//C program to print all VOWEL and CONSONANT characters separately
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print vowels
    printf("Vowels: ");
    while (str[i] != '\0') {
        char ch = tolower(str[i]); // Convert to lowercase for uniform comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", str[i]);
        }
        i++;
    }

    i = 0; // Reset the index

    // Print consonants
    printf("\nConsonants: ");
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            printf("%c ", str[i]);
        }
        i++;
    }

    return 0;
}
