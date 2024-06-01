#include <stdio.h>

int main() {
    int arr[3][4], max;
    
    // Input values into the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter the arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }        
    }
    
    // Print the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }    
    return 0;    
}
