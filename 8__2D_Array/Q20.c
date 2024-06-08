// Write a program to add two matrices...
#include<stdio.h>
int main() {
    int arr[3][3];
    int brr[3][3];
    int res[3][3];
    printf("Enter the first matrix:\n");
     for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");        
        }
        printf("\n");        
    printf("Enter the second matrix:\n");
     for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &brr[i][j]);
        }
        printf("\n");        
        }
        printf("\n");        
    printf("Add Two matrix:\n");    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
        printf("\n");        
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");        
    }
    return 0;    
}