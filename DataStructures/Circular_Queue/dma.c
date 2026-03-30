/*Circular Queue Using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>

int *q;
int front=-1,rear=-1;
int MAX;

void insert(int x){
    if((rear+1)%MAX==front)
        printf("Circular Queue is Full\n");
    else{
        if(front==-1){
            front=0;
            rear=0;
        }
        else
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

    printf("Enter queue size: ");
    scanf("%d",&MAX);

    q=(int*)malloc(MAX*sizeof(int));

    if(q==NULL){
        printf("Memory allocation failed\n");
        return 0;
    }

    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter element: ");
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
                free(q);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

