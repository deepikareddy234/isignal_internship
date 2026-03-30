#include<stdio.h>
#include<stdlib.h>
double* area(double b,double h)
{
 double *res;
res=(double*)malloc(4);
*res=0.5*b*h;
return res;
}
int main()
{
  double b,h;
double *p;
  printf("enter values of b and h");
  scanf("%lf %lf",&b,&h);
  p=area(b,h);
  printf("area is %lf",*p);
}
