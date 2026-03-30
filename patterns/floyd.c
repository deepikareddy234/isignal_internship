#include<stdio.h>
int main(){
    int i,j,num,rows;
    printf("Enter starting number and rows:");
    scanf("%d %d",&num,&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

