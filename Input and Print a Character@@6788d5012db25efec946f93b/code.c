#include <stdio.h>
int main(){
    char ch;
    while(getchar()!='\n');
    printf("");
    getchar();
    scanf("%c",ch);
    printf("You entered: %c\n",ch);
    return 0;
}