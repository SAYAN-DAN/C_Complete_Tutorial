
// *****
//  ****
//   ***
//    **
//     *
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int numberofSpaces = 0;
    int numberofStars = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=numberofSpaces; j++)
        {
            printf(" ");                     
        }
        for (int k = 1; k <= numberofStars; k++)
            {
                printf("*");
            }
           numberofSpaces++;
           numberofStars--;
        printf("\n");        
    }
    return 0;    
}
