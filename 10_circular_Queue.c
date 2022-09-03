// Circular_Queue_2....__S_P_C
#include<stdio.h>
#define size 5
int Q[size];
int front=0,rear=0;

void enqueue(int element)
{
    if((rear+1)%size==front)
        printf("Queue is full");
    else
        {
            rear=(rear+1)%size;
            Q[rear]=element;
        }
        printf("\n front: %d \t rear: %d",front,rear);
}
void dequeue()
{
    int element=-1;
    if(front==rear)
    {
        front=rear=0;
        printf("\n\n Queue is Empty");    
    }
    else{
        front=(front+1)%size;
        element=Q[front];
    }
    printf("\n\n Deleted Element is : %d ",element);
    printf("\n\n front:%d \t rear : %d",front,rear);
}
void display()
{
    printf("\n");
    int i=front+1;
    do
    {
        printf("\t -- %d",Q[i]);
        i=(i+1)%size;
    } while (i!=(rear+1)%size);
    printf("\n\n front:%d \t rear :%d",front,rear);
    
}
int main()
{
    //dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();

    // enqueue();
    // // enqueue();
    // // display();
    // // enqueue();
    // // display();
    return 0;
}
