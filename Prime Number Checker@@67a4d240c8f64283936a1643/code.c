#include <stdio.h>
int main() {
    int t;
    int num;
    printf("");
    scanf("%d", &t);
    printf("%d\n", is_prime(num));
    return 0;
}
int is_prime(int num) {
    if (num < 2) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

