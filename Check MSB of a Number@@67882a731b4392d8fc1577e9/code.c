#include <stdio.h>
#include <stdio.h>

void checkMSB(int num) {
    int msbMask = 1 << 31;
    
    if (num & msbMask) {
        printf("MSB is set (1)\n");
    } else {
        printf("MSB is not set (0)\n");
    }
}
int main() {
    int num;
    printf("");
    scanf("%d", &num);
    
    checkMSB(num);

    return 0;
}
