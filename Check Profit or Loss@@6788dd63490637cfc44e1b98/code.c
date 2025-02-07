#include <stdio.h>
int main(){
    int selling_price, cost_price;
    scanf("%d %d", &selling_price, &cost_price);
    if (selling_price>=cost_price)
    printf("Profit", selling_price, cost_price);
    else if (cost_price>=selling_price) 
    printf("Loss", selling_price, cost_price);
    return 0;
}