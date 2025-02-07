#include <stdio.h>
int main(){
    int selling_price, cost_price;
    printf("");
    scanf("%d %d", &selling_price, &cost_price);
    if (selling_price>cost_price){
        printf("Profit\n");
    }
    else if (cost_price<selling_price){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss\n");
    }
    
    return 0;
}