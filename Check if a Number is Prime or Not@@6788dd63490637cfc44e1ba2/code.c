#include<stdio.h>
int main(){
    int n,i;
    printf("enter your number: ");
    scanf("%d",&n);
    if(n<2){
        printf("not prime\n");
        return 0;
    }
    for (i=2;i*i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
            }   
    }
    return 0;
}