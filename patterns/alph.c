#include<stdio.h>
void main()
{
  int n;
 char ch='A';
  printf("enter value of n:");
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%c ",ch);
    }
  printf("\n");
 ch++;
 }
}
