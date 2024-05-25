
#include <stdio.h>
int main(){
    int i;
    while (i = 10)
    {
        printf("\n%d", i);    // this is a infinite loop...
        i = i + 1;
    }
    return 0;
}