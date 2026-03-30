/*Hotel Managment*/
#include<stdio.h>

struct Hotel
{
    int room_no;
    char type[20];
    float rent;
};

struct Hotel h[50];
int count = 0;

void addRooms()
{
    int n, i;
    printf("How many rooms to add: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter details of room %d\n", count + 1);
        printf("Room Number: ");
        scanf("%d", &h[count].room_no);
        printf("Room Type: ");
        scanf("%s", h[count].type);
        printf("Rent per day: ");
        scanf("%f", &h[count].rent);
        count++;
    }
}

void displayRooms()
{
    int i;
    if(count == 0)
    {
        printf("No rooms available\n");
        return;
    }

    for(i = 0; i < count; i++)
    {
        printf("Room:%d Type:%s Rent:%.2f\n",
               h[i].room_no, h[i].type, h[i].rent);
    }
}

void calculateBill()
{
    int room, days, i;
    float total;

    printf("Enter room number: ");
    scanf("%d", &room);
    printf("Enter number of days: ");
    scanf("%d", &days);

    for(i = 0; i < count; i++)
    {
        if(h[i].room_no == room)
        {
            total = h[i].rent * days;
            printf("Total Bill = %.2f\n", total);
            return;
        }
    }
    printf("Room not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Hotel Management System ---\n");
        printf("1. Add Room Details\n");
        printf("2. Display Rooms\n");
        printf("3. Calculate Bill\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addRooms(); break;
            case 2: displayRooms(); break;
            case 3: calculateBill(); break;
            case 4: printf("Thank You For Visiting\n"); break;
            default: printf("Invalid choice\n");
        }
    }
    while(choice != 4);

    return 0;
}

