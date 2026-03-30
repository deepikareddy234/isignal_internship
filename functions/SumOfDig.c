/*sum of individual digits of a positive integer*/
#include<stdio.h>
void digitSum(int n,int *sum);
int main(){
    int n,sum=0;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    digitSum(n,&sum);
    printf("Sum of digits=%d",sum);
    return 0;
}
void digitSum(int n,int *sum){
    while(n>0){
        *sum+=n%10;
        n=n/10;
    }
}

