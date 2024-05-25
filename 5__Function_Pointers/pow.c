

#include<stdio.h>
#include<math.h>
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d" , &a);
    printf("Enter the value of b: ");
    scanf("%d" , &b);
    int square = pow(a,b);
    printf("The squre root is:%d",square);
    return 0;    
}

