
// Linear Search

#include<stdio.h>
#include<stdbool.h>
int main() {
    int arr[7] = {21,44,34,21,54,7,78};
    int x = 21;
    int idx = 0;
    bool flag = false;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            idx = i;
            break;
        }        
    }

    if (flag == false)
    {
        printf("%d is not present in the array",x);
    }
    else
    {
        
        printf("%d is  present in the array and its index is %d",x,idx);
    }
    
    
    
}