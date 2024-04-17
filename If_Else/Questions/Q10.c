// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include<stdio.h>
int main() {
    int Ram, Shyam,Ajay;
    printf("Enter the Ram's age:");
    scanf("%d", &Ram);
    printf("Enter the Shyam's age:");
    scanf("%d", &Shyam);
    printf("Enter the Ajay's age:");
    scanf("%d", &Ajay);
    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is younger\nAnd the age is: %d" , Ram);
    }
    else if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is younger\nAnd the age is: %d" , Shyam);
    }
    else
    {
        printf("Ajay is younger\nAnd the age is: %d" , Ajay);
    }
    
    return 0;
}