#include <stdio.h>

// Function to convert an ASCII value to a character
char func(int ascii) {
    return (char)ascii; // Cast the integer ASCII value to a char
}

int main() {
    int ascii;
    char ch;

    printf("Enter any ASCII value in decimal: \n");
    scanf("%d", &ascii);

    // Convert ASCII value to character using func function
    ch = func(ascii);

    // Print the character corresponding to the ASCII value
    printf("The character is: %c\n", ch);

    return 0;
}
