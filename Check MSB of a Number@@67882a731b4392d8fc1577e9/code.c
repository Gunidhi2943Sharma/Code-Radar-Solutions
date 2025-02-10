#include <stdio.h>
#include <stdio.h>

void checkMSB(int num) {
    int msbMask = 1 << 31;
    
    if (num & msbMask) {
        printf("Set");
    } else {
        printf("Not Set");
    }
}
int main() {
    int num;
    printf("");
    scanf("%d", &num);
    
    checkMSB(num);

    return 0;
}
