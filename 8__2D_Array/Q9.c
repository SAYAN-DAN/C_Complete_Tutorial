// Find the minimum element in a 2D_Array
#include<stdio.h>
int main(){
    int rows = 2;
    int columns = 2;
    int arr[2][2] = {{1,2},{3,4}};
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (max > arr[i][j])
            {
             max =arr[i][j];
            }
            
        }
        
    }
    printf("The maximum element in 2D_Array: %d", max);
    
    return 0;
}