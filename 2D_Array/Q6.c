
// Write a program to add two matrices without using an extra matrix...
#include <stdio.h>
int main() {
    int rows, columns;

    // Input the number of rows and columns for the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add corresponding elements of the two matrices
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix1[i][j] += matrix2[i][j]; // Adding elements directly to the first matrix
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
