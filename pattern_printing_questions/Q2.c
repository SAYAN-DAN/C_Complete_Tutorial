
// : Print the given pattern
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4

// Type 1 --------
// #include <stdio.h>
// int main(){
//     int i, j, n;
//     printf("Enter the n: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++){
//         for (j = 1; j <= n; j++){
//             printf("%d ", j);
//             // j = j+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Type2 --------

#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int a =1;
        for (j = 1; j <= n; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
