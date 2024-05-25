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