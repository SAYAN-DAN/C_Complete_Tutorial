// Create a structure type'book' with name, price and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main() {
    struct book {
        char name[50];
        int noofpages;
        float price;
    }a;
     a.noofpages = 100;
     a.price = 444.50;
     strcpy(a.name,"Sayan Dan");
     printf("%d\n", a.noofpages);
     printf("%f\n", a.price);
     printf("%s\n", a.name);


}
