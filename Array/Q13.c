// Find the Second largest element in the given Array...
#include<stdio.h>
#include<limits.h>
int main(){
    // int arr[5] = {2,56,76,23,12};
    int arr[5] = {2,4,6,3,6};
    //  int arr[5] = {-2,-56,-76,-23,-12};
    int max = INT_MIN;
    int smax = INT_MIN;
    // for (int i = 0; i <=4; i++){
    //     if (max < arr[i] ){
    //         max = arr[i];
    //     }        
    // }
    // for (int i = 0; i <=4; i++){
    //     if ( arr[i] !=max && smax < arr[i] ){
    //         smax = arr[i];
    //     }        
    // }

     for (int i = 0; i <=4; i++){
        if (max < arr[i] ){
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && max != arr[i]) {
            smax = arr[i];
        }        
    }
    printf("The second maximum value is: %d", smax);
    return 0;        
}
