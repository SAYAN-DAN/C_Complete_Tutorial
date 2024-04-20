// Calculate simple interect -------------

#include <stdio.h>
int main(){
    float principal, Interest,Time,value;
    printf("Simple Principal:");
    scanf("%f",&principal);
    printf("Simple Interest:");
    scanf("%f",&Interest);
    printf("Simple Time:");
    scanf("%f",&Time);
    value = (principal*Interest*Time)/100;
    printf("The Value of Simple Interest is: %f", value);
    return 0;
}
