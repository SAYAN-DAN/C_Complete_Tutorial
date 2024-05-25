
// print 1 to n...
#include<stdio.h>
// void number(int x, int n) {
//     if ( x > n) return;
//     printf("%d\n" , x);
//     number(x+1,n);
//     return;   
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d" , &n);
//     number(1,n);
//     return 0;   
// }

// print 1 to n without using extra parameter........
 void number(int n){
    if (n ==0) return;
    number(n-1);        
    printf("%d\n", n);
  return;  
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);
    number(n);
    return 0;   
}

