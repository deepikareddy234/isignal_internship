#include<stdio.h>
void main()
{
  int n;
  printf("enter a value n:");
  scanf("%d",&n);
  for(int i=n;i>=0;i--)
 {
   for(int j=0;j<=i;j++)
   {
     printf("*");
  }
printf("\n");
}
}
