/*Single Linked List*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *head = NULL;

NODE* createNode(int item) {
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    temp->data = item;
    temp->next = NULL;
    return temp;
}

void insertBegin(int item) {
    NODE *temp = createNode(item);
    if (head == NULL) {
        head = temp;
        printf("Node inserted at beginning\n");
    } else {
        temp->next = head;
        head = temp;
        printf("Node inserted at beginning\n");
    }
}

void insertEnd(int item) {
    NODE *temp = createNode(item);
    NODE *curr = head;

    if (head == NULL) {
        head = temp;
        printf("Node inserted at end\n");
       return;
    }

    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    printf("Node inserted at end\n");
}

void insertAtPos(int item, int pos) {
    NODE *temp = createNode(item);
    NODE *curr = head;
    int i;

    if (pos == 1) {
        insertBegin(item);
        return;
    }

    for (i = 1; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL) {
        printf("Invalid position\n");
        return;
    }

    temp->next = curr->next;
    curr->next = temp;
    printf("Node inserted at position %d\n", pos);
}

void deleteBegin() {
    NODE *temp;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from beginning\n");
}

void deleteEnd() {
    NODE *curr = head;
    NODE *prev = NULL;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Node deleted from end\n");
        return;
    }

    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    free(curr);
    printf("Node deleted from end\n");
}

void deleteAtPos(int pos) {
    NODE *curr = head;
    NODE *temp;
    int i;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos == 1) {
        deleteBegin();
        return;
    }

    for (i = 1; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL || curr->next == NULL) {
        printf("Invalid position\n");
        return;
    }

    temp = curr->next;
    curr->next = temp->next;
    free(temp);
    printf("Node deleted from position %d\n", pos);
}

void display() {
    NODE *curr = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, item, pos;

    while (1) {
        printf("\n1.Insert at Beginning");
        printf("\n2.Insert at End");
        printf("\n3.Insert at Position");
        printf("\n4.Delete from Beginning");
        printf("\n5.Delete from End");
        printf("\n6.Delete from Position");
        printf("\n7.Display");
        printf("\n8.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            insertBegin(item);
            break;

        case 2:
            printf("Enter element: ");
            scanf("%d", &item);
            insertEnd(item);
            break;

        case 3:
            printf("Enter element and position: ");
            scanf("%d%d", &item, &pos);
            insertAtPos(item, pos);
            break;

        case 4:
            deleteBegin();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            printf("Enter position: ");
            scanf("%d", &pos);
            deleteAtPos(pos);
            break;

        case 7:
            display();
            break;

        case 8:
            printf("Program terminated\n");
            exit(0);
        }
    }
}

