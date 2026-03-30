/*Stack Implemnetation Using Structures*/
#include <stdio.h>
#define MAX 5

struct Stack {
    int data[MAX];
    int top;
};

struct Stack push(struct Stack s);
struct Stack pop(struct Stack s);
void display(struct Stack s);
void count(struct Stack s);

int main() {
    struct Stack s;
    int choice;

    s.top = -1;

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Count\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: s = push(s); break;
            case 2: s = pop(s); break;
            case 3: count(s); break;
            case 4: display(s); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

struct Stack push(struct Stack s) {
    int x;
    if (s.top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &x);
        s.top++;
        s.data[s.top] = x;
        printf("Element inserted successfully\n");
    }
    return s;
}

struct Stack pop(struct Stack s) {
    if (s.top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", s.data[s.top]);
        s.top--;
    }
    return s;
}

void count(struct Stack s) {
    printf("Total elements: %d\n", s.top + 1);
}

void display(struct Stack s) {
    if (s.top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = s.top; i >= 0; i--) {
            printf("%d\n", s.data[i]);
        }
    }
}

