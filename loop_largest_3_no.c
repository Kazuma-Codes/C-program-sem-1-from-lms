//: find maximum among three numbers
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a is the greatest\n");
    } else if (b > a && b > c) {
        printf("b is the greatest\n");
    } else {
        printf("c is the greatest\n");
    }

    return 0;
}
