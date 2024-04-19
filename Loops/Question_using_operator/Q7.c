// Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’. -
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        } else {
            sum = sum - i;
        }
    }    
    printf("The sum is %d", sum);
    return 0;
}

