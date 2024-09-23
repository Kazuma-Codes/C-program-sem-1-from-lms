//Write a C program to convert specified days into years, weeks and days.
#include <stdio.h>

int main() {
    int totalDays;
    int years, weeks, days;

    // Read the total number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    // Calculate the number of years
    years = totalDays / 365;

    // Calculate the remaining days after accounting for years
    totalDays = totalDays % 365;

    // Calculate the number of weeks
    weeks = totalDays / 7;

    // Calculate the remaining days after accounting for weeks
    days = totalDays % 7;

    // Print the result
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", totalDays, years, weeks, days);

    return 0;
}
