#include <stdio.h>
int main(){
    char ch;
    while(getchar()!='\n');
    printf("");
    scanf("%c",ch);
    printf("You entered: %c\n",ch);
    return 0;
}