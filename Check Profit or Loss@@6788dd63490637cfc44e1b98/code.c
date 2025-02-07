#include <stdio.h>
int main(){
    int selling_price, cost_price;
    scanf("%d %d", &selling_price, &cost_price);
    if (selling_price>cost_price)
    printf("Profit");
    else 
    printf("Loss");
    return 0;
}