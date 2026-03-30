/*Stack Implementation Using Arrays*/
#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push();
void pop();
void count();
void display();

int main() {
    int ch;

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Count\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: count(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

void push() {
    int x;
    if (top == MAX - 1)
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

