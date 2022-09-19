#include<stdio.h>
struct area
{
    int length;
    int breath;
};
int main()
{
    struct area rect={10,20};
    struct area*prect=&rect;
    printf("\n length %d ",rect.length);
    printf("\n breath %d ",rect.breath);
    printf("\n area : %d ", rect.breath*rect.length);
    printf("\n area : %d ",prect->breath*prect->length);
    printf("\n Enter l & b :");
    struct area*prect1;
    scanf("%d%d",&prect1->length,&prect1->breath);
    printf("\n area : %d",prect1->breath*prect1->length);    
}
