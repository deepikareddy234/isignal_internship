/*Circular queue using pointers*/
#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int *data;
    int front;
    int rear;
    int size;
};

void insert(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front)
        printf("Circular Queue is Full\n");
    else{
        if(q->front==-1){
            q->front=0;
            q->rear=0;
        }
        else
            q->rear=(q->rear+1)%q->size;
        q->data[q->rear]=x;
        printf("Inserted successfully\n");
    }
}

void delete(struct Queue *q){
    if(q->front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Deleted element is %d\n",q->data[q->front]);
        if(q->front==q->rear){
            q->front=-1;
            q->rear=-1;
        }
        else
            q->front=(q->front+1)%q->size;
    }
}

void display(struct Queue *q){
    int i;
    if(q->front==-1)
        printf("Circular Queue is Empty\n");
    else{
        printf("Circular Queue elements are:\n");
        i=q->front;
        while(1){
            printf("%d ",q->data[i]);
            if(i==q->rear)
                break;
            i=(i+1)%q->size;
        }
        printf("\n");
    }
}

int main(){
    struct Queue q;
    int ch,x;

    printf("Enter queue size: ");
    scanf("%d",&q.size);

    q.data=(int*)malloc(q.size*sizeof(int));
    q.front=-1;
    q.rear=-1;

    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter element: ");
                scanf("%d",&x);
                insert(&q,x);
                break;
            case 2:
                delete(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                free(q.data);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

