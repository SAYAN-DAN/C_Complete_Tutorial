// #include <stdio.h>

// int main() {
//   printf("nn\n\nnn\n");
//   printf("nn/n/nnn/n");
// }



// #include <stdio.h>
// int main() {
//   float x = 5;
//   float y = 2;
//   printf("%.1f\n", x/y);
//   printf("%.1f", x*y);
//   return 0;
// }


// right a program  to display area of circle with a given radius

// #include <stdio.h>
// int main(){
//   float pi = 3.14159;
//   float r = 5;
//   float radious = pi*r*r;
//   printf("%.3f", radious);
//   return 0;
// }



// calculating percentage of 5 subject
// #include <stdio.h>
// int main(){
//   float math, Eng, Phys,Chem,Beng, Percentage;
//   printf("Enter Math Number:");
//   scanf("%f", &math);
//   printf("Enter Eng Number:");
//   scanf("%f", &Eng);
//   printf("Enter Phys Number:");
//   scanf("%f", &Phys);
//   printf("Enter Chem Number:");
//   scanf("%f", &Chem);
//   printf("Enter Beng Number:");
//   scanf("%f", &Beng);
//   Percentage = (math+Eng+Phys+Chem+Beng)/5;
//   printf("The Percentage is: %.3f", Percentage);
//   return 0;
// }


// Calculate simple interect
// #include <stdio.h>
// int main(){
//     float principal, Interest,Time,value;
//     printf("Simple Principal:");
//     scanf("%f",&principal);
//     printf("Simple Interest:");
//     scanf("%f",&Interest);
//     printf("Simple Time:");
//     scanf("%f",&Time);
//     value = (principal*Interest*Time)/100;
//     printf("The Value of Simple Interest is: %f", value);
//     return 0;
// }

// Predict the number ----------------
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("Enter the value of p and q :");
//     scanf("%d %d", &p,&q);
//     printf("p = %d q = %d",p,q);
//     return 0;
// }


// Take two integers input, a and b : a>b, and find the remainder when a is divided by b.
#include <stdio.h>
int main(){
    int Dividend,Divisor,Remainder,Quotient;
    printf("Enter Dividend:");
    scanf("%d", &Dividend);
    printf("Enter Divisor:");
    scanf("%d", &Divisor);
    // Quotient = Dividend/Divisor;
    // Remainder = Dividend - Divisor * Quotient;
    Remainder = Dividend % Divisor;
    printf("The Remainder is: %d", Remainder);
    return 0;
}


