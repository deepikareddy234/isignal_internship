/* the largest number among the three numbers.*/
#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 values:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
 printf("%d",a);
else if(b>=a&&b>=c)
 printf("%d",b);
else
 printf("%d",c);
}

