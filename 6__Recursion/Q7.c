
// Write a function to calculate the nth fibonacci number using recurtion......
#include<stdio.h>
int fibo(int a){
    if (a ==1 || a==2){
        return 1;
    }
    int ans1 = fibo(a -1);
    int ans2 = fibo(a -2);
    int ans = ans1 + ans2;
    return ans;
} 

int main() {
    int a;
    printf("Enter the  a: ");
    scanf("%d", &a);
    int p = fibo(a);;
    printf("%d\n", p);
    return 0;
}
