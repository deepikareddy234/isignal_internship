/*finding the merge point of two singly linked list with different lengths*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node **head, int x) {
    struct Node* newNode = createNode(x);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

int getLength(struct Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

struct Node* findMergePoint(struct Node* head1, struct Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);
    int diff = abs(len1 - len2);

    if (len1 > len2)
        while (diff--) head1 = head1->next;
    else
        while (diff--) head2 = head2->next;

    while (head1 && head2) {
        if (head1 == head2)
            return head1;
        head1 = head1->next;
        head2 = head2->next;
    }
    return NULL;
}

int main() {
    struct Node *head1 = NULL, *head2 = NULL;
    int n1, n2, x, pos;

    printf("Enter number of nodes in List 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements for List 1:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &x);
        insertEnd(&head1, x);
    }

    printf("\nEnter number of nodes in List 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements for List 2:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &x);
        insertEnd(&head2, x);
    }

    printf("\nEnter merge position in List 1 (1-based index): ");
    scanf("%d", &pos);

    struct Node* temp1 = head1;
    for (int i = 1; i < pos; i++)
        temp1 = temp1->next;

    struct Node* temp2 = head2;
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp1;

    struct Node* merge = findMergePoint(head1, head2);

    if (merge)
        printf("\nMerge Point Found. Data = %d\n", merge->data);
    else
        printf("\nNo Merge Point Found\n");

    return 0;
}

