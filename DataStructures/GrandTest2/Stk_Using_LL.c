/*Q1)Stack Implementation Using Linked List for push and pop operations*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *top = NULL;

void push(int item) {
    NODE *temp = (NODE*)malloc(sizeof(NODE));

    if (temp == NULL) {
        printf("Stack overflow\n");
        return;
    }

    temp->data = item;
    temp->next = top;
    top = temp;

    printf("Element pushed into stack\n");
}

void pop() {
    NODE *temp;

    if (top == NULL) {
        printf("Stack underflow\n");
        return;
    }
    temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display() {
    NODE *temp = top;

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("\n1.Push ");
        printf("2.Pop ");
        printf("3.Display ");
        printf("4.Exit ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            pop();
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
