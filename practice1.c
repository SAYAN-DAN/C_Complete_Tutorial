
// Make a function which calculates the factorial of n using integer 
#include <stdio.h>
// Function to calculate factorial using iteration
int factorial(int n) {
    int result = 1;  // Start with 1 since multiplying by 1 has no effect

    // Loop from 1 to n, multiplying the result by each number
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;  // Return the final result
}

int main() {
    int n;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    // Input validation
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
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