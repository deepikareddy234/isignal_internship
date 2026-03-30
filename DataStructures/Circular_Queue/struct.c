/*Circular queue using structures*/
#include<stdio.h>
#define SIZE 100

struct Queue{
    int data[SIZE];
    int front;
    int rear;
    int max;
};

struct Queue insert(struct Queue q,int x){
    if((q.rear+1)%q.max==q.front)
        printf("Circular Queue is Full\n");
    else{
        if(q.front==-1){
            q.front=0;
            q.rear=0;
        }
        else
            q.rear=(q.rear+1)%q.max;
        q.data[q.rear]=x;
        printf("Inserted successfully\n");
    }
    return q;
}

struct Queue delete(struct Queue q){
    if(q.front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Deleted element is %d\n",q.data[q.front]);
        if(q.front==q.rear){
            q.front=-1;
            q.rear=-1;
        }
        else
            q.front=(q.front+1)%q.max;
    }
    return q;
}

void display(struct Queue q){
    int i;
    if(q.front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Circular Queue elements are:\n");
        i=q.front;
        while(1){
            printf("%d ",q.data[i]);
            if(i==q.rear)
                break;
            i=(i+1)%q.max;
        }
        printf("\n");
    }
}

int main(){
    struct Queue q;
    int ch,x;

    q.front=-1;
    q.rear=-1;

    printf("Enter queue size (max %d): ",SIZE);
    scanf("%d",&q.max);

    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter element: ");
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
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}


