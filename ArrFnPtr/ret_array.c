#include<stdio.h>
#include<stdlib.h>
int *fun(int *j,int k)
{
  int i=0;
  int *l=(int*)malloc(4*sizeof(int));
  for(;i<k;i++)
  {
     j[i]=i+1;
     l[i]=j[i];
  }
  return l;
}
int main()
{
   int a[4];
   int i=0;
   int *p;
   p=fun(a,4);
   for(i=0;i<4;i++)
   {
     printf("%d %x\n",a[i],&a[i]);
     printf("%d %x\n",p[i],p+i);
   }
  free(p);
  p=NULL;
  return 0;
}

