// Predict the Output-------------------
#include <stdio.h>
int main()
{
    int i = 2, j = 3, k, l;
    float a, b;
    k = i / j * j;   
    printf("%d \n", k); // 2/3= 0 , 0*3 = 0
    l = j / i * i; 
    printf("%d \n", l); // 3/2 = 1 , 1*2 = 2
    a = i / j * j;
    printf("%f \n", a);   
    b = j / i * i;
    printf("%f \n", b);
    printf("%d , %d , %f , %f", k, l, a, b);
}
