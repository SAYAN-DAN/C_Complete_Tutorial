
// #include<stdio.h>
// int factotial(int x){
//     int fact = 1;
//     for (int i = 2; i <=x; i++){
//         fact = fact*i;
//     }
//     return fact;    
// }


// int main() {
//     int n,r;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printf("Enter r: ");
//     scanf("%d", &r);
//     int ncr = factotial(n)/(factotial(r)*factotial(n-r));
//     printf("%d", ncr);
//     return 0;
// }


#include<stdio.h>
int factotial(int x){
    int fact = 1;
    for (int i = 2; i <=x; i++){
        fact = fact*i;
    }
    return fact;    
}

int combination(int n,int r) {    
    int ncr=  factotial(n)/(factotial(r)*factotial(n-r));
    return ncr;
}

int main() {
    int n,r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    int ncr = combination(n,r);
    printf("%d", ncr);
    return 0;
}