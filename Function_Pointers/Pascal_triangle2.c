
#include<stdio.h>
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact *= i;
    }
    return fact;    
}
int combination(int n, int r) {    
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main() {
    int n;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces to format the triangle
        for (int space = 0; space < n - (i - 1); space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            int icj = combination(i, j);
            printf("%1d  ", icj); // Adjust the spacing for better alignment
        }
        printf("\n");
    }

    return 0;
}
