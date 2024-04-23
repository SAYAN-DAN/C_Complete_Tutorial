#include<stdio.h>
int main() {
    int a = 5;
    // printf("%d\n" , a);
    // printf("%d\n" , &a);
    // printf("%p\n" , &a);  // print the address of a
    int* x = &a;       // x store the address of a 
    // printf("%p\n" , x);  // print the address of a
    // printf("%p\n" , &x);  // print the address of x
    // printf("%d\n" , *x);  // print the value of a
     
     *x = 7;
    printf("%d\n" , a);   // change the value of a = 25 into 7

    return 0;
}