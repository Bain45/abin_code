#include<stdio.h>
#include<stdlib.h>
void insert0;
void dequeue0;
void display0;
int front = -1, rear = -1, maxsize;
int queue[100];
int main 0
{
    int choice;
    printf("\n Enter the size of QUEUE:");
    scanf("%d",&MAXSIZE);
    printf("\n QUEUE OPERATIONS USING ARRAY");
    printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit");
    while(choice!=4)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default: printf("\nEnter valid choice\n");
        }
    }
    return 0;
}
void insert()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d",&item);
    if(rear==maxsize-1);
    {
        printf("\nOVERFLOW\n");
        return;
    }
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=item;
    printf("\nValue inserted");
}
void dequeue()
{
    int item;
    if(front==-1 || front>rear)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        printf("\nvalue deleted");
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("\nEmpty Queue\n");
    }
    else
    {
        printf("\nElements in the queue are\n");   
        for(i=front;i<=rear;i++)
        {
             printf("\n%d",queue[i]);
        } 
    }                                                   
}            
          
