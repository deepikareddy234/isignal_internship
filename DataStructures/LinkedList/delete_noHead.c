/*deleting a node with no Head given*/
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

void deleteNode(struct Node *node) {
    struct Node *temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    free(temp);
}

int main() {
    struct Node *head = NULL;
    struct Node *nodeToDelete;
    int n, value, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insertEnd(&head, value);
    }

    display(head);

    printf("Enter position of node to delete (not last): ");
    scanf("%d", &pos);

    nodeToDelete = head;
    for (int i = 1; i < pos; i++)
        nodeToDelete = nodeToDelete->next;

    deleteNode(nodeToDelete);

    display(head);

    return 0;
}

