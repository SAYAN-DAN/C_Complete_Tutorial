// Find the unique number in a given array where all the element are being repeated twice with ane value being unique


#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 1, 2, 3};
    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false) {
            printf("%d",arr[i]);
            break;
        }
        
    }
    return 0;
}


// TYPE2---

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 1, 3, 4, 2, 2, 3};
    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = 0; j < 7; j++)
        {
            if (i!= j && arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            printf("%d",arr[i]);
            break;
        }
        
    }
    return 0;
}