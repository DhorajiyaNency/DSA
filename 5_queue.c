#include<stdio.h>
#include<stdlib.h>
int frontE=-1,rearE=-1,que[5],i,value,max=5,front_value;
void insert_Rear()
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
void insert_front()
{
    if(rearE+1==max)
        printf("\n Queue is full");
    else
        if(frontE==-1&&rearE==-1)  
        {    
            que[--frontE]=value;
        }
        else
            que[--frontE]=value;
}
void delete_Rear()
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
void delete_Front()
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
            printf("\t -- %d ",que[i]);
        }
}
int main()
{
    int ch;
    printf("\n press --> 1 for INSERT \n press --> 3 for DELETE \n press --> 9 for Show \n press --> 0 for EXIT.");
    do
    {
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
                printf("\n deleted_front queue element is %d ",que[frontE-1]);             
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

// press --> 1 for INSERT
//  press --> 2 for DELETE
//  press --> 3 for Show
//  press --> 0 for EXIT.
//  Enter choice : 1

//  Enter your ELEMENT for insert : 44

//  Inserted element is : 44

//  Enter choice : 1

//  Enter your ELEMENT for insert : 55

//  Inserted element is : 55

//  Enter choice : 1

//  Enter your ELEMENT for insert : 66

//  Inserted element is : 66

//  Enter choice : 1

//  Enter your ELEMENT for insert : 77 

//  Inserted element is : 77

//  Enter choice : 1

//  Enter your ELEMENT for insert : 88

//  Inserted element is : 88

//  Enter choice : 3
//          44      55      66      77      88 
//  Enter choice : 2

//  deleted queue element is 44
//  Enter choice : 2

//  deleted queue element is 55
//  Enter choice : 2

//  deleted queue element is 66
//  Enter choice : 2

//  deleted queue element is 77
//  Enter choice : 2

//  deleted queue element is 88
//  Enter choice : 3

//  Enter choice : 3

//  Enter choice : 2

//  deleted queue element is 0
//  Enter choice : 2

//  deleted queue element is 44

//  Not posible to delete Element
//  Enter choice : 3

//  Queue is empty
//  Enter choice : 0

//  EXIT All
