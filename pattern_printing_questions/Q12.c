
//  Print the given pattern
//      *
//      *
//  * * * * * 
//      *
//      *

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++){
        for ( j = 1; j <=n; j++){
            int a = n/2 +1;
            if (j==a || i==a){
                printf("*");
            }
            else{
                printf(" ");
            }            
        }
            printf("\n");
    }    
}

