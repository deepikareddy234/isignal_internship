/*reverse of a number using while loop*/
#include<stdio.h>
int reverse(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Reverse=%d",reverse(n));
    return 0;
}
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

