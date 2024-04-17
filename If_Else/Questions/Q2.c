
// Take positive integer input and tell if it is divisible by 5 or not
#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number % 5 == 0)
    {
        printf("This number is divisable by 5");
    }
    else
    {
       printf("This number is not divisable by 5");
    }
    return 0;
}