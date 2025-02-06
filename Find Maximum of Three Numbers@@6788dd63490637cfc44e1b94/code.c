#include <stdio.h>
int main(){
    int a,b,c;
    printf("");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && b>c && c>a)
    printf("%d", a,b,c);
    return 0;
}