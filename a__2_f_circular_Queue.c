
#include<stdio.h>
#include<stdlib.h>
int rear=0,front=0,que[5],max=5,value;
void Insert_rear_c_q(int value)
{
    //printf("Insert_rear_c_q");
    if((rear+1) == max)
        printf("\n Queue is full");
    else
    {
        rear=(rear+1)%max;
        que[rear]=value;
        printf("\n front: %d \t rear: %d \n",front,rear);
    }
}
void delete_front_c_q()
{
    int value=-1;
    if(front==rear)
    {
        front=rear=0;
        printf("\n Queue is Empty");
    }
    else
    {
        front=(front+1)%max;
        value=que[front];
    } 
    printf("\n\n Deleted Element is : %d ",value);
    printf("\n\n front:%d \t rear : %d",front,rear);
}
void Print_c_q()
{
    printf("\n");
    int i=front+1;
    do
    {
        printf("\t -- %d",que[i]);
        i=(i+1)%max;
    } while (i!=(rear+1)%max);
    printf("\n\n front:%d \t rear :%d",front,rear);
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
            // printf("\n Deleted value is : %d ",que[front+1]);
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
}
