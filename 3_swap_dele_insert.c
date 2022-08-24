//array Insertion, Deletion, Swaping...
#include <stdio.h>
int pos = 0, a[10], i, size=7, element=24, gIndex, k;
void swap(int swap_element) 
{
    gIndex=2;
    for(int i = size-1; i>gIndex; i--) 
    {
        a[pos+1]=a[pos];
    }
    a[gIndex]=swap_element;
}
void deletion(int k)                    
{
  //  index=5;
    for(int i = k; i<size-1 ; i++)  
    {
        a[i]=a[i+1];
    }
    pos--;    
    
    // for deleting last element in array  // if we want to delete last element only.
    // k=a[pos--];
    // printf("\n deleted element is %d ",k);   
}
void frontInsert(int indexN)
{
    indexN=0;
    for(int i = size-1; i>=indexN; i--)  
    {
        a[i+1]=a[i];
    }
    a[indexN]=element;
    pos++;
}
void lastInsert(int n)
{
    a[pos++] = n;     // stack[++top]=val;
}
void print()
{
    for (i = 0; i < pos; i++)
    {
        printf("\n %d", a[i]);
    }
}
int main()
{
    int indexN;
    lastInsert(12);
    lastInsert(13);
    lastInsert(14);
    lastInsert(15);
    lastInsert(16);
    lastInsert(17);
    frontInsert(24);
    deletion(5);
    swap(400);
    print();
}

