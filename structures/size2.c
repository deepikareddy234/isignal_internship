#include<stdio.h>
struct time
{
  unsigned char date:5;
  unsigned char month:4;
  short int year;
};
void main()
{
  printf("size:%lu\n",sizeof(struct time));
  printf("int size:%lu",sizeof(short int));
}
