#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1, stack[5], i, indexN, newElement;
void peep()                //insert indexN and give new element for change
{
    if(indexN>top)
        printf("\n limit over");
    else
    {
        for(int i=n-1; i>indexN; i--) 
        {
            stack[i+1]=stack[top];
        }
        stack[indexN]=newElement;    
    }
}
void Push(int val)
{
    if(top>n-1)
        printf("\n overflow");
    else
        stack[++top]=val;
}
int Pop()
{
    int x;
    if(top<=-1)
        printf("\n underflow");
    else
        x=stack[top--];
        printf("\n poped element is %d  ",x);
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("\n%d",stack[i]);
    }
}
int main()
{
    int ch,val;
    printf("\n press --> 1 for PUSH, \n press --> 2 for POP, \n press --> 3 for show, \n press --> 4 for peep, \n press --> 0 for EXIT.");
    do
    {
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:                // top>n     // overflow
                printf("\n Enter value : ");
                scanf("%d",&val);
                Push(val);
                break;
            case 2:               // top<=-1    // underflow
                Pop();       
                break;
            case 3:
                print();
                break;
            case 4:
                printf("\n Insert index number for peep : ");
                scanf("%d",&indexN);
                printf("\n Insert your element : ");
                scanf("%d",&newElement);
                peep();
                break;
            case 0:
                printf("\n EXIT ALL");
                exit(0);
                break;
            default:
                printf("\n wrong choice");
                break;
        }
    }while (ch!=0);
}
