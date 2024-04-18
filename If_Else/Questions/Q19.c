// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include<stdio.h>
int main() {
    int x,y;
    printf("Enter the coordinates: ");
    scanf("%d %d" , &x,&y);
    if (x ==0 && y == 0)
    {
        printf("The point is in origin");
    }
    else if ( x == 0)
    {
        printf("The point is in y axis");
    }
    else if (y ==0){
        printf("The point is in x axis");
    }
    else{
        printf("The piont does not lies on x or y axis");
    }
    
}