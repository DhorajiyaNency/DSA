//boubble_sorting_Array
#include<stdio.h>
#include<stdlib.h>
int arr[]={11,33,55,32,10,90},i,n=6,x;
void creat_Array()
{ 
    for(i=0; i<n; i++)
    {
         printf("\n arr[%d]-->%d",i,arr[i]);
    }  
    printf("\n"); 
}
// bubble_sorting with user input
// int arr[10],i,n=6,x;
// void creat_Array()
// {
//     for(i=0; i<n; i++)
//     {
//         printf("\n Enter_array [%d] : ",i);
//         scanf("%d",&arr[i]);
//     } 
// }
void buBBle_sortinG()
{
    for(int k=0; k<n-1; k++) //n-1 
    {
        for(int j=0; j<n-1-k; j++)     //5 comparison n-1,   n-2,   n-3,...
        {                                        // n-1-0, n-1-1, n-1-2,...
            if(arr[j]>arr[j+1]){                 // n-1-k,.. 
            x=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=x;
            }
        }
    }
}
void display()
{
    for(int k=0; k<n; k++)
    {
        printf("\n\n k--sorted arr[%d]-->%d",k,arr[k]);
    }  
}
int main()
{
    creat_Array();
    buBBle_sortinG();
    display();
}


// //boubble_sorting_Array
// #include<stdio.h>
// #include<stdlib.h>
// int arr[]={11,33,55,32,10,90},i,n=6,x;
// void creat_Array()
// { 
//     printf("\n\n ___Create_Array___ ");
//     for(i=0; i<n; i++)
//     {
//         printf("  arr[%d]-->%d   ",i,arr[i]);
//     }  
//     // printf("\n"); 
// }
// // bubble_sorting with user input
// // int arr[10],i,n=6,x;
// // void creat_Array()
// // {
// //     for(i=0; i<n; i++)
// //     {
// //         printf("\n Enter_array [%d] : ",i);
// //         scanf("%d",&arr[i]);
// //     } 
// // }
// void buBBle_sortinG()
// {
//     for(int k=0; k<n-1; k++) //n-1 
//     {
//         for(int j=0; j<n-1-k; j++)     //5 comparison n-1,   n-2,   n-3,...
//         {                                        // n-1-0, n-1-1, n-1-2,...
//             if(arr[j]>arr[j+1]){                 // n-1-k,.. 
//             x=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=x;
//             }
//         }
//     }
// }
// void display()
// {
//     printf("\n\n ___Sorted_Array___ ");
//     for(int k=0; k<n; k++)
//     {
//         printf("  arr[%d]-->%d   ",k,arr[k]);
//     }  
// }
// int main()
// {
//     creat_Array();
//     buBBle_sortinG();
//     display();
// }
