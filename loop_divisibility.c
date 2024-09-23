//: check   divisibility of number
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 8 == 0) {
        printf("Divisible by both 5 and 8\n");
    } else if (a % 8 == 0) {
        printf("Divisible by 8\n");
    } else if (a % 5 == 0) {
        printf("Divisible by 5\n");
    } else {
        printf("Divisible by none\n");
    }

    return 0;
}
