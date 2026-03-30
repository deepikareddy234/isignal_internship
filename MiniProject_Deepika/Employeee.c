/*Employee Managment*/
#include<time.h>
struct emp
{
    int id;
    char name[20];
    char dept[20];
    float salary;
    char band;
    int bandChanged;
};
int count = 0;
void addRec(struct emp *p);
void deleteRec(struct emp *p);
void modifyRec(struct emp *p);
void displayRec(struct emp *p);
void countRec();
void changeBand(struct emp *p);
void highestSalary(struct emp *p);
void countBandChanged(struct emp *p);

int main()
{
    struct emp e[10];
    int ch;

    while(1)
    {
        printf("\n1.Add");
        printf("\n2.Delete");
        printf("\n3.Modify");
        printf("\n4.Display");
        printf("\n5.Count");
        printf("\n6.Job Band Change");
        printf("\n7.Highest Salary");
        printf("\n8.Count Employees with Band Change");
        printf("\n9.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: addRec(e); break;
            case 2: deleteRec(e); break;
            case 3: modifyRec(e); break;
            case 4: displayRec(e); break;
            case 5: countRec(); break;
            case 6: changeBand(e); break;
            case 7: highestSalary(e); break;
            case 8: countBandChanged(e); break;
            case 9: return 0;
        }
    }
}

void addRec(struct emp *p)
{
    printf("Enter ID: ");
    scanf("%d",&(*(p+count)).id);
    printf("Enter Name: ");
    scanf("%s",(*(p+count)).name);
    printf("Enter Dept: ");
    scanf("%s",(*(p+count)).dept);
    printf("Enter Salary: ");
    scanf("%f",&(*(p+count)).salary);
    printf("Enter Band: ");
    scanf(" %c",&(*(p+count)).band);
    (*(p+count)).bandChanged = 0;
    count++;
}

void deleteRec(struct emp *p)
{
    int id,i,j,found=0;

    printf("Enter ID to delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if((*(p+i)).id == id)
        {
            for(j=i;j<count-1;j++)
                *(p+j) = *(p+j+1);
            count--;
            found=1;
            printf("Record deleted");
            return;
        }
    }
    if(!found)
        printf("ID not found");
}

void modifyRec(struct emp *p)
{
    int id,i;

    printf("Enter ID to modify: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if((*(p+i)).id == id)
        {
            printf("Enter New Name: ");
            scanf("%s",(*(p+i)).name);
            printf("Enter New Dept: ");
            scanf("%s",(*(p+i)).dept);
            printf("Enter New Salary: ");
            scanf("%f",&(*(p+i)).salary);
            printf("Enter New Band: ");
            scanf(" %c",&(*(p+i)).band);
            return;
        }
    }
    printf("Employee not found");
}

void displayRec(struct emp *p)
{
    int i;

    for(i=0;i<count;i++)
    {
        printf("\nID=%d",(*(p+i)).id);
        printf("\nName=%s",(*(p+i)).name);
        printf("\nDept=%s",(*(p+i)).dept);
        printf("\nSalary=%.2f",(*(p+i)).salary);
        printf("\nBand=%c",(*(p+i)).band);
        printf("\nBand Changed=%d\n",(*(p+i)).bandChanged);
    }
}

void countRec()
{
    printf("Total Employees = %d",count);
}

void changeBand(struct emp *p)
{
    int id,i;
    char oldBand;
    time_t t;

    printf("Enter Employee ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if((*(p+i)).id == id)
        {
            oldBand = (*(p+i)).band;

            if((*(p+i)).band == 'C')
                (*(p+i)).band = 'B';
            else if((*(p+i)).band == 'B')
                (*(p+i)).band = 'A';
            else
            {
                printf("Not Promoted (Already in highest band)");
                return;
            }

            (*(p+i)).bandChanged = 1;
            time(&t);

            printf("Promoted from %c to %c",oldBand,(*(p+i)).band);
            printf("\nBand changed at: %s",ctime(&t));
            return;
        }
    }
    printf("Employee not found");
}

void highestSalary(struct emp *p)
{
    int i,max=0;

    for(i=1;i<count;i++)
    {
        if((*(p+i)).salary > (*(p+max)).salary)
            max=i;
    }

    printf("\nHighest Salary Employee");
    printf("\nID=%d",(*(p+max)).id);
    printf("\nName=%s",(*(p+max)).name);
    printf("\nSalary=%.2f",(*(p+max)).salary);
}

void countBandChanged(struct emp *p)
{
    int i,c=0;

    for(i=0;i<count;i++)
    {
        if((*(p+i)).bandChanged == 1)
            c++;
    }
    printf("Employees whose band changed = %d",c);
}

