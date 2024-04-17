

// Take 3 positive integers input and print the greatest of them.

#include<stdio.h>
int main() {
    int num1, num2,num3;
    printf("Enter the number1:");
    scanf("%d", &num1);
    printf("Enter the number2:");
    scanf("%d", &num2);
    printf("Enter the number3:");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("number1 is larger\nAnd the larger number is: %d" , num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("number1 is larger\nAnd the larger number is: %d" , num2);
    }
    else
    {
        printf("number1 is larger\nAnd the larger number is: %d" , num3);
    }
    
    return 0;
}