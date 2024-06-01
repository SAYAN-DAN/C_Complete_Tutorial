// Write a program to find the largest from of a Matrix
#include<stdio.h>
int main() {
    int arr[3][3], max;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }        
    }
    printf("\n The matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);            
        }        
    }
     max = arr[0][0];
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }                      
        }        
    }
    printf("\nThe max is: %d", max);
    return 0;    
}