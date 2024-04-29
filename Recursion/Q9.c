// Stair Path - 2


#include<stdio.h>
int stairs(int n) {
    if ( n ==1 || n==2 || n ==3){
        return n;
    }    
   int totalways = stairs(n-1) +stairs(n-2)+stairs(n-3);
   return totalways;
}


int main() {
    int n;
    printf("Enter number of stairs: ");
    scanf("%d", &n);
    int ways = stairs(n);
    printf("%d", ways);
    return 0;
}