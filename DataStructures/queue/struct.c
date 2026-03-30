/*Queue Implementation Using Structures*/
#include<stdio.h>
#define MAX 5

struct Queue{
    int data[MAX];
    int front;
    int rear;
};

struct Queue insert(struct Queue q,int x){
    if(q.rear==MAX-1)
        printf("Queue is Full\n");
    else{
        if(q.front==-1)
            q.front=0;
        q.rear++;
        q.data[q.rear]=x;
        printf("Inserted successfully\n");
    }
    return q;
}

struct Queue delete(struct Queue q){
    if(q.front==-1||q.front>q.rear)
        printf("Queue is Empty\n");
    else{
        printf("Deleted element is %d\n",q.data[q.front]);
        q.front++;
    }
    return q;
}

void display(struct Queue q){
    int i;
    if(q.front==-1||q.front>q.rear)
        printf("Queue is Empty\n");
    else{
        printf("Queue elements are:\n");
        for(i=q.front;i<=q.rear;i++)
            printf("%d ",q.data[i]);
        printf("\n");
    }
}

int main(){
    struct Queue q;
    int ch,x;

    q.front=-1;
    q.rear=-1;

    while(1){
        printf("\n----QUEUE USING STRUCTURE----\n");
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
                q=insert(q,x);
                break;
            case 2:
                q=delete(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

