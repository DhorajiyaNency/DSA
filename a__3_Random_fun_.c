// Random_function
// create_array using Random_FUNCTION
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,max,min;
    printf("\n Enter your minimum value : ");
    scanf("%d",&min);
    printf("\n Enter your maximum value : ");
    scanf("%d",&max);

    for(i=1;i<20;i++)
        printf("\t -> %d",(rand()%(max-min+1))+min);    
}
