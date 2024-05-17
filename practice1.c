
#include <stdio.h>
int factotial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int ncr = factotial(n) / (factotial(r) * factotial(n - r));
    return ncr;
}

int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    int ncr = combination(n, r);
    printf("%d", ncr);
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