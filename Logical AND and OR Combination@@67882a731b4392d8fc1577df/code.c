// #include <stdio.h>
// int main(){
//     int num1, num2;
//     printf("");
//     scanf("%d %d",&num1, &num2);
//     if (num1>0 && num2<0)
//     printf("True\n");
//     else if (num1==0||num2==0)
//     printf("True\n");
//     else
//     printf("False\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 < 0)  
        printf("True\n");
    else if ((num1 == 0 || num2 == 0) && !(num1 == 0 && num2 > 0))  // Fixes (0,5) case
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
