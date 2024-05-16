
// A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.

#include <stdio.h>

void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // n must be odd at this point. So, we can skip one element (i = i + 2)
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // If n is a prime greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Prime factors of %d are: ", n);
    primeFactors(n);
    
    return 0;
}
