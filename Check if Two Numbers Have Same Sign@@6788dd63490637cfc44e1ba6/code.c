#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if (a>=0 && b>=0)
    printf("Same sign");
    else if (b<=0 && b<=0)
    printf("Different Sign");
    return 0;
}