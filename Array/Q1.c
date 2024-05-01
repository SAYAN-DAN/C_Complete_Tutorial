
#include<stdio.h>
int main() {
    int marksarr[10] = {36,88,23,47,32,11,87,87,67,54};
    for (int i = 0; i <10; i++)
    {
        if (marksarr[i] < 35){
            printf("%d\n", i);
        }        
    }    
    return 0;
}