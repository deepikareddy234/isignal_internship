#include<stdio.h>
void main()
{
  int i,j,k,rows;
  printf("enter no of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
 {
   for(j=1;j<=rows-i;j++)
    printf("  ");
  for(k=i;k<=2*i-1;k++)
    printf("%d ",k);
  for(k=2*i-2;k>=i;k--)
    printf("%d ",k);
 printf("\n");
}
}
