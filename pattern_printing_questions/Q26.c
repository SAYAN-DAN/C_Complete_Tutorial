//      1
//     121
//    12312
//   1234123
//  123451234
// 12345612345
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
      for (int j = 1; j <= i -1; j++){
        printf("%d" , j);
      }      
      printf("\n");      
    }
    return 0;    
}

