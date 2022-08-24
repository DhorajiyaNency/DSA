#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1, stack[5], i, indexN, newElement;
void SwapElement()
{
    //insert indexN and give new element for change
    if(indexN>top)
        printf("\n Limit over"); 
    else
    {
        for(int i=n; i>indexN; i--)  //i=n-1
        {
           //stack[i+1]=stack[top];
            stack[i]=stack[top];
        }
        stack[indexN]=newElement;    
    }
}
void Push(int val)
{
    if(top>n-1)
        printf("\n Stack Overflow");
    else
        stack[++top]=val;
}
int Pop()
{
    int x;
    if(top<=-1)
        printf("\n Stack Underflow");
    else
        x=stack[top--];
        printf("\n Poped element is %d  ",x);
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
    printf("\n press --> 1 for PUSH, \n press --> 2 for POP, \n press --> 3 for show, \n press --> 4 for SwapElement, \n press --> 0 for EXIT.");
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
                printf("\n Insert index number for SwapElement : ");
                scanf("%d",&indexN);

                printf("\n Insert Your Element : ");
                scanf("%d",&newElement);

                SwapElement();
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

//  Enter choice : 4

//  Insert index number for peep : 0

//  Insert your element : 100


//  Enter choice : 3

// 100
// 20
// 60
// 60
// 60
// 60

// #include<stdio.h>
// #include<stdlib.h>
// #define n 5
// int top=-1, stack[5], i, indexN, newElement;
// void swapElement()
// {
//     //insert indexN and give new element for change

//     if(indexN>top)
//         printf("\n Limit over");
//     else
//     {
//         for(int i=n-1; i>indexN; i--) 
//         {
//             stack[i+1]=stack[top];
//         }
//         stack[indexN]=newElement;
//     }

// }
// void Push(int val)
// {
//     if(top>n-1)
//         printf("\n Overflow");
//     else
//         stack[++top]=val;
// }
// int Pop()
// {
//     int x;
//     if(top<=-1)
//         printf("\n Underflow");
//     else
//         x=stack[top--];
//         printf("\n Poped element is %d  ",x);
// }
// void print()
// {
//     for(int i=0;i<=top;i++)
//     {
//         printf("\n%d",stack[i]);
//     }
// }
// int main()
// {
//     int ch,val;
//     printf("\n press --> 1 for PUSH, \n press --> 2 for POP, \n press --> 3 for Show, \n press --> 4 for SwapElement, \n press --> 0 for EXIT.");
//     do
//     {
//         printf("\n\n Enter Choice : ");
//         scanf("%d",&ch);

//         switch(ch)
//         {
//             case 1:                // top>n     // overflow
//                 printf("\n Enter Value : ");
//                 scanf("%d",&val);
//                 Push(val);
//                 break;
//             case 2:               // top<=-1    // underflow
//                 Pop();       
//                 break;
//             case 3:
//                 print();
//                 break;
//             case 4:
//                 printf("\n Insert Index Number for SwapElement : ");
//                 scanf("%d",&indexN);

//                 printf("\n Insert Your Element : ");
//                 scanf("%d",&newElement);

//                 swapElement();
//                 break;
//             case 0:
//                 printf("\n EXIT ALL");
//                 exit(0);
//                 break;
//             default:
//                 printf("\n WRONG CHOICE");
//                 break;
//         }
//     }while (n!=0);
// }

// //  press --> 1 for PUSH, 
// //  press --> 2 for POP,  
// //  press --> 3 for Show, 
// //  press --> 4 for SwapElement, 
// //  press --> 0 for EXIT. 

// //  Enter choice : 1

// //  Enter value : 10


// //  Enter choice : 1

// //  Enter value : 20


// //  Enter choice : 1

// //  Enter value : 30


// //  Enter choice : 1

// //  Enter value : 40


// //  Enter choice : 1

// //  Enter value : 50


// //  Enter choice : 1

// //  Enter value : 60


// //  Enter choice : 2

// //  poped element is 60

// //  Enter choice : 3

// // 10
// // 20
// // 30
// // 40
// // 50

// //  Enter choice : 4

// //  Insert index number for peep : 0

// //  Insert your element : 100


// //  Enter choice : 3

// // 100
// // 20
// // 50
// // 50
// // 50

// //  Enter choice : 0

// //  EXIT ALL
