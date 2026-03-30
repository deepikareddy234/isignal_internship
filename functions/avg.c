/*calculate average of 10 numbers using for loop*/
#include<stdio.h>
void average(float *avg);
int main(){
    float avg;
    printf("Enter 10 numbers:\n");
    average(&avg);
    printf("Average=%f",avg);
    return 0;
}
void average(float *avg){
    int i,num,sum=0;
    for(i=1;i<=10;i++){
        scanf("%d",&num);
        sum+=num;
    }
    *avg=sum/10.0;
}

