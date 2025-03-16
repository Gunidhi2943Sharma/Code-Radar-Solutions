#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        c=a+b;
        a=b;
        b=c;
        if (a%3==0){
            continue;
        }
        else{
            printf("%d\n", a);
            }
    }
    return 0;
}