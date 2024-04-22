#include<stdio.h>
int main() {
    int a;
    printf("Enter a: ");
    scanf("%d" , &a); // a = 3
    int b;
    printf("Enter b: ");
    scanf("%d" , &b); // b = 4
    int temp = a; // temp = 3
    a = b; // a = 4
    b = temp; // b = 3
    printf("%d\n" ,a);
    printf("%d\n" ,b);
    return 0;    
}