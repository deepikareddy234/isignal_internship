/*finding whether a Linkedlist contains a loop or not?*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

int detectLoop() {
    struct Node *slow = head;
    struct Node *fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}

int main() {
    int n, x, pos, i;
    struct Node *temp, *loopNode = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        insertEnd(x);
    }

    printf("Enter position to create loop (0 for no loop): ");
    scanf("%d", &pos);

    if (pos > 0) {
        temp = head;
        for (i = 1; i < pos; i++)
            temp = temp->next;
        loopNode = temp;

        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = loopNode;
    }

    if (detectLoop())
        printf("Loop detected\n");
    else
        printf("No loop detected\n");

    return 0;
}

