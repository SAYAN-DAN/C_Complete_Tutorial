//  If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.



#include<stdio.h>
int main() {
    int Ram ,Shyam,Ajay;
    printf("Enter the Ram: ");
    scanf("%d", &Ram);
    printf("Enter the Shyam: ");
    scanf("%d", &Shyam);
    printf("Enter the Ajay: ");
    scanf("%d", &Ajay);
    if (Ram < Shyam) {
        if (Shyam < Ajay) {
            printf("Ram is Younger");
        }
        else{
            printf("Ajay is Younger");            
        }        
    }
    else{
        if (Ram > Shyam){
            printf("Shyam is Younger");
        }
        else{
            printf("Ajay is Younger");
        }        
    }    
   return 0;    
}
