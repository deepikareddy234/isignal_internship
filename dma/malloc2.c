#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *p=NULL;
p=(int *)malloc(5*sizeof(int));
*(p+0)=30;
*(p+1)=40;
*(p+2)=230;
*(p+3)=130;
*(p+4)=450;
printf("%d %d %d %d %d\n",*(p+0),*(p+1),*(p+2),*(p+3),*(p+4));
//free(p);
free(p);
p=NULL;
p=(int *)malloc(14*sizeof(int));
*p=45;
printf("%d %d %d %d %d",*(p+0),*(p+1),*(p+2),*(p+3),*(p+4));
return 0;
}
