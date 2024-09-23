//Program to store the elements from the user and store them in an 2D array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array after rows and col are known
    int arr[rows][cols];

    // Input elements from the user
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the 2D array
    printf("\nThe 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
