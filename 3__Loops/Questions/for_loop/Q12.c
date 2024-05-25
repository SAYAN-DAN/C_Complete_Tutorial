//  Display this GP - 100,50,25,.. upto ‘n’ terms. 

#include<stdio.h>
int main() {
    int i;
    float a = 100;
    for ( i = 1; i<=a; i++)
    {
        printf("%.2f ", a);
        a = a / 2;
    }
    
    return 0;
}

// -----------------------------------------------------------------------------------------------

#include<stdio.h>
int main() {
    float a = 100;
    for (int i = 1; a >=1; i++)
    {
        printf("%.2f  ", a);
        a = a / 2;
    }
    return 0;    
}
