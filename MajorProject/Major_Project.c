#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

// -------- ORDER STRUCT --------
struct Order {
    int id;
    char item[50];
    char status[30];
    struct Order* next;
};

struct Order* head = NULL;

// -------- STACK --------
struct Order* stack[MAX];
int top = -1;

// -------- QUEUE --------
struct Order* queue[MAX];
int front = -1, rear = -1;

// -------- CIRCULAR QUEUE --------
int slots[MAX];
int cfront = -1, crear = -1;

// -------- UTILITY --------
void line() {
    printf("\n----------------------------------------\n");
}

// -------- FIND ORDER --------
struct Order* findOrder(int id) {
    struct Order* temp = head;
    while (temp) {
        if (temp->id == id)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// -------- PLACE ORDER --------
void placeOrder(int id, char item[]) {
    struct Order* newOrder = (struct Order*)malloc(sizeof(struct Order));
    newOrder->id = id;
    strcpy(newOrder->item, item);
    strcpy(newOrder->status, "Pending");
    newOrder->next = head;
    head = newOrder;

    printf("\nOrder placed successfully.\n");
}

// -------- DISPLAY --------
void displayOrders() {
    struct Order* temp = head;

    line();
    printf("Current Orders\n");
    line();

    if (!temp) {
        printf("No orders available.\n");
        return;
    }

    while (temp) {
        printf("ID: %d | Item: %s | Status: %s\n",
               temp->id, temp->item, temp->status);
        temp = temp->next;
    }
}

// -------- STACK --------
void push(struct Order* o) {
    if (top < MAX - 1)
        stack[++top] = o;
}

struct Order* pop() {
    if (top == -1)
        return NULL;
    return stack[top--];
}

// -------- CANCEL ORDER --------
void cancelOrder() {
    int id;
    printf("Enter Order ID to cancel: ");
    scanf("%d", &id);

    struct Order *temp = head, *prev = NULL;

    while (temp && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        printf("Order not found.\n");
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    push(temp);

    printf("Order cancelled. You can undo this action.\n");
}

// -------- UNDO --------
void undoCancel() {
    struct Order* o = pop();

    if (!o) {
        printf("Nothing to undo.\n");
        return;
    }

    o->next = head;
    head = o;

    printf("Undo successful. Order restored.\n");
}

// -------- QUEUE --------
void enqueueById(int id) {
    struct Order* o = findOrder(id);

    if (!o) {
        printf("Order not found.\n");
        return;
    }

    if (rear == MAX - 1) {
        printf("Delivery queue is full.\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = o;
    strcpy(o->status, "Out for Delivery");

    printf("Order %d added to delivery queue.\n", id);
}

// -------- PROCESS --------
void processOrders() {
    if (front == -1) {
        printf("No orders to process.\n");
        return;
    }

    line();
    printf("Processing Deliveries\n");
    line();

    while (front <= rear) {
        strcpy(queue[front]->status, "Delivered");
        printf("Delivered: %s (ID: %d)\n",
               queue[front]->item,
               queue[front]->id);
        front++;
    }

    front = rear = -1;
}

// -------- CIRCULAR QUEUE --------
void assignSlot(int id) {
    if ((crear + 1) % MAX == cfront) {
        printf("No delivery slots available.\n");
        return;
    }

    if (cfront == -1)
        cfront = 0;

    crear = (crear + 1) % MAX;
    slots[crear] = id;

    printf("Slot assigned to order %d.\n", id);
}

// -------- SEARCH --------
void searchOrder(int id) {
    struct Order* o = findOrder(id);

    if (!o) {
        printf("Order not found.\n");
        return;
    }

    printf("Order found: %s | Status: %s\n", o->item, o->status);
}

// -------- MAIN --------
int main() {
    int ch, id;
    char item[50];

    while (1) {
        line();
        printf("SMART DELIVERY MANAGEMENT SYSTEM\n");
        line();

        printf("1. Place Order\n");
        printf("2. View Orders\n");
        printf("3. Cancel Order\n");
        printf("4. Undo Cancel\n");
        printf("5. Add Order to Delivery Queue\n");
        printf("6. Process Deliveries\n");
        printf("7. Assign Delivery Slot\n");
        printf("8. Search Order\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter ID and Item: ");
                scanf("%d %s", &id, item);
                placeOrder(id, item);
                break;

            case 2:
                displayOrders();
                break;

            case 3:
                cancelOrder();
                break;

            case 4:
                undoCancel();
                break;

            case 5:
                printf("Enter Order ID to deliver: ");
                scanf("%d", &id);
                enqueueById(id);
                break;

            case 6:
                processOrders();
                break;

            case 7:
                printf("Enter Order ID: ");
                scanf("%d", &id);
                assignSlot(id);
                break;

            case 8:
                printf("Enter Order ID: ");
                scanf("%d", &id);
                searchOrder(id);
                break;

            case 9:
                printf("Exiting...\n");
                exit(0);
        }
    }
}
