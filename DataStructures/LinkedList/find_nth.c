/*find the nth node from the end of the linked list*/
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
    printf("Linked list: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void findNthFromEnd(struct Node *head, int n) {
    struct Node *fast = head;
    struct Node *slow = head;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            printf("Invalid position\n");
            return;
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    printf("Nth node from end is: %d\n", slow->data);
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

    printf("Enter N (from end): ");
    scanf("%d", &pos);

    findNthFromEnd(head, pos);

    return 0;
}

