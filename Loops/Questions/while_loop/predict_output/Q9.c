#include <stdio.h>
int main(){
    float x = 1.1;
    while (x == 1.1)
    {
        printf("\n%d", x);
        x = x - 0.1;
    }
    return 0;
}