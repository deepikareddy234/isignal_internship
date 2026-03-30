#include<stdio.h>
void main()
{
 extern int i;
i=20;
printf("%lu",sizeof(i));
}
