
// 0
// 10
// 010
// 1010
// 01010
#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int a;
    for (i = 1; i <= n; i++){     
        for (j = 1; j <= i; j++){
           if ((i+j) %2 == 0 == 0){
            printf("1");
        }
        else{
            printf("0");
        }   
        }
        printf("\n");
    }
    return 0;
}
