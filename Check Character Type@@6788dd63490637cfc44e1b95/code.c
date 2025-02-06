#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'||
    ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    printf("Vowel: %c\n", ch);
    else if (ch>='0' && ch<='9')
    printf("Digit: %d\n",ch);
    else if ((ch=='a' && ch=='z') || (ch=='a' && ch=='z'))
    printf("Consonant: %c\n", ch);
    else
    printf("Special Character: %c", ch);
    return 0;
}