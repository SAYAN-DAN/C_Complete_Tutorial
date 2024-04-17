// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include<stdio.h>
int main() {
    int cost , selling;
    printf("Enter the cost: ");
    scanf("%d", &cost);   
    printf("Enter the selling: ");
    scanf("%d", &selling);
    if (cost < selling)
    {
        printf("The seller made profit\n");
        printf("The profit is: %d" , selling - cost);
    }else if (cost > selling)
    {
        printf("The seller made loss\n");
        printf("The loss is: %d" ,cost - selling);
    }
    else
    {
        printf("no profit , no loss");
    }
    
    
    return 0;
}