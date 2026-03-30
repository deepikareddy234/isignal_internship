#include<stdio.h>
int main(){
int n,i,count=0;
printf("Enter limit: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
 if(i%5==0)
  count++;
}
printf("%d integers are divisible by 5\n",count);
return 0;
}

