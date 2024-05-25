// Count the number of element in the given array greater than a given number x......
#include<stdio.h>
int main(){
   int arr[5] = {5,6,2,8,9};
   int x,count = 0;
   printf("enter the x: ");
   scanf("%d", &x);
   for (int i = 0; i < 5; i++)
   {
      if ( x > arr[i])
      {
        count++;
      }
      
   }

      printf("Number of elements smaller than %d: %d\n", x, count);
   
}