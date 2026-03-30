/*Queue Implementation using arrays*/
#include<stdio.h>

int front=-1,rear=-1;

void insert(int q[],int MAX,int x){
    if(rear==MAX-1)
        printf("Queue is Full\n");
    else{
        if(front==-1)
            front=0;
        rear++;
        q[rear]=x;
        printf("Inserted successfully\n");
    }
}

void delete(int q[]){
    if(front==-1||front>rear)
        printf("Queue is Empty\n");
    else{
        printf("Deleted element is %d\n",q[front]);
        front++;
    }
}

void display(int q[]){
    int i;
    if(front==-1||front>rear)
        printf("Queue is Empty\n");
    else{
        printf("Queue elements are:\n");
        for(i=front;i<=rear;i++)
            printf("%d ",q[i]);
        printf("\n");
    }
}

int main(){
    int MAX;
    int ch,x;

    printf("Enter queue size: ");
    scanf("%d",&MAX);

    int q[MAX];

    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter element: ");
                scanf("%d",&x);
                insert(q,MAX,x);
                break;
            case 2:
                delete(q);
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

