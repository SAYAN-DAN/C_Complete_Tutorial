// : Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

// #include<stdio.h>
// int main() {
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d" , &n);
//     for ( i =4; i < 3*n + 1; i = i + 3){
//         printf("%d " , i);
//     }
    
//     return 0;
// }


// : Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
//solve tis question with a anather way
#include<stdio.h>
int main() {
    int i,n,a;
    printf("Enter the number: ");
    scanf("%d" , &n);
    a = 4;
    for ( i =1; i<=n; i++){
        printf("%d " , a);
        a = a + 3;
    }
    
    return 0;
}
