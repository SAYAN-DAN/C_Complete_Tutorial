//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int numberofSpaces = n/2;
    int numberofStars = 1;
    int middleline = n/2+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= numberofSpaces; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= numberofStars; k++)
        {
            printf("*");
        }
       if (i < middleline)
       {
           numberofSpaces--;
           numberofStars+=2;
       }
       else
       {
        numberofSpaces++;
        numberofStars-=2;
    }
    printf("\n");      
    }  
    return 0;    
}