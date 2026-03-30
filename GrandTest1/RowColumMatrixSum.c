#include<stdio.h>
int main(){
int r,c,a[10][10],i,j;
printf("enter value of rows and columns:");
scanf("%d%d",&r,&c);
printf("enter array elements:");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++){
int rs=0;
for(j=0;j<c;j++)rs+=a[i][j];
printf("row %d sum:%d \n",i+1,rs);
}
printf("\n");
for(j=0;j<c;j++){
int cs=0;
for(i=0;i<r;i++)cs+=a[i][j];
printf("column %d sum:%d\n",j+1,cs);
}
return 0;
}

