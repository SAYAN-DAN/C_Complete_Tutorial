// Make a function which calculates the factorial of n using recursion.....
#include<stdio.h>
int factorial(int n) {
    if (n ==1 || n ==0){
        return 1;
    }    
    int recursion = n*factorial(n-1);
     return recursion; 
    // int fact = 1;
    // for ( int i = 1; i <=n; i++)
    // {
    //     fact = fact*i;
    // }
    // return fact;    
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}
