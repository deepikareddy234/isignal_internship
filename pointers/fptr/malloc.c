#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p;
p=(int *)malloc(5*sizeof(int));
if(p==NULL)
{
  printf("memory allocation failed\n");
}
else
{
  for(int i=0;i<5;i++)
  {
  *(p+i)=i+1;
  printf("*(%p+%d) = %d\n",p,i,*(p+i));
 }
}
return 0;
}
