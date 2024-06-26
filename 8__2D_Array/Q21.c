#include <stdio.h>

void addMatrices(int row, int col, int matrix1[row][col], int matrix2[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int row, int col, int matrix[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row = 2, col = 2;
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    addMatrices(row, col, matrix1, matrix2, result);

    printf("Result of matrix addition:\n");
    printMatrix(row, col, result);

    return 0;
}