
// 1
// 01
// 101
// 0101
// 10101
#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int a;
    for (i = 1; i <= n; i++){
        if (i %2 != 0){
            a = 1;
        }
        else{
            a = 0;
        }        
        for (j = 1; j <= i; j++){
            printf("%d", a);
            if ( a== 1) a = 0;
            else a = 1;        
        }
        printf("\n");
    }
    return 0;
}


// TYPE =2 --

#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int a;
    for (i = 1; i <= n; i++){     
        for (j = 1; j <= i; j++){
           if ((i+j) %2 == 0){
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
