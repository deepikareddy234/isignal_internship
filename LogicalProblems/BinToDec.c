/*Program to convert the binary number into a decimal number using while loop*/
#include<stdio.h>
void main(){
    int n,d,base=1,dec=0;
    printf("Enter a binary number:");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        dec=dec+d*base;
        base=base*2;
        n=n/10;
    }
    printf("%d",dec);
}

