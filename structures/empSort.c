/*program to input data for three employees, sort them by salary, and display the sorted list.*/
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee e[3],temp;
    int i,j,n;
    for(i=0;i<3;i++)
    {
        printf("Enter details of employee %d\n",i+1);
        printf("ID:");
        scanf("%d",&e[i].id);
        printf("Name:");
        scanf("%s",e[i].name);
        printf("Salary:");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("Employees sorted by salary\n");
    for(i=0;i<3;i++)
    {
        printf("ID:%d Name:%s Salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}

