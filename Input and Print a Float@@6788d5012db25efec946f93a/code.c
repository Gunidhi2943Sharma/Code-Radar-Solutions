#include <stdio.h>

char* welcome() {
    return "You entered 3.14!";
}

int main() {
    printf("%s", welcome());
    return 0;
}