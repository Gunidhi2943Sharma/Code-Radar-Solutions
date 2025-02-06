#include <stdio.h>
int main(){
    int a,b,c, max;
    printf("");
    scanf("%d %d %d", &a,&b,&c);
    if (a>=b && a>=c){
        max= num1;
    }
    else if (b>=a && b>=c){
        max= num2;
    }
    else{
        max= num3;
    } 
    printf("%d\n", max);
    return 0;
}