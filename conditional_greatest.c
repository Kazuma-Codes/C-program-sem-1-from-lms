//To find maximum among five numbers using ternary operator 
#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int max;

    // Prompt the user to enter five numbers
    printf("Enter five integers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Find the maximum using nested ternary operators
    max = (a > b) ?
          ((a > c) ?
           ((a > d) ?
            ((a > e) ? a : e) : 
            ((d > e) ? d : e)) :
           ((c > d) ?
            ((c > e) ? c : e) : 
            ((d > e) ? d : e))) :
          ((b > c) ?
           ((b > d) ?
            ((b > e) ? b : e) : 
            ((d > e) ? d : e)) :
           ((c > d) ?
            ((c > e) ? c : e) : 
            ((d > e) ? d : e)));

    // Print the maximum number
    printf("The maximum number is %d\n", max);

    return 0;
}
