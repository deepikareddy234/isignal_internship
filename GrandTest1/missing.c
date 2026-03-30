#include<stdio.h>
int main(){
int n,a[50],i,sum=0,ts;
printf("enter value of n:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n-1;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
ts=n*(n+1)/2;
printf("missing number :%d",ts-sum);
return 0;
}

