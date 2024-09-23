//A year is a leap year if it is divisible by 4.
//However, if the year is also divisible by 100, it is not a leap year unless:
//The year is also divisible by 400, in which case it is a leap year.
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
