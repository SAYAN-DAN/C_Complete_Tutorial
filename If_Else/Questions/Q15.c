
//  Take 3 positive integers input and print the greatest of them.
// 1:39:07 - Time in Video
// pdf - 26 page

#include<stdio.h>
int main() {
    int a ,b,c;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);
    printf("Enter the c: ");
    scanf("%d", &c);
    if (a>b) {
        if (a>c) {
            printf("A is greater");
        }
        else{
            printf("C is greater");            
        }        
    }
    else{
        if (b>a){
            printf("B is greater");
        }
        else{
            printf("C is greater");
        }        
    }    
   return 0;    
}