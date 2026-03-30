/*deleting the nth node from the end of the linked list*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Linked list: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void deleteNthFromEnd(struct Node **head, int n) {
    struct Node *fast = *head;
    struct Node *slow = *head;
    struct Node *prev = NULL;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            printf("Invalid position\n");
            return;
        }
        fast = fast->next;
    }

    if (fast == NULL) {
        struct Node *temp = *head;
        printf("Deleting node with value %d\n", temp->data);
        *head = (*head)->next;
        free(temp);
        return;
    }

    while (fast != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    printf("Deleting node with value %d\n", slow->data);
    prev->next = slow->next;
    free(slow);
}

int main() {
    struct Node *head = NULL;
    int n, value, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insertEnd(&head, value);
    }

    display(head);

    printf("Enter N from end: ");
    scanf("%d", &pos);

    deleteNthFromEnd(&head, pos);

    display(head);

    return 0;
}

