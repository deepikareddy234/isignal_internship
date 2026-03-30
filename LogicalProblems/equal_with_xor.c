/*check if two numbers are equal without using the comparison operator.*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a^b)
        printf("Not equal");
    else
        printf("Equal");
}

