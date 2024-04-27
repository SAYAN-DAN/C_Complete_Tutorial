// print sum from 1 to n....(parameterised);
#include<stdio.h>

void  sum(int n , int s) {
   if (n ==0){
    printf("%d", s);
      return ;
   }
   sum(n-1,n+s);
   
}

#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}
