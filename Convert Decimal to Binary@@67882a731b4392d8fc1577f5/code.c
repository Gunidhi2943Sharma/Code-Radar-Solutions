#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("");
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}
