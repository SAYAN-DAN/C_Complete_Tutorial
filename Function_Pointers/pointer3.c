// #include<stdio.h>
// int main() {
//     int a = 5;
//     int* x = &a;   
//     printf("%d\n" , *x);  // print the value of a
//     int** y = &x;
//     printf("%d\n" , **y);  // print the value of a
//     return 0;
// }


#include<stdio.h>
int main() {
    const int i = 10;
    int *ptr = &i;   
    *ptr = 20;
    printf("%d\n", i);
    return 0;
}


