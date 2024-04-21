// Print the given pattern
// 1 3 5 7
// 1 3 5 7
// 1 3 5 7
// 1 3 5 7

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++){
        for ( j = 1; j <=2*n - 1; j= j+2){
            printf("%d ", j);
        }
        printf("\n");
    }    
}

