#include<stdio.h>
int main() {
    int marksarr[9];
    printf("Enter the all marks: ");
     for (int i = 0; i < 9; i++) {
        scanf("%d\n", &marksarr[i]);
     }
    for (int i = 0; i <9; i++)
    {
        if (marksarr[i] < 35)
        {
            printf("%d" , marksarr[i]);
        }        
    }    
    return 0;
}