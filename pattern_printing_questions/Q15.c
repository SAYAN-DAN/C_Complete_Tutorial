
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
        int a =1;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
          printf("%d", a);       
            a++;
        }
        printf("\n");
    }
    return 0;
}