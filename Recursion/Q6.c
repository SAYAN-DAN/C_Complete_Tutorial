
// Make a function which calculates 'a' raised  to the power 'b' using recurtion....

#include<stdio.h>
int power(int a, int b) {
     if (b == 0) return 1;
     int recturtion  = a * power(a,b-1);        
    return recturtion;    
}

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d\n", p);
    return 0;
}

