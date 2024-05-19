
#include<stdio.h>
int min(int a, int b) {
    if ( a<b){
        return a;
    }
    else{
        return b;
    }    
}


int gcd(int a, int b) {
    int hcf;
    for ( int i = 1; i <= min(a,b); i++){
        if (a%i ==0 && b%i == 0){
             hcf = i;
        }        
    }
    return hcf;
    
}
int main() {
    int a;
    printf("Enter 1st number: ");
    scanf("%d" , &a);
    int b;
    printf("Enter 2st number: ");
    scanf("%d" , &b);
    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is: %d",a,b,hcf);
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