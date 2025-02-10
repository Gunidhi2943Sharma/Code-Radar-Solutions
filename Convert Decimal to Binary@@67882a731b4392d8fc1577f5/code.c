#include <stdio.h>
void decimalToBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }

    int binary = 0, place = 1;

    while (num > 0) {
        binary += (num % 2) * place;
        num /= 2;
        place *= 10;
    }

    printf("%d\n", binary);
}

int main() {
    int num;
    printf("");
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}