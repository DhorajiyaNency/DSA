// Rendomize Quick sorting
#include<stdio.h>
#include<stdlib.h>
int n,i,j,pivot,temp;
void print(int a[])
{
    int i;
    for(int i=0;i<n;i++)
        printf(" %d ",a[i]);
}
void swap_func(int temp,int a[])
{
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
}
void partition(int a[], int last, int first)
{
    int pivot=a[last];
    int i=last+1;
    int j=first;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
           
        }
    } while (i < j);
    temp = a[last];
    a[last] = a[j];
    a[j] = temp;

}
void pivot_index(int a[], int last, int first)
{
    int part_index;
    if(last<first)
    {
        part_index = partition(a,last,first);
        pivot_index(a,last,part_index-1);
        pivot_index(a,part_index+1,first);
    }
}
int main()
{
    int i,a[25],min=20,max=101;
    printf("how many element ? : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        // a[i]=(rand()%(max-min+1))+min;
        {
            printf("Enter your element : ");
            scanf("%d",&a[i]);
        }
    print(a);
    pivot_index(a,0,n-1);
    print(a);
    printf("\n Order of sorted Elements : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;   
}
