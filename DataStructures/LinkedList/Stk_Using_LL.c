/*Stack Implementation Using Linked List*/
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

void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
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
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
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
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Program terminated\n");
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}

