//To find maximum among four numbers using ternary operator c program
#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;

    // Prompt the user to enter four numbers
    printf("Enter four integers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Find the maximum using nested ternary operators
    max = (a > b) ? 
          ((a > c) ? 
           ((a > d) ? a : d) : 
           ((c > d) ? c : d)) : 
          ((b > c) ? 
           ((b > d) ? b : d) : 
           ((c > d) ? c : d));

    // Print the maximum number
    printf("The maximum number is %d\n", max);

    return 0;
}
