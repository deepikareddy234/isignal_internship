#include <stdio.h>

int main()
{
    float x = 2.17;
    double y = 2.17;
    long double z = 2.17;

    printf("float x = %f\n", x);
    printf("double y = %lf\n", y);
    printf("long double z = %Lf\n", z);

    return 0;
}

