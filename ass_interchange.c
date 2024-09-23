/*Two numbers are input through the keyboard into two locations C and D.
 Write a program to interchange the contents of C and D.*/
 #include <stdio.h>

int main() {
    int C, D, temp;

    // Input values for C and D
    printf("Enter the value for C: ");
    scanf("%d", &C);
    printf("Enter the value for D: ");
    scanf("%d", &D);

    // Interchange the contents of C and D using a temporary variable
    temp = C;  // Store the value of C in temp
    C = D;     // Assign the value of D to C
    D = temp;  // Assign the value of temp (original value of C) to D

    // Output the interchanged values
    printf("After interchanging:\n");
    printf("Value of C: %d\n", C);
    printf("Value of D: %d\n", D);

    return 0;
}
