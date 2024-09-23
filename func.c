//Write a program to calculate Power of a number Using pow() Function
#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    // Input the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate power using pow() function
    result = pow(base, exponent);

    // Print the result
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}
