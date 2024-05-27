// ***********
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int numberofSpaces = 1;
    int numberofStars = n;
    for (int i = 1; i <= 2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=numberofStars; k++)
        {
            printf("*");
        }
        for (int j = 1; j <=numberofSpaces; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=numberofStars; k++)
        {
            printf("*");
        }
        numberofSpaces+=2;
        numberofStars--;
        printf("\n");                
    }   
    return 0;
}