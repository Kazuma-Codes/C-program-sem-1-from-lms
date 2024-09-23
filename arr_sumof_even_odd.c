//Program to sum of even and odd of 2D array.
#include <stdio.h>

int main() {
    int rows, cols;
    int evenSum = 0, oddSum = 0;

    // Input the size of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);

            // Check if the element is even or odd
            if (arr[i][j] % 2 == 0) {
                evenSum += arr[i][j]; // Add to even sum
            } else {
                oddSum += arr[i][j];  // Add to odd sum
            }
        }
    }

    // Output the sums
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
