#include <stdio.h>
int a,b;
char c;
scanf("%d %d %o", &a,&b,&c);
switch(c){
    case '+':
    printf("%d", a+b);
    break;
    case '-':
    printf("%d", a-b);
    break;
    case '*':
    printf("%d", a*b);
    break;
    case '/':
    if (b!=0){
        printf("%d", a/b); break;}
    else{
        printf("error"); break;
    };
    default:
    printf("error");
    return 0;
}