//Write a C program to compute the perimeter and area of a circle with a radius of r inches.
#include <stdio.h>
#include <math.h>  // For M_PI constant

int main() {
    // Variable to store the radius
    float radius;
    float perimeter, area;

    // Read radius from the user
    printf("Enter the radius of the circle (in inches): ");
    scanf("%f", &radius);

    // Calculate perimeter (circumference)
    perimeter = 2 * M_PI * radius;

    // Calculate area
    area = M_PI * radius * radius;

    // Print the results
    printf("Perimeter (Circumference) of the circle: %.2f inches\n", perimeter);
    printf("Area of the circle: %.2f square inches\n", area);

    return 0;
}
