/*Car Managment*/
#include<stdio.h>
struct Car
{
    int car_id;
    char model[20];
    float rate;
    float total;
};
int main()
{
    struct Car c[5];
    int i,days,min=0,max=0;
    printf("Enter rental days:");
    scanf("%d",&days);
    for(i=0;i<5;i++)
    {
        printf("Enter details of car %d\n",i+1);
        printf("Car ID:");
        scanf("%d",&c[i].car_id);
        printf("Model:");
        scanf("%s",c[i].model);
        printf("Rate per day:");
        scanf("%f",&c[i].rate);
        c[i].total=c[i].rate*days;
    }
    for(i=1;i<5;i++)
    {
        if(c[i].total<c[min].total)
        {
            min=i;
        }
        if(c[i].total>c[max].total)
        {
            max=i;
        }
    }
    printf("Car rental details\n");
    for(i=0;i<5;i++)
    {
        printf("ID:%d Model:%s Total Cost:%.2f\n",c[i].car_id,c[i].model,c[i].total);
    }
    printf("Budget friendly car\n");
    printf("ID:%d Model:%s Total Cost:%.2f\n",c[min].car_id,c[min].model,c[min].total);
    printf("Most effective car\n");
    printf("ID:%d Model:%s Total Cost:%.2f\n",c[max].car_id,c[max].model,c[max].total);
    return 0;
}

