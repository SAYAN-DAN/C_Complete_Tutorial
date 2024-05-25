// Write a program to find a duplicate element from a given array of integers
#include<stdio.h>
int main() {
    int arr[7] = {1,7,2,3,4,6,7};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is a duplicate element", arr[i]);
                break;
            }            
        }        
    }
    return 0;
 }