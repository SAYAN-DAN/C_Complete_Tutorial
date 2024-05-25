// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number % 5 == 0 || number % 3 ==0 ){
        if (number%15 != 0){
            printf("This number is divisible by 5 or 3 but not divisable by 15");
        }
        else{
           printf("This number is divisible by 5 or 3 and divisable by 15");
        }       
    }
    else{
       printf("This number is not divisible by 5 or 3");
    }
    return 0;
}
//***********************************************************************
#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if ((number % 5 == 0 || number % 3 ==0) && number%15 != 0 ){
         printf("This number is divisible by 5 or 3 but not divisable by 15");
    }
    else{
        printf("This number is divisible by 5 or 3 and divisable by 15");
    }
    return 0;
}
