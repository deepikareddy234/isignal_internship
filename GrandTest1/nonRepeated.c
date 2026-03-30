#include<stdio.h>
int main(){
int n,a[50],i,j,c;
printf("enter value of n:");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("final array without repeating elemenst are:");
for(i=0;i<n;i++){
c=0;
for(j=0;j<n;j++){
if(a[i]==a[j])c++;
}
if(c==1)printf("%d ",a[i]);
}
return 0;
}

