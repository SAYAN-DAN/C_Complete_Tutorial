
// Display this AP - 100,97,94,..upto all terms which are positive.
#include<stdio.h>
int main() {
    for (int i = 100; i >=1 ; i = i-3)
    {
        printf("%d  ", i);
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