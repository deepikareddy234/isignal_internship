#include <stdio.h>
    int main()
    {
        int y = 8;
        if (y | (y = 7))
            printf("true %d\n", y);
        else
            printf("false %d\n", y);
 
    }

