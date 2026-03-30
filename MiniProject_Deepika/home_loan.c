/*Home Loan Managment*/
#include<stdio.h>

struct Loan
{
    int loan_id;
    char name[20];
    float amount;
    float rate;
    int years;
};

struct Loan l[50];
int count = 0;

void addLoan()
{
    int n, i;
    printf("How many loans to add: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter loan details %d\n", count + 1);
        printf("Loan ID: ");
        scanf("%d", &l[count].loan_id);
        printf("Customer Name: ");
        scanf("%s", l[count].name);
        printf("Loan Amount: ");
        scanf("%f", &l[count].amount);
        printf("Interest Rate (%%): ");
        scanf("%f", &l[count].rate);
        printf("Loan Period (years): ");
        scanf("%d", &l[count].years);
        count++;
    }
}

void displayLoans()
{
    int i;
    if(count == 0)
    {
        printf("No loan records available\n");
        return;
    }

    for(i = 0; i < count; i++)
    {
        printf("ID:%d Name:%s Amount:%.2f Rate:%.2f Years:%d\n",
               l[i].loan_id, l[i].name, l[i].amount, l[i].rate, l[i].years);
    }
}

void calculateInterest()
{
    int id, i;
    float interest, total;

    printf("Enter Loan ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(l[i].loan_id == id)
        {
            interest = (l[i].amount * l[i].rate * l[i].years) / 100;
            total = l[i].amount + interest;

            printf("Interest Amount = %.2f\n", interest);
            printf("Total Payable Amount = %.2f\n", total);
            return;
        }
    }
    printf("Loan not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Home Loan Management System ---\n");
        printf("1. Add Loan Details\n");
        printf("2. Display Loans\n");
        printf("3. Calculate Interest\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addLoan(); break;
            case 2: displayLoans(); break;
            case 3: calculateInterest(); break;
            case 4: printf("Thank You\n"); break;
            default: printf("Invalid choice\n");
        }
    }
    while(choice != 4);

    return 0;
}

