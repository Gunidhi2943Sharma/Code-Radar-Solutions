#include <stdio.h>

int main() {
    int num, n;
    printf("");
    scanf("%d", &num);
    printf("");
    scanf("%d", &n);
    num = num & ~(1 << n); 
    printf("%d\n", num); 
    return 0;
}
