#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d", &a);
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