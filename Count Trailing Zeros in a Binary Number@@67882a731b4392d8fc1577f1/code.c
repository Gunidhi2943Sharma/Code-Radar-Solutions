#include <stdio.h>
int main() {
    int num, count = 0;
    printf("");
    scanf("%d", &num);
    if (num == 0) { 
        printf("32\n"); 
        return 0;
    }
    while ((num & 1) == 0) {
        num = num >> 1; 
        count++;
    }
    printf("%d\n", count); 
    return 0;
}
