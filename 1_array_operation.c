//array Insertion, Deletion, Swaping...
#include <stdio.h>
int pos = 0, a[10], i, size=7, element=24, g, k;
void swap(int elem) 
{
    g=2;
    for(int i = size-1; i>g; i--) 
    {
        a[pos+1]=a[pos];
    }
    a[g]=elem;
}
void deletion(int k)                    
{
    for(int i = k; i<size-1 ; i++)  
    {
        a[i]=a[i+1];
    }
    pos--;
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
    a[pos++] = n;
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
    deletion(4);
    swap(400);
    print();
}
