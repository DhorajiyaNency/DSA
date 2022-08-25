//Double_Ended_Queue_2...
#include<stdio.h>
#include<stdlib.h>
int frontE=-1,rearE=-1,que[5],i,value,max=5,front_value;
void insert_Rear()        
{
    if(rearE+1==max)
        printf("\n Queue is full");
    else
        if(frontE==-1&&rearE==-1)  
            que[++rearE]=value;
        else
            que[++rearE]=value;
}
void insert_front()   
{
    if(rearE-1==max)
        printf("\n Queue is full");
    else
        que[frontE--]=front_value;
}
void delete_Rear()           
{
        if(frontE==-1&&rearE==-1)
            printf("\n\n Not possible to delete Element ");
        else   
            if(frontE==rearE)
                frontE=rearE=-1;
            else
                --rearE;
}
void delete_Front()     
{
    if(frontE==-1&&rearE==-1)
        printf("\n\n Not possible to delete Element ");
    else 
        if(frontE==rearE)
            frontE=rearE=-1;
        else
            ++frontE;
}

void print()
{   
    if(frontE==-1&&rearE==-1)
        printf("\n Queue is empty");
    else
        for(i=frontE+1;i<=rearE;i++)
        {
            printf("\t %d ",que[i]);
        }
}
int main()
{
    int ch;
    do
    {
        printf("\n press --> 1 for Insert_Rear \n press --> 2 for Delete_Rear \n press --> 3 for Insert_Front \n press --> 4 for Delete_Front \n press --> 9 for Show \n press --> 0 for EXIT.");
        printf("\n\n Enter choice : ");
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
                printf("\n Enter your ELEMENT for insert_front : ");
                scanf("%d",&front_value);
                printf("\n Inserted front element is : %d\n",front_value);
                insert_front();
                break;
            case 4:
                printf("\n deleted_front queue element is %d ",que[frontE+1]);      //frontE-1       
                delete_Front();
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
