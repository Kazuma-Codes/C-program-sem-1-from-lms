#include <stdio.h>

int main() {
    int mat1[2][3], mat2[2][3], mat3[2][3]; // Directly using the dimensions
    int i, j;

    // Input for the first matrix
    printf("Enter first matrix: \n\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter second matrix: \n\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding the matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Printing the resultant matrix
    printf("\nResultant matrix: \n\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%5d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
