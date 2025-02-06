#include <stdio.h>
int main(){
    int grade;
    scanf("%d", &grade);
    if (grade>=90)
    printf("A", grade);
    else if (grade>=80 && grade<90)
    printf("B", grade);
    else if (grade>=70 && grade<80)
    printf("C", grade);
    else if (grade>=60 && grade<70)
    printf("D", grade);
    else
    printf("F", grade);
    return 0;
}