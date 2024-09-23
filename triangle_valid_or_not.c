/* If the three sides of a triangle are entered through the keyboard,
 write a program to check whether the triangle is valid or not.
  The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/
  #include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the three sides of the triangle
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && 
        (side1 + side3 > side2) && 
        (side2 + side3 > side1)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
