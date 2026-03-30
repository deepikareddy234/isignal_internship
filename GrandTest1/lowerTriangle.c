#include<stdio.h>
int main(){
int n,a[10][10],i,j;
printf("enter value of n");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("lower traingle\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i<j)printf("0 ");
else printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}


