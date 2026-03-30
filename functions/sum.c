/*sum of 10 numbers using while loop*/
#include<stdio.h>
int sum10();
int main(){
    int sum;
    printf("Enter 10 numbers:\n");
    sum=sum10();
    printf("Sum=%d",sum);
    return 0;
}
int sum10(){
    int i=1,num,sum=0;
    while(i<=10){
        scanf("%d",&num);
        sum+=num;
        i++;
    }
    return sum;
}

