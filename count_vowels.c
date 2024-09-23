//Write a program to count vowels in a string.
#include <stdio.h>

int main() {
    unsigned short count = 0, vowels = 0;
    char str[100], c;

    printf("Enter a string in which you want to find the number of vowels: ");
    scanf("%[^\n]", str);

    // Loop through the string to count vowels
    while (str[count] != '\0') {
        c = str[count];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || 
            c == 'i' || c == 'I' || c == 'o' || c == 'O' || 
            c == 'u' || c == 'U') {
            vowels++;
            printf("%c", c); // Optional: To print the vowels found
        }
        count++;
    }

    printf("\n");
    printf("NUMBER OF VOWELS in the given string: %hu\n", vowels);
    
    return 0;
}
