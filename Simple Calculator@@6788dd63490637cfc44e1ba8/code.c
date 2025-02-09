#include <stdio.h>
int a,b;
char o;
scanf("%d %d %o", &a,&b,&o);
switch(o){
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