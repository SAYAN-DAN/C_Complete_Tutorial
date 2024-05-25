// right a program  to display area of circle with a given radius.
#include <stdio.h>
int main(){
  float pi = 3.14159 , r;
  printf("Enter the value of radious: ");
  scanf("%f" , &r);
  float area = pi*r*r;
  printf("%.3f", area);
  return 0;
}