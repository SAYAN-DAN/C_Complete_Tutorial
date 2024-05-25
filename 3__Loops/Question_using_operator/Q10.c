//  Print the nth fibonacci number.

#include<stdio.h>
int main() {
    int i,a,b,n,sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    a = 1;
    b = 1;
    sum = 1;
    for ( i = 1; i <=n-2 ; i++)
    {
        sum = a+b;
        a = b;
        b= sum;
    }
     printf("The %dth fiibonacci term is %d: ", n,sum);
    return 0;
    
}