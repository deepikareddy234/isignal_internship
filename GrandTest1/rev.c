#include<stdio.h>
void rev(int *p,int n){
int i,t;
for(i=0;i<n/2;i++){
t=*(p+i);
*(p+i)=*(p+n-1-i);
*(p+n-1-i)=t;
}
}
int main(){
int n,a[50],i;
printf("enter value of n");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
rev(a,n);
printf("reverse array:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}

