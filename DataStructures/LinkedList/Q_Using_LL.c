/*Queue Implementation Using Linked List*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *front = NULL;
NODE *rear = NULL;

void enqueue(int item) {
    NODE *temp = (NODE*)malloc(sizeof(NODE));

    if (temp == NULL) {
        printf("Queue overflow\n");
        return;
    }

    temp->data = item;
    temp->next = NULL;

    if (front == NULL) {
        front = rear = temp;
        printf("Element inserted into queue\n");
        return;
    }

    rear->next = temp;
    rear = temp;
    printf("Element inserted into queue\n");
}

void dequeue() {
    NODE *temp;

    if (front == NULL) {
        printf("Queue underflow\n");
        return;
    }

    temp = front;
    printf("Deleted element: %d\n", temp->data);
    front = front->next;
    free(temp);

    if (front == NULL)
        rear = NULL;
}

void display() {
    NODE *temp = front;

    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Program terminated\n");
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}

