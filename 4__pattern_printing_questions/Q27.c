//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321
#include<stdio.h>
int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++){        
        for (int k = 1; k <= n-i; k++)
        {
            printf(" ");
        }        
      for (int j = 1; j <= i; j++){
         printf("%d" , j);
      }
      int a = i-1;
      for (int j = 1; j <= i -1; j++){
        printf("%d" , a);
        a--;
      }      
      printf("\n");      
    }
    return 0;    
}
