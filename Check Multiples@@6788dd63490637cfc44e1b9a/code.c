#include <stdio.h>
int main(){
    int number,divisor;
    scanf("%d %d", &number,&divisor);
    if (number%divisor==0)
    printf("Yes");
    else if (divisor%number!=0)
    printf("No");
    return 0;
}