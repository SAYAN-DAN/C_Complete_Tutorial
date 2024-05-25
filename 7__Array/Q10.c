// Find the difference between the sum of elements at even indices to the sum of elements at odd indices...
  #include<stdio.h>
  int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int evenindices = 0;  // 1+3+5+7 =16
    int oddindices = 0; // 2+4+6 =12
    for (int i = 0; i <=6; i++)
    {
        if (i % 2 ==0){
            evenindices += arr[i];
        }
        else{
            oddindices +=arr[i];
        }               
    }
        int result = evenindices - oddindices;
        printf("The result is:%d ", result);
        return 0; 
  }