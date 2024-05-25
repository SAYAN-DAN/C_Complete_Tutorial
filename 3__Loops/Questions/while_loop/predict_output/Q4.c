#include<stdio.h>
int main() {
    int x =4,y,z;
    y = --x; //y = 3
    z = x--; //z = 3 , x = 2
    printf("\n%d%d%d",x,y,z);
    return 0;    
}