
// Write a program to print a identify matrix
#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[3][3];

    // Input matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is an identity matrix
    bool isIdentity = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                // Check if diagonal elements are 1
                if (arr[i][j] != 1) {
                    isIdentity = false;
                    break;
                }
            } 
        }
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
