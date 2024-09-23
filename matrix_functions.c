//Write a program to perform various matrix operations Addition, Subtraction, Multiplication
// and Transpose using switch-case statement.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch, i, j, k, r1, r2, c1, c2, m1[10][10], m2[10][10], m3[10][10];

    do {
        printf("\nMatrix Operations:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the order of the first matrix (rows columns): ");
                scanf("%d%d", &r1, &c1);
                printf("Enter the order of the second matrix (rows columns): ");
                scanf("%d%d", &r2, &c2);
                if (r1 != r2 || c1 != c2) {
                    printf("\nOrder of two matrices are different. Matrix addition is not possible!\n");
                } else {
                    printf("Enter the elements of the first matrix:\n");
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    printf("Enter the elements of the second matrix:\n");
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++) {
                            m3[i][j] = m1[i][j] + m2[i][j];
                        }
                    }
                    printf("\nAddition of two matrices:\n");
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++) {
                            printf("%d\t", m3[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 2:
                printf("Enter the order of the first matrix (rows columns): ");
                scanf("%d%d", &r1, &c1);
                printf("Enter the order of the second matrix (rows columns): ");
                scanf("%d%d", &r2, &c2);
                if (r1 != r2 || c1 != c2) {
                    printf("\nOrder of two matrices are different. Matrix subtraction is not possible!\n");
                } else {
                    printf("Enter the elements of the first matrix:\n");
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    printf("Enter the elements of the second matrix:\n");
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++) {
                            m3[i][j] = m1[i][j] - m2[i][j];
                        }
                    }
                    printf("\nSubtraction of two matrices:\n");
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++) {
                            printf("%d\t", m3[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 3:
                printf("Enter the order of the first matrix (rows columns): ");
                scanf("%d%d", &r1, &c1);
                printf("Enter the order of the second matrix (rows columns): ");
                scanf("%d%d", &r2, &c2);
                if (c1 != r2) {
                    printf("\nMatrix multiplication is not possible!\n");
                } else {
                    printf("Enter the elements of the first matrix:\n");
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    printf("Enter the elements of the second matrix:\n");
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c2; j++) {
                            m3[i][j] = 0;
                            for (k = 0; k < c1; k++) {
                                m3[i][j] += m1[i][k] * m2[k][j];
                            }
                        }
                    }
                    printf("\nMultiplication of two matrices:\n");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c2; j++) {
                            printf("%d\t", m3[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 4:
                printf("Enter the order of the matrix (rows columns): ");
                scanf("%d%d", &r1, &c1);
                printf("Enter the elements of the matrix:\n");
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        scanf("%d", &m1[i][j]);
                printf("\nTranspose of the given matrix:\n");
                for (i = 0; i < c1; i++) {
                    for (j = 0; j < r1; j++) {
                        printf("%d\t", m1[j][i]);
                    }
                    printf("\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Wrong Choice!\n");
                break;
        }
    } while (ch != 5);
    
    return 0;
}
