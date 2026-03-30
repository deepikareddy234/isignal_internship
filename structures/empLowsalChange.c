/*program to input employee details and then update the salary of the employee with the lowest salary by a given percentage.*/
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
    int i,n,min;
    float percent;
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
    }
    min=0;
    for(i=1;i<n;i++)
    {
        if(e[i].salary<e[min].salary)
        {
            min=i;
        }
    }
    printf("Enter percentage increase:");
    scanf("%f",&percent);
    e[min].salary=e[min].salary+(e[min].salary*percent/100);
    printf("Updated employee details\n");
    for(i=0;i<n;i++)
    {
        printf("ID:%d Name:%s Salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}

