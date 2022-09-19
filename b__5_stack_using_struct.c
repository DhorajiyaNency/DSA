#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack[10], i, indexN, newElement, search_element, j;
struct stack_s
{
    int stack[10];
    int top;
};
void intialize(struct stack_s *s)
{
    s->top=-1;
}
void Push(struct stack_s *s, int val)
{
    if(s->top+1>n-1)  // top>n-1
    {
        printf("\n Stack Overflow");
    }
    else
    {
        s->top++;
        s->stack[s->top]=val;
    }
}
int Pop(struct stack_s *s)
{
    int x;
    if(s->top<=-1)
        printf("\n Stack Underflow");
    else
        x=s->stack[s->top--];
        printf("\n Poped element is %d  ",x);
}
void peep(struct stack_s *s) // search element's position 
{
    for(j=0; j<=n; j++)
    {
        if(search_element==s->stack[j])
        {
            printf("\n your element position : %d ",j);
        }
    }
}
void print(struct stack_s *s)
{
    // for(int i=0;i<=s->top;i++) 
    for(int i = s->top; i >= 0; i--)
    {
        printf("\n%d",s->stack[i]);
    }
}
int main()
{
    int ch,val;
    struct stack_s ne; 
    intialize(&ne);
    do
    {
        printf("\n\n press --> 1 for PUSH, \n press --> 2 for POP, \n press --> 3 for peep, \n press --> 4 for print, \n press --> 0 for EXIT.");
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:                // top>n     // overflow
                printf("\n Enter value : ");
                scanf("%d",&val);
                Push(&ne, val);
                break;
            case 2:               // top<=-1    // underflow
                Pop(&ne);       
                break;
            case 3:
                printf("\n Insert Your Element for search : ");
                scanf("%d",&search_element);
                {
                    if(search_element==stack[j])
                    {
                        printf("\n your element position : %d ",j);
                    }
                    else
                    {
                        printf("\n element not found ");
                    }
                }
                peep(&ne);
                break;
            case 4:
                print(&ne);
                break; 
            case 0:
                printf("\n EXIT ALL");
                exit(0);
                break;
            default:
                printf("\n WRONG CHOICE");
                break;
        }
    }while (ch!=0);
}
