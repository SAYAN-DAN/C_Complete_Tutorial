// print sum from 1 to n....(parameterised);


#include<stdio.h>
void  sum(int n , int s) {    // n =>5,4,3,2,1,0  , s=>0,5,8,11,13,15
   if (n ==0){
    printf("%d", s);
      return ;
   }
   sum(n-1,n+s);  // n-1=>4,3,2,1,0 n+s=> 5+0=5  ,4+5=9  ,3+9=12  ,2+12=14  ,1+14=15.
}

#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}


