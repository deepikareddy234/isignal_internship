#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;

    printf("*(--p) = %d\n", *(--p));
    return 0;
}

