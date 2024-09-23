/*Write a program to find maximum of three numbers without using if statement.*/
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max1, max2, maximum;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the maximum of num1 and num2
    max1 = (num1 + num2 + abs(num1 - num2)) / 2;
    
    /*abs mean |15-20| = 5*/
    
    // Find the maximum of max1 and num3
    maximum = (max1 + num3 + abs(max1 - num3)) / 2;

    // Output the maximum number
    printf("The maximum number is: %d\n", maximum);

    return 0;
}
