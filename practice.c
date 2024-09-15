
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", n);
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

//  #include <stdio.h>
//  int main(){
//     float a = 7.0/22.0 * (3.14 + 2) * 3/5 ;
//     float b = 7/22 * (3.14 + 2) * 3/5 ;
//     int c = 7/22 * (3.14 + 2) * 3/5 ;
//     int d = 7.0/22.0 * (3.14 + 2) * 3/5 ;
//     int e = 7.0/22.0 * 3.14 + 2 * 3/5 ;
//     float f = 7.0/22.0 * 3.14 + 2 * 3/5 ;
//     printf("%f\n%f\n%d\n%d\n%d\n%f", a,b,c,d,e,f);
//     return 0;
//  }

// #include<stdio.h>
// int main() {
//     int Ram ,Shyam,Ajay;
//     printf("Enter the Ram: ");
//     scanf("%d", &Ram);
//     printf("Enter the Shyam: ");
//     scanf("%d", &Shyam);
//     printf("Enter the Ajay: ");
//     scanf("%d", &Ajay);
//     if (Ram < Shyam) {
//         if (Shyam < Ajay) {
//             printf("Ram is Younger");
//         }
//         else{
//             printf("Ajay is Younger");
//         }
//     }
//     else{
//         if (Ram > Shyam){
//             printf("Shyam is Younger");
//         }
//         else{
//             printf("Ajay is Younger");
//         }
//     }
//    return 0;
// }

// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

// #include <stdio.h>

// int main() {
//     double x1 = 3.0, y1 = 2.0;
//     double x2 = 3.0, y2 = 4.0;
//     double x3 = 5.0, y3 = 6.0;
//     double m1 = (y2 - y1) / (x2 - x1);
//     double m2 = (y3 - y2) / (x3 - x2);
//     if (m1 == m2){
//         printf("all the three points fall on one straight line");
//     }
//     else{
//         printf("all the three points not fall on one straight line");
//     }
//      // printf("m1: %lf\n", m1);
//     // printf("m2: %lf\n", m2);

//     return 0;
// }

// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

// #include<stdio.h>
// int main() {
//     int x,y;
//     printf("Enter the coordinates: ");
//     scanf("%d %d" , &x,&y);
//     if (x ==0 && y == 0)
//     {
//         printf("The point is in origin");
//     }
//     else if ( x == 0)
//     {
//         printf("The point is in y axis");
//     }
//     else if (y ==0){
//         printf("The point is in x axis");
//     }
//     else{
//         printf("The piont does not lies on x or y axis");
//     }
// }

// #include<stdio.h>
// int main() {
//     int x = 6;
// int y = x++;
// int z = ++x;
// printf("%d\n", y);
// printf("%d\n", x);
// printf("%d\n", z);
// }

// #include<stdio.h>
// int main() {
//     char n;
//     printf("Enter the char:");
//     scanf("%c" , &n);

// }

// #include <stdio.h>
// int main(){
//     int i, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a = 0;
//     for (i = 2; i < n - 1; i++){
//         if (n % i == 0){
//             a = a + 1;
//         }
//         break;
//     }
//     if (n == 1){
//         printf("1 is neither prime nor composite\n");
//     }
//     else if (a == 0){
//         printf("the given number is prime number \n");
//     }
//     else{
//         printf("the given number is composite number \n");
//     }
//     return 0;
// }
