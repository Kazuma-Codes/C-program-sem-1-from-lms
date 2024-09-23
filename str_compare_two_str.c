//Program to compare two strings by using strcmp() function.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter first string: ");
    gets(str1);  // Note: gets() is considered unsafe, better use fgets()
    
    printf("Enter second string: ");
    gets(str2);
    
    // Compare strings using strcmp()
    int result = strcmp(str1, str2);
    
    // Output the result
    if(result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    
    return 0;
}
