//Take a float input from the user and type cast it to int and print it on the screen.
#include <stdio.h>

int main() {
    float inputFloat;
    int castInt;

    // Read float input from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &inputFloat);

    // Type cast float to int
    castInt = (int) inputFloat;

    // Print the result
    printf("The integer value after type casting is: %d\n", castInt);

    return 0;
}
