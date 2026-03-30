/*Reverse Array in C without using another array*/
#include<stdio.h>

void reverse(int *a,int n){
    int i,temp;
    for(i=0;i<n/2;i++){
        temp=*(a+i);
        *(a+i)=*(a+n-1-i);
        *(a+n-1-i)=temp;
    }
}

int main(){
    int a[50],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printf("Reversed array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

