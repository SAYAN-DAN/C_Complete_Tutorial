//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// ABCDEFEDCBA
#include<stdio.h>
int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int numberofspaces = n-1;
    for (int i = 1; i <=n; i++){        
        for (int k = 1; k <= numberofspaces; k++)
        {
            printf(" ");
        }
        numberofspaces--;        
      for (int j = 1; j <= i; j++){
        char ch = (char) (j+64);
         printf("%c" , ch);
      }
      int a = i-1;
      for (int j = 1; j <= i -1; j++){
        char ch = (char) (a+64);
        printf("%c" , ch);
        a--;
      }      
      printf("\n");      
    }
    return 0;    
}
