// Take input percentage of a student and print the Grade according to marks

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
   if (number>=91 && number<=100){
    printf("Excellent Result");
   }
   else if (number>=81 && number<=90){
    printf("Very Good");
   }
   else if (number>=71 && number<=80){
   printf("Good");
   }
   else if (number>=61 && number<=70){
   printf("Can do better");
   }
   else if (number>=51 && number<=60){
    printf("Avarage");
   }
   else if (number>=41 && number<=50){
    printf("Below Avarage");
   }
   else{
    printf("Fail");
   }
   
    return 0;
}
