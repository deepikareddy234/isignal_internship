/*Program to Replace all 0’s with 1’s in a Number*/
#include<stdio.h>
void main(){
    int n,d,rev=0,ans=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
        printf("1");
    else{
        while(n>0){
            d=n%10;
            if(d==0)
                d=1;
            rev=rev*10+d;
            n=n/10;
        }
        while(rev>0){
            ans=ans*10+(rev%10);
            rev=rev/10;
        }
        printf("%d",ans);
    }
}

