#include<stdio.h>

struct sample
{
  char c;
double d;
int i;
};
void main()
{
  printf("size of struct is: %lu",sizeof(struct sample));
}
