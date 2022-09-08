// Quick sorting...
#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    for(int i=0;i<n;i++)
        printf(" %d ",a[i]);
}
void quickSort(int a[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while (i<j)
        {
            printf("\n inside quick : ");
            print(a);
            while (a[i]<=a[pivot]&&i<last)
            i++;
            while (a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            quickSort(a,first,j-1);
            quickSort(a,j+1,last);
        
    }
}
int main()
{
    int i,a[25],min=20,max=101;
    printf("how many element ? : ");
    scanf("%d",&n);
    // printf("Enter %d element : ",n);

    for(i=0;i<n;i++)
        a[i]=(rand()%(max-min+1))+min;
    print(a);
    quickSort(a,0,n-1);
    printf("\n Order of sorted Elements : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);

    }
    return 0;
    
}

// how many element ? : 10
//  61  37  40  34  83  82  100  22  86  48
//  inside quick :  61  37  40  34  83  82  100  22  86  48
//  inside quick :  61  37  40  34  48  82  100  22  86  83
//  inside quick :  61  37  40  34  48  22  100  82  86  83
//  inside quick :  22  37  40  34  48  61  100  82  86  83
//  inside quick :  22  37  40  34  48  61  100  82  86  83
//  inside quick :  22  37  34  40  48  61  100  82  86  83
//  inside quick :  22  34  37  40  48  61  100  82  86  83
//  inside quick :  22  34  37  40  48  61  100  82  86  83
//  inside quick :  22  34  37  40  48  61  83  82  86  100
//  Order of sorted Elements :  22  34  37  40  48  61  82  83  86  100
