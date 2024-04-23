#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The swap value of a is: %d\n" , a);
    printf("The swap value of b is: %d\n" , b);
    return 0;
}