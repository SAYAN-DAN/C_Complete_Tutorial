// : Take positive integer input and tell if it is a three digit number or not
#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number >99 && number<1000){
        printf("This number is a three digit number");
    }
    else{
       printf("This number is not a three digit number");
    }
    return 0;
}