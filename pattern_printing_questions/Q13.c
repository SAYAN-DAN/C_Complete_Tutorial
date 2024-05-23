/*
     ******
     *    *
     *    *
     ******    */

    
#include<stdio.h>
int main() {
    int i,j,row,column;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of rows:");
    scanf("%d", &column);
    for ( i = 1; i <=row; i++){
        for ( j = 1; j <=column; j++){
         if (i == 1|| j == 1 || i == row || j == column)
         {
            printf("*");
         }
         else
         {
            printf(" ");            
         }
         
    }
    printf("\n");    
}
return 0;
}
