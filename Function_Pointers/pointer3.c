#include<stdio.h>
int main() {
    int a = 5;
    int* x = &a;   
    printf("%d\n" , *x);  // print the value of a
    int** y = &x;
    printf("%d\n" , **y);  // print the value of a
    return 0;
}