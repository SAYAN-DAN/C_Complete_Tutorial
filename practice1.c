// *
// ***
// *****
// *******
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");        
    }
    return 0;
}





















// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
// #include<stdio.h>
// int main(){
//    int length,breadth,area,perimeter;
//    printf("Enter the length:");
//    scanf("%d", &length);
//    printf("Enter the breadth:");
//    scanf("%d", &breadth);
//    area = length * breadth;
//    perimeter = 2 *(length + breadth);
//    if (area > perimeter)
//    {
//       printf("The area of a rectangle is greater");
//    }
//    else if (perimeter > area)
//    {
//       printf("The area of a rectangle is greater");
//    }
//    else
//    {
//       printf("The area and perimrter of a are same");
//    }
//    }