#include <stdio.h>
int main() {
    int num, n;
    
    printf("");
    scanf("%d", &num);
    
    printf("");
    scanf("%d", &n);
    
    printf("%d\n", n, (num >> n) & 1);
    
    return 0;
}
