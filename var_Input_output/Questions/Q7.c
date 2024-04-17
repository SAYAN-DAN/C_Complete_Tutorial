// The expression a = 7/22 * (3.14 + 2) * 3/5 evaluates to -------

 #include <stdio.h>
 int main(){
    float a = 7.0/22.0 * (3.14 + 2) * 3/5 ;
    float b = 7/22 * (3.14 + 2) * 3/5 ;
    int c = 7/22 * (3.14 + 2) * 3/5 ;
    int d = 7.0/22.0 * (3.14 + 2) * 3/5 ;
    int e = 7.0/22.0 * 3.14 + 2 * 3/5 ;
    float f = 7.0/22.0 * 3.14 + 2 * 3/5 ;
    printf("%f\n%f\n%d\n%d\n%d\n%f", a,b,c,d,e,f);
    return 0;
 }