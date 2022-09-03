// circular_queue_1
#include<stdio.h>
#include<stdlib.h>
int rear=0,front=0,que[5],n=5,value;
void Insert_rear_c_q(int value)
{
    //printf("Insert_rear_c_q");
    if((rear+1) == n)
        printf("\n Queue is full");
    else
    {
        rear=(rear+1)%n;
        que[rear]=value;
    }
}
void delete_front_c_q()
{
    // int value=front=-1;
    if(front==rear)
    {
        front=rear=0;
        printf("\n Queue is Empty");
    }
    else
    {
        front=(front+1)%n;
        value=que[front];
    } 
}
void Print_c_q()
{
    int i;
    for(i=front+1;i!=(rear+1),i<=n;i+=(front+1)%n)
    {
        printf("\n %d",que[i]);
    }
}
int main()
{
    int ch,value;
    do
    {
        printf("\n press --> 1 for Insert,\n press --> 2 for Print, \n press --> 3 for Delete,\n press --> 0 for Exit");
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter you Insert_rear Element : ");
            scanf("%d",&value);
            Insert_rear_c_q(value);
            break;
        case 3:
            printf("\n Deleted value is : %d ",que[front+1]);
            delete_front_c_q();
            break;    
        case 2:
            Print_c_q();
            break;
        case 0:
            printf("\n EXIT ALL");
            break;
        default:
            printf("\n Wrong Choice");
            break;
        }
    } while (ch!=0);
    
    // Insert_rear_c_q(11);
    // Insert_rear_c_q(12);
    // Insert_rear_c_q(13);
    // Insert_rear_c_q(14);
    // Print_c_q();
}
