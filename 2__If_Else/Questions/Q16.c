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
        if (Shyam < Ajay){
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

//*********************************************************************************

#include <stdio.h>

int main() {
    int Ram, Shyam, Ajay;
    
    printf("Enter Ram's age: ");
    scanf("%d", &Ram);
    
    printf("Enter Shyam's age: ");
    scanf("%d", &Shyam);
    
    printf("Enter Ajay's age: ");
    scanf("%d", &Ajay);
    
    if (Ram < Shyam) {
        if (Ram < Ajay) {
            printf("Ram is younger.\n");
        } else if (Ram > Ajay) {
            printf("Ajay is younger.\n");
        } else {
            printf("Ram and Ajay are of the same age.\n");
        }
    } else if (Shyam < Ram) {
        if (Shyam < Ajay) {
            printf("Shyam is younger.\n");
        } else if (Shyam > Ajay) {
            printf("Ajay is younger.\n");
        } else {
            printf("Shyam and Ajay are of the same age.\n");
        }
    } else {
        if (Shyam == Ajay) {
            printf("Ram, Shyam, and Ajay are of the same age.\n");
        } else {
            printf("Ram and Shyam are of the same age.\n");
        }
    }
    
    return 0;
}
