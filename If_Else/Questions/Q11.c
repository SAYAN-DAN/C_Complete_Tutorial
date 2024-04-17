// Take 3 numbers input and tell if they can be the sides of a triangle

#include<stdio.h>
int main() {
    int side1, side2,side3;
    printf("Enter the side1:");
    scanf("%d", &side1);
    printf("Enter the side2:");
    scanf("%d", &side2);
    printf("Enter the side3:");
    scanf("%d", &side3);
   if (side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
   {
    printf("This a valid triangle side");
   }
   else
   {
    printf("This is not a valid trianglr side");
   }
    
    return 0;
}