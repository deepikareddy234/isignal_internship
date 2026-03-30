#include<stdio.h>
int main(){
int n,a[50],e[50],o[50],i,ei=0,oi=0;
printf("enter value of n:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(a[i]%2==0)e[ei++]=a[i];
else o[oi++]=a[i];
}
printf("even elements:");
for(i=0;i<ei;i++)
printf("%d ",e[i]);
printf("\n");
printf("odd elements:");
for(i=0;i<oi;i++)
printf("%d ",o[i]);
return 0;
}

