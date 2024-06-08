// Find the maximum element in a 2D_Array

#include<stdio.h>
int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
     for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");        
        }
        printf("\n");
        int max = arr[0][0];
       for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }            
        }
        }
        printf("The Maximum Value of this matrix is:%d", max);
        return 0;        
}