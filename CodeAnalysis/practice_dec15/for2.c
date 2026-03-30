#include<stdio.h>
void main()
{
 int i,j;
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
  if(i==j)
  {
   break;
  }
printf("%d %d\n",i,j);
}
}
}
