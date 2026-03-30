#include<stdio.h>
int maxDiff(int a[],int n){
int min=a[0],md=a[1]-a[0],i;
for(i=1;i<n;i++){
if(a[i]-min>md)md=a[i]-min;
if(a[i]<min)min=a[i];
}
return md;
}
int main(){
int n,a[50],i;
printf("enter value of n");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("max diff:%d",maxDiff(a,n));
return 0;
}

