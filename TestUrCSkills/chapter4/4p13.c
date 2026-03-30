#include <stdio.h>

int main()
{
    printf("%lu %lu %lu",
           sizeof(3.14f),
           sizeof(3.14),
           sizeof(3.14l));

    return 0;
}

