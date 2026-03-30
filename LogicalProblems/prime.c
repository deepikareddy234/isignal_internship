/*Program to check whether a number is prime or not in the range of 1-50 numbers*/
#include<stdio.h>
void main(){
    int n,i,flag=0;
    printf("Enter a number between 1 and 50:");
    scanf("%d",&n);
    if(n<=1||n>50)
        printf("Invalid number");
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Prime number");
        else
            printf("Not a prime number");
    }
}

