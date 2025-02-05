#include <stdio.h>
int main(){
    char ch;
    printf("");
    scanf("%c", &ch);
    if (a>='A' && a<='Z'){
        printf("Uppercase\n");
    }
    else if (a>='a' && a<='z'){
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet\n");
    }
    return 0;
}