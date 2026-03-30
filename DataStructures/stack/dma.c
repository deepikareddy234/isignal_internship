/*Stack Implementation Using Dynamic Memory Access (DMA)*/
#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int size;

void push();
void pop();
void count();
void display();

int main() {
    int ch;

    printf("Enter stack size: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));

    if (stack == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Count\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: count(); break;
            case 4: display(); break;
            case 5: free(stack); return 0;
            default: printf("Invalid choice\n");
        }
    }
}

void push() {
    int x;
    if (top == size - 1)
        printf("Stack Overflow\n");
    else {
        printf("Enter element: ");
        scanf("%d", &x);
        stack[++top] = x;
        printf("Element inserted successfully\n");
    }
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped element: %d\n", stack[top--]);
}

void count() {
    printf("Total elements: %d\n", top + 1);
}

void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

