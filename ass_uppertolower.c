/*Write a program to read a character in upper case and print it in lower case.*/
#include <stdio.h>

int main() {
    char uppercaseChar, lowercaseChar;

    // Input an uppercase character from the user
    printf("Enter an uppercase character: ");
    scanf("%c", &uppercaseChar);

    // Convert the character to lowercase
    if (uppercaseChar >= 'A' && uppercaseChar <= 'Z') {
        lowercaseChar = uppercaseChar + ('a' - 'A');    //substracts the ascii value
        
        /*a=97 , A= 65 ,97-65 = 32 , 32+65=97*/

        printf("The lowercase character is: %c\n", lowercaseChar);
    } else {
        printf("The input is not an uppercase letter.\n");
    }

    return 0;
}
