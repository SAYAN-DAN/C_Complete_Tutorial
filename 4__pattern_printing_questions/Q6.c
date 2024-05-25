// Print the given pattern
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1 

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number:");
    scanf("%d", &n);
    int a =n;
    for ( i = 1; i <=n; i++){
        for ( j = 1; j <=a ; j++){
            printf("%d ", j);
        }
        a--;
        printf("\n");
    }    
}

