/*Circular Queue Implementation Using Linked List*/
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *front=NULL,*rear=NULL;

void insert(int x){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;

    if(front==NULL){
        front=newnode;
        rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    printf("Element %d inserted successfully.\n",x);
}

void delete(){
    struct Node *temp;
    if(front==NULL)
        printf("Queue is Empty. No element to delete.\n");
    else if(front==rear){
        printf("Deleted element is %d.\n",front->data);
        free(front);
        front=NULL;
        rear=NULL;
    }
    else{
        temp=front;
        printf("Deleted element is %d.\n",temp->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void display(){
    struct Node *temp;
    if(front==NULL)
        printf("Queue is Empty. Nothing to display.\n");
    else{
        printf("Queue elements are: ");
        temp=front;
        do{
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp!=front);
        printf("\n");
    }
}

int main(){
    int ch,x;
    while(1){
        printf("\n----- CIRCULAR QUEUE MENU -----\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter element to insert: ");
                scanf("%d",&x);
                insert(x);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

