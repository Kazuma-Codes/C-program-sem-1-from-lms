//Write a program to reverse a string “Hello” using strrev( ) function
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";

    // Reverse the string using strrev
    strrev(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
