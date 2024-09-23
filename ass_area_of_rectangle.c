//. Write a C program to compute the perimeter and area of 
//a rectangle with a height of x inches, and width of y inches.
#include <stdio.h>

int main() {
    // Variables to store height and width
    float height, width;
    float perimeter, area;

    // Read height and width from the user
    printf("Enter the height of the rectangle (in inches): ");
    scanf("%f", &height);
    printf("Enter the width of the rectangle (in inches): ");
    scanf("%f", &width);

    // Calculate perimeter
    perimeter = 2 * (height + width);

    // Calculate area
    area = height * width;

    // Print the results
    printf("Perimeter of the rectangle: %.2f inches\n", perimeter);
    printf("Area of the rectangle: %.2f square inches\n", area);

    return 0;
}
