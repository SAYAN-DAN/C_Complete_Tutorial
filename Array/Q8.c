// Given an array of integers, change the value of all odd indexed elements to  its second multiple and increment all even indexed value by 10..

#include<stdio.h>
int main(){
    int arr[5]= {1,2,3,4,5};
    for (int i = 0; i <=4; i++)
    {
        if (arr[i] % 2 !=0 ){
            arr[i]*=2;
        }
        else{
            arr[i] +=10;
        }        
    }
    for (int i = 0; i <=4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;   
}