// Find the minimum value out of all the element in the array...
// int arr[5] = {2,56,76,23,12};

#include<stdio.h>
int main(){
    int arr[5] = {2,56,76,23,12};
    //  int arr[5] = {-2,-56,-76,-23,-12};
    int max = arr[0];
    for (int i = 0; i <=4; i++){
        if (max > arr[i] ){
            max = arr[i];
        }        
    }
    printf("The minimum value is: %d", max);
    return 0;        
}





//**********************************************************************************
// #include<stdio.h>
// int main() {
//     int arr[5] = {45,76,89,11,23};
//     int mimimumvalue;
//     for (int i = 0; i < 5; i++)
//     {
//         if (mimimumvalue > arr[i])
//         {
//             mimimumvalue = arr[i];
//         }
        
//     }
//     printf("The mimimumvalue is %d", mimimumvalue);
//     return 0;
// }

