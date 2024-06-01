// Write a program to find the sum of the Diagonal Element of a Matrix
#include<stdio.h>
int main() {
    int arr[3][3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }        
    }
    // printf("\n The matrix is \n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\t", arr[i][j]);            
    //     }        
    // }
     
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
               sum = sum + arr[i][j];
            }                      
        }        
    }
    printf("\nThe max is: %d", sum);
    return 0;    
}