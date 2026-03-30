#include<stdio.h>
int main(){
int n,a[50],i,j;
printf("enter value of n:");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("duplicate elements:");
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
printf("%d ",a[i]);
break;
}
}
}
return 0;
}

