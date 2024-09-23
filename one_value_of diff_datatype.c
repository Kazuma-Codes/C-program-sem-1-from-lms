/*Develop a C program to input one integer value (a), 
one float value (b), one character value (c), and one string
(str) from the user. Name these variables as a, b, c, and str respectively.
Print these values separating by them using next line character.*/
#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char str[100];

    // Input integer value
    printf("Enter an integer: ");
    scanf("%d", &a);

    // Input float value
    printf("Enter a float: ");
    scanf("%f", &b);

    // To consume the newline character left by previous scanf
    getchar();

    // Input character value
    printf("Enter a character: ");
    scanf("%c", &c);

    // To consume the newline character left by previous scanf
    getchar();

    // Input string value
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Output values
    printf("\nYou entered:\n");
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%s", str);

    return 0;
}
