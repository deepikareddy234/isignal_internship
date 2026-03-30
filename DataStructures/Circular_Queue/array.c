/*Circular queue using arrays*/
#include<stdio.h>
#define MAX 5

int q[MAX];
int front=-1,rear=-1;

void insert(int x){
    if((rear+1)%MAX==front)
        printf("Circular Queue is Full\n");
    else{
        if(front==-1)
            front=0;
        rear=(rear+1)%MAX;
        q[rear]=x;
        printf("Inserted successfully\n");
    }
}

void delete(){
    if(front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Deleted element is %d\n",q[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else
            front=(front+1)%MAX;
    }
}

void display(){
    int i;
    if(front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Circular Queue elements are:\n");
        i=front;
        while(1){
            printf("%d ",q[i]);
            if(i==rear)
                break;
            i=(i+1)%MAX;
        }
        printf("\n");
    }
}

int main(){
    int ch,x;
    while(1){
        printf("\n----CIRCULAR QUEUE OPERATIONS----\n");
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
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

