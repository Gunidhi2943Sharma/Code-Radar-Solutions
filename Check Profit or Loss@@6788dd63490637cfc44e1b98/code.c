#include <stdio.h>
int main(){
    int selling_price, cost_price;
    scanf("%d %d", &selling_price, &cost_price);
    if (selling_price>=cost_price)
    printf("Profit", selling_price);
    else if (cost_price>=selling_price) 
    printf("Loss", cost_price);
    else
    printf("No Profit No Loss")
    return 0;
}