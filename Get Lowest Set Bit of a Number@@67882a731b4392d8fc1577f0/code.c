#include <stdio.h>
int main() {
    int num;
    printf("");
    scanf("%d", &num);
    int lowestSetBit = num & -num; 
    printf("%d\n", lowestSetBit);
    return 0;
}
