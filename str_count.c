//Write a C program to count no of lines, words and characters in a given text.
#include <stdio.h>

int main() {
    char c;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;

    printf("Enter text (Press Ctrl+D to end):\n");

    while ((c = getchar()) != EOF) {
        characters++;  // Count characters

        if (c == '\n') {
            lines++;  // Count lines
        }

        // Check if the current character is a separator for words (space, newline, tab)
        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0;  // End of a word
        } else if (inWord == 0) {
            inWord = 1;
            words++;  // Count words when transitioning from separator to a character
        }
    }

    // Output the results
    printf("\nNumber of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);

    return 0;
}
