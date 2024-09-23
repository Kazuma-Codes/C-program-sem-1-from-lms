//Write a program to check if a number is even or not and print using the goto statement
#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even
    if (num % 2 == 0)
        goto even;  // If even, jump to 'even' label
    else
        goto odd;   // If odd, jump to 'odd' label

even:
    printf("%d is an even number.\n", num);
    goto end;  // End the program

odd:
    printf("%d is an odd number.\n", num);

end:
    return 0;
}
