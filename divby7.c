// Write a program to find sum and average of odd integers between 1 to 300 which are divisible by 7
#include <stdio.h>

int main() {
    int i, sum = 0, count = 0;
    float average;

    printf("Odd numbers between 1 and 300 that are divisible by 7:\n");
    for (i = 1; i <= 300; i++) {
        if (i % 7 == 0 && i % 2 != 0) { // Check if the number is divisible by 7 and odd
            printf("%5d", i);
            sum += i;
            count++;
        }
    }
    printf("\n\nThe sum: %d\n", sum);
    // Calculate the average
    if (count > 0) {
        average = (float)sum / count;
        printf("The average: %.2f\n", average);
    } else {
        printf("No odd numbers divisible by 7 found in the range.\n");
    }

    return 0;
}
