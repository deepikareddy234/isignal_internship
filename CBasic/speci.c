#include<stdio.h>
int main() {
    int a;
    printf("Enter a value(to print val of diff speci):");
    scanf("%d",&a);
    printf("Decimal:%d Octal:%o Hex:%x ", a, a, a);
    if (a >= 32 && a <= 126)
        printf("Character:%c\n", a);
    else
        printf("Character:Not printable\n");
    return 0;
}


