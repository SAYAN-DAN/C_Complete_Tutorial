// Write a program to print the row number having the maximum sum in a given matrix


#include <stdio.h>
// Function to find the row with the maximum sum
int rowWithMaxSum(int rows, int cols, int matrix[rows][cols]) {
    int maxSum = 0;
    int rowIndex = 0;

    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }

        if (i == 0 || currentSum > maxSum) {
            maxSum = currentSum;
            rowIndex = i;
        }
    }

    return rowIndex;
}

int main() {
    int rows, cols;

    // Read dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the row with the maximum sum
    int rowIndex = rowWithMaxSum(rows, cols, matrix);

    // Print the result
    printf("Row %d has the maximum sum.\n", rowIndex + 1);

    return 0;
}
