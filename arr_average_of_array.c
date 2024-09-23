// Program to find the average of n numbers using arrays
#include <stdio.h>

int main()
{
    int marks[10], i, n, sum = 0;
    float average; // Changed to float for precise average calculation

    printf("Enter number of elements (up to 10): ");
    scanf("%d", &n);

    // Check if n is within the valid range
    if (n <= 0 || n > 10) {
        printf("Invalid number of elements. Please enter a number between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    // Input the marks and calculate the sum
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate and print the average
    average = (float)sum / n; // Cast sum to float to get a precise average
    printf("Average = %.2f\n", average);

    return 0;
}
