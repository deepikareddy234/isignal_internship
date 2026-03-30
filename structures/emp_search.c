/*program to input employee details and search for an employee by ID, displaying an error message if the employee is not found.*/
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
    int i,n,search,found=0;
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
    printf("Enter employee ID to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(e[i].id==search)
        {
            printf("Employee found\n");
            printf("ID:%d Name:%s Salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Employee not found\n");
    }
    return 0;
}

