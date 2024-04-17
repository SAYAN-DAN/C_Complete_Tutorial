// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include<stdio.h>
int main() {
    int leanth , breadth,Area, perimeter;
    printf("Enter the leanth: ");
    scanf("%d", &leanth);   
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    Area = leanth * breadth;
    perimeter = 2 * (leanth + breadth);
    if (Area > perimeter)
    {
        printf("The Area of Rectangle is greater");
    }
    else if (Area < perimeter)
    {
        printf("The Perimeter of Rectangle is greater");
    }
    else
    {
         printf("The Perimeter or Area of Rectangle is Same"); 
    }
    
    
    
    return 0;
}