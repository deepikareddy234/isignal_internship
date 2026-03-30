#include<stdio.h>
int main(){
int n,a[50],f[50]={0},i,j;
printf("enter value of n");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("frequencies are:\n");
for(i=0;i<n;i++){
if(f[i]==1)continue;
int c=1;
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
c++;
f[j]=1;
}
}
printf("%d -> %d\n",a[i],c);
}
return 0;
}

