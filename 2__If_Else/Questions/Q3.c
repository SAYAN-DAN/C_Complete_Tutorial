//  Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include<stdio.h>
int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0){
        printf("This year is leap year");
    }
    else{
        printf("This year is not leap year");
    }    
    return 0;
}