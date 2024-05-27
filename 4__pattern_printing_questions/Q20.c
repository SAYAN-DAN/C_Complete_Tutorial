//     ****
//    ****
//   ****
//  ****
// ****

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf("#");
        }
        // Print stars
        for (int k = 0; k < 4; k++) {  // Always print 4 stars
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
