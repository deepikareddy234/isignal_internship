#include<stdio.h>
int main() {
    extern int a;
    printf("\n%d", a);
}
int a = 20;

