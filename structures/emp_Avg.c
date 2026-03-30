/*program to store employee data in an array of structures, compute the average salary, and display employees earning above the average.*/
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee e[50];
    int i,n;
    float sum=0,avg;
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of employee %d\n",i+1);
        printf("ID:");
        scanf("%d",&e[i].id);
        printf("Name:");
        scanf("%s",e[i].name);
        printf("Salary:");
        scanf("%f",&e[i].salary);
        sum=sum+e[i].salary;
    }
    avg=sum/n;
    printf("Average salary:%.2f\n",avg);
    printf("Employees earning above average salary\n");
    for(i=0;i<n;i++)
    {
        if(e[i].salary>avg)
        {
            printf("ID:%d Name:%s Salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
        }
    }
    return 0;
}

