#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("");
    scanf("%d %d %d", &num1, &num2, &num3);
    double average= (num1+num2+num3)/3.0;
    printf("Average: %.2f\n", average);
    return 0;
}