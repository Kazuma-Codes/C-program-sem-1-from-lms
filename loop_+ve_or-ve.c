//display number is positive or negative
#include <stdio.h>

int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("Number is positive\n");
    } else if (a < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is equal to zero\n");
    }

    return 0;
}
