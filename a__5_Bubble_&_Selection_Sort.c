#include<stdio.h>
#include<stdlib.h>
#define n 10
void creat_Array(int arr[])
{ 
    for(int i=0; i<n; i++)
    {
         printf("\t %d",arr[i]);
    }  
}
void display(int arr[])
{
    printf("\n");
    for(int k=0; k<n; k++)
    {
        printf("\t %d",arr[k]);
    }  
}
void buBBle_sortinG(int arr[])
{
    int x;
    printf("\n ...buBBle_sorting...");
    for(int k=0; k<n; k++) //n-1 
    {
        for(int j=0; j<n-1; j++)     //5 comparison n-1,   n-2,   n-3,
        {                                        // n-1-0, n-1-1, n-1-2,...
            if(arr[j]>arr[j+1])                  // n-1-k,.. 
            {                
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
        display(arr);
    }
}
void Selection_sort(int arr[])
{
    int i,j,key;
    printf("\n ...Selection_sorting...");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                key=arr[i];
                arr[i]=arr[j];
                arr[j]=key;
            }
        }
        display(arr);
    }
}
int main()
{
    int arr[20],min=20,max=101,val;
    printf("\n");
    for(int i=0;i<n;i++)
        arr[i]=(rand()%(max-min+1))+min;
    creat_Array(arr);
    // buBBle_sortinG(arr);
    // display(arr);
    Selection_sort(arr);
    display(arr);
}

//          61      37      40      34      83      82      100     22      86      48 
//  ...buBBle_sorting...
//          37      40      34      61      82      83      22      86      48      100
//          37      34      40      61      82      22      83      48      86      100
//          34      37      40      61      22      82      48      83      86      100
//          34      37      40      22      61      48      82      83      86      100
//          34      37      22      40      48      61      82      83      86      100
//          34      22      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100



//          61      37      40      34      83      82      100     22      86      48
//  ...Selection_sorting...
//          22      61      40      37      83      82      100     34      86      48
//          22      34      61      40      83      82      100     37      86      48
//          22      34      37      61      83      82      100     40      86      48
//          22      34      37      40      83      82      100     61      86      48
//          22      34      37      40      48      83      100     82      86      61
//          22      34      37      40      48      61      100     83      86      82
//          22      34      37      40      48      61      82      100     86      83
//          22      34      37      40      48      61      82      83      100     86
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
//          22      34      37      40      48      61      82      83      86      100
