// Print the given pattern
// 1 
// A B 
// 1 2 3 
// A B C D
// 1 2 3 4 5

#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int a =1;
        for (j = 1; j <= i; j++){
           if (i %2 ==0 )
           {
            int d = a+64;
           char ch = (char)d;
            printf("%c ",ch);
           }
           else
           {
             printf("%d ", j);
           }
           
            a++;
        }
        printf("\n");
    }
    return 0;
}