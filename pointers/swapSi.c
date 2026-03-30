#include<stdio.h>
void swap(int *a,int *b);
void main()
{
  int a=10,b=20;
  swap(&a,&b);
  printf("%d %d",a,b);
}
void swap(int *a,int *b)
{
  int temp;
temp=*a;
*a=*b;
*b=temp;
}

