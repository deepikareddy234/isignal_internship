/*Student Managment*/
#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int marks;
};

struct student s[50];
int n = 0;

void add()
{
    printf("Enter Roll:");
    scanf("%d",&s[n].roll);
    printf("Enter Name:");
    scanf("%s",s[n].name);
    printf("Enter Marks:");
    scanf("%d",&s[n].marks);
    n++;
}

void display()
{
    int i;
    if(n==0)
    {
        printf("No records");
        return;
    }
    for(i=0;i<n;i++)
    {
        printf("\nRoll:%d",s[i].roll);
        printf("\nName:%s",s[i].name);
        printf("\nMarks:%d\n",s[i].marks);
    }
}

void modify()
{
    int r,i,found=0;
    printf("Enter roll to modify:");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            printf("Enter new name:");
            scanf("%s",s[i].name);
            printf("Enter new marks:");
            scanf("%d",&s[i].marks);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Record not found");
}

void delete()
{
    int r,i,j;
    printf("Enter roll to delete:");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            for(j=i;j<n-1;j++)
                s[j]=s[j+1];
            n--;
            printf("Record deleted");
            return;
        }
    }
    printf("Record not found");
}

void count()
{
    printf("Total records:%d",n);
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Add\n2.Display\n3.Modify\n4.Delete\n5.Count\n6.Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: add(); break;
            case 2: display(); break;
            case 3: modify(); break;
            case 4: delete(); break;
            case 5: count(); break;
            case 6: return 0;
            default: printf("Invalid choice");
        }
    }
}

