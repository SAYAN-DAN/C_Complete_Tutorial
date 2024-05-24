#include<stdio.h>
int main(){
   int arr[6] = {5,6,2,4,8,9};
   int x,count = 0;
   printf("enter the x: ");
   scanf("%d", &x);
   for (int i = 0; i < 6; i++)
   {
      if ( x > arr[i])
      {
        count++;
      }
      
   }

      printf("Number of elements smaller than %d: %d\n", x, count);
   
}