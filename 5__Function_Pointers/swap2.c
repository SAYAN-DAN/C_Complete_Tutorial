#include<stdio.h>
int main() {
    int a;
    printf("Enter a: ");
    scanf("%d" , &a); // a = 3
    int b;
    printf("Enter b: ");
    scanf("%d" , &b); // b = 4
    a = a+b; // a=7
    b = a-b; // b= 7-4 = 3
    a =a-b; // a =7-3 = 4
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;    
}