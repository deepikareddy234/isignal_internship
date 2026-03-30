#include<stdio.h>
void swap(int **,int **);
int main()
{
 int a=20,b=30;
int *p1=&a,*p2=&b;
swap(&p1,&p2);
printf("%d %d\n",a,b);
return 0;
}
void swap(int **x,int **y)
{
  int temp;
temp=**x;
**x=**y;
**y=temp;
}
