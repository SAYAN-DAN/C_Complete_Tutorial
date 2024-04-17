
//  Take positive integer input and tell if it is divisible by 5 and 3

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number % 5 == 0 ){
        if (number % 3 ==0){
            printf("This number is divisible by 5 and 3");
        }
        else{
           printf("This number is not divisible by 5 and 3");
        }       
    }
    else{
       printf("This number is not divisible by 5 and 3");
    }
    return 0;
}

