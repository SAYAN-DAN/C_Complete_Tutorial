// Print first ‘n’ fibonacci numbers.


// #include<stdio.h>
// int main() {
//     int i,a,b,n,sum;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     a = 1;
//     b = 1;
//     sum = 1;
//     for ( i = 1; i <=n ; i++)
//     {
//         sum = a+b;
//         a = b;
//         b= sum;
//        printf("The %dth fiibonacci term is %d\n: ", i,sum);
//     }
//     return 0;
    
// }




#include<stdio.h>

int main() {
    int i, a = 1, b = 1, n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("The Fibonacci sequence up to %d terms:\n", n);
    
    if (n >= 1) // Print the first Fibonacci number
        printf("The 1st Fibonacci number is %d\n", a);
    if (n >= 2) // Print the second Fibonacci number
        printf("The 2nd Fibonacci number is %d\n", b);
    
    for (i = 3; i <= n; i++) {
        sum = a + b;
        printf("The %dth Fibonacci number is %d\n", i, sum);
        a = b;
        b = sum;
    }
    
    return 0;
}

