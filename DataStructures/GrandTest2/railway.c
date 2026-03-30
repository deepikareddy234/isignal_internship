/*railway ticket booking Management System using structures, functions and pointers of the structure variables*/
#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticketNo;
    char name[30];
    char source[20];
    char destination[20];
    int age;
};

int count = 0;
int max;

void bookTicket(struct Ticket *t) {
    if (count >= max) {
        printf("\nNo seats available!\n");
        return;
    }

    printf("\nEnter Ticket Number: ");
    scanf("%d", &t[count].ticketNo);

    printf("Enter Passenger Name: ");
    scanf("%s", t[count].name);

    printf("Enter Source Station: ");
    scanf("%s", t[count].source);

    printf("Enter Destination Station: ");
    scanf("%s", t[count].destination);

    printf("Enter Age: ");
    scanf("%d", &t[count].age);

    count++;
    printf("\nTicket Booked Successfully!\n");
}

void displayTickets(struct Ticket *t) {
    int i;

    if (count == 0) {
        printf("\nNo tickets booked yet.\n");
        return;
    }

    printf("\n--- Booked Tickets ---\n");
    for (i = 0; i < count; i++) {
        printf("\nTicket No    : %d", t[i].ticketNo);
        printf("\nName         : %s", t[i].name);
        printf("\nSource       : %s", t[i].source);
        printf("\nDestination  : %s", t[i].destination);
        printf("\nAge          : %d\n", t[i].age);
    }
}

void searchTicket(struct Ticket *t) {
    int searchNo, i, found = 0;

    if (count == 0) {
        printf("\nNo tickets to search.\n");
        return;
    }

    printf("\nEnter Ticket Number to Search: ");
    scanf("%d", &searchNo);

    for (i = 0; i < count; i++) {
        if (t[i].ticketNo == searchNo) {
            printf("\nTicket Found!\n");
            printf("Name        : %s\n", t[i].name);
            printf("Source      : %s\n", t[i].source);
            printf("Destination : %s\n", t[i].destination);
            printf("Age         : %d\n", t[i].age);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nTicket not found!\n");
}

int main() {
    struct Ticket *tickets;
    int choice;

    printf("Enter maximum number of tickets: ");
    scanf("%d", &max);

    tickets = (struct Ticket *)malloc(max * sizeof(struct Ticket));

    if (tickets == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    do {
        printf("\n===== Railway Ticket Booking System =====");
        printf("\n1.Book Ticket ");
        printf("2.Display Tickets ");
        printf("3.Search Ticket ");
        printf("4.Exit ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket(tickets);
                break;
            case 2:
                displayTickets(tickets);
                break;
            case 3:
                searchTicket(tickets);
                break;
            case 4:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } while (choice != 4);

    free(tickets);
    return 0;
}
