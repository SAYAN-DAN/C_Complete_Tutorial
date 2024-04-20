// Print the given pattern
// *****
// *****
// *****

#include<stdio.h>
int main() {
    int row ,i,j, coloum;
    printf("Enter the rows: ");
    scanf("%d" , &row);
    printf("Enter the coloum: ");
    scanf("%d" , &coloum);
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <=coloum; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}