// calculating percentage of 5 subject
#include <stdio.h>
int main(){
  float math, Eng, Phys,Chem,Beng, Percentage;
  printf("Enter Math Number:");
  scanf("%f", &math);
  printf("Enter Eng Number:");
  scanf("%f", &Eng);
  printf("Enter Phys Number:");
  scanf("%f", &Phys);
  printf("Enter Chem Number:");
  scanf("%f", &Chem);
  printf("Enter Beng Number:");
  scanf("%f", &Beng);
  Percentage = (math+Eng+Phys+Chem+Beng)/5;
  printf("The Percentage is: %.3f", Percentage);
  return 0;
}