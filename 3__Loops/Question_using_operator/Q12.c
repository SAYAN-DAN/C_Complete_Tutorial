// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include<stdio.h>
int main(){
    int a,b,power,i;
    printf("Enter a:");
    scanf("%d" , &a);
    printf("Enter b:");
    scanf("%d" , &b);
    power = 1;
    for ( i = 1; i <= b ; i++){
        power = power * a;
    }
    printf("The result is: %d", power);
    return 0;
}
