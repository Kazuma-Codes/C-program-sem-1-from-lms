//Write a program to delete an element from an array.
#include <stdio.h>

int main() {
    int arr[50];
    int position, i, num;

    printf("Enter the number of elements in the array (up to 50):\n");
    scanf("%d", &num);

    // Check if the number of elements is within bounds
    if (num > 50 || num < 1) {
        printf("Invalid number of elements. Please enter a number between 1 and 50.\n");
        return 1; // Exit the program
    }

    printf("Enter %d elements in the array:\n", num);
    for (i = 0; i < num; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the array element you want to delete (1 to %d):\n", num);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > num) {
        printf("\nDeletion is not possible. Invalid position.\n");
    } else {
        // Perform deletion
        for (i = position - 1; i < num - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("The resultant array is:\n");
        for (i = 0; i < num - 1; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}
