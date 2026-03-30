#include<stdio.h>
void doubleit(int *a,int n)
{
  int i=0;
  for(i;i<=n;i++)
{
  //*(a+i)=*(a+i)*2;
//a[i]=a[i]*2;
i[a]=i[a]*2;
  
}
}
int main()
{
   int x[6];
   int i=0;
   printf("enter array elements:\n");
   for(i;i<=5;i++)
   {
     scanf("%d",&x[i]);
   }
   doubleit(&x[0],5);
   for(i=0;i<=5;i++)
   {
     printf("%d\n",x[i]);
   }
}
