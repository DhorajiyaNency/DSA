#include<stdio.h>
#include<stdlib.h>
int frontE=-1,rearE=-1,que[5],i,value,max=5,front_value,min=1;
void insert_Rear()         /// 1-->1
{
    if(rearE+1==max)
        printf("\n Queue is full");
    else
        if(frontE==-1&&rearE==-1)  
        {    
            que[++rearE]=value;
        }
        else
            que[++rearE]=value;
}

void insert_front()      ///1-->2   // some error
{
    if(rearE+1==max)
        printf("\n Queue is full");
    else if(frontE==-1&&rearE==-1||frontE>max||frontE==0&&rearE==0)
        printf("\n not possible to insert_first ");
    else if(frontE>=min&&frontE<=max)    //for(j=max;j>=min;j--)
        que[frontE--]=front_value;
    else
        que[frontE--]=front_value;
}

void delete_Rear()      ///2-->1     
{
        if(frontE==-1&&rearE==-1)
            printf("\n\n Not posible to delete Element ");
        else
        {    
            if(frontE==rearE)
                frontE=rearE=-1;
            else
                --rearE;
        }
}
void delete_Front()     ///2-->2
{
    if(frontE==-1&&rearE==-1)
        printf("\n\n Not posible to delete Element ");
    else
    {    
        if(frontE==rearE)
            frontE=rearE=-1;
        else
            ++frontE;
    }
}
void print()
{   
    if(frontE==-1&&rearE==-1)
        printf("\n Queue is empty");
    else
        for(i=frontE+1;i<=rearE;i++)
        {
            printf("\t --> %d ",que[i]);
        }
}
int main()
{
    int ch;
    do
    {
        printf("\n press --> 1 for INSERT_REAR \n press --> 2 for DELETE_REAR \n press --> 3 for DELETE_FRONT \n press --> 4 for INSERT_FRONT \n press --> 9 for Show \n press --> 0 for EXIT.");
        printf("\n Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter your ELEMENT for insert_rear : ");
                scanf("%d",&value);
                printf("\n Inserted rear element is : %d\n",value);   
                insert_Rear();
                break;
            case 2:
                printf("\n deleted_rear queue element is %d ",que[rearE]);  
                delete_Rear();
                break;
            case 3:
                printf("\n deleted_front queue element is %d ",que[frontE+1]);      
                delete_Front();
                break;
            case 4:
                printf("\n Enter your ELEMENT for insert_front : ");
                scanf("%d",&front_value);
                printf("\n Inserted front element is : %d\n",front_value);
                insert_front();
                break;
            case 9:
                print();
                break;
            case 0:
                printf("\n EXIT All");
                break;
            default:
                printf("\n WRONG CHOICE");
                break;
        }
    }while (ch!=0);  
}
