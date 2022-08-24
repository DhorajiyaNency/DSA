#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1, stack[5], i, indexN, searchElement;
void peep()
{
    // Find the element //linear search
        for(int j=0; j<=top; j++)
        {
            if(searchElement==stack[j])
            {
                 printf("\n\n Your Element size is %d ",j+1); 
                break;
            }
            else
            {
            //  for(int j=0; j<=top; j++)            //if(searchElement!=stack[i]
            // {
                // if(searchElement!=stack[j])
                printf("\n\n %d Element is not available stack.!!",searchElement); 
                break;
            // }
            }
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
        printf("\n poped element is %d ",x);
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
                printf("\n Enter your element for search : ");
                scanf("%d",&searchElement);
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
