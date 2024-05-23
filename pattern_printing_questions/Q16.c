// 1
// 3 5
// 7 9 11
// 13 15 17 19

#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
        int a =1;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
          printf("%d ", a);       
            a = a+2;
        }
        printf("\n");
    }
    return 0;
}

