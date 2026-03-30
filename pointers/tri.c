#include<stdio.h>
void tri(double **res,double b,double h);
int main()
{
  double res;
  double *p=&res;
  int b,h;
printf("enter base and height:");
scanf("%d %d",&b,&h);
tri(&p,b,h);
printf("area of triangle is:%f",res);
}
void tri(double **res,double b,double h)
{
  **res=0.5*b*h;
}

