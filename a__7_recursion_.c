// return is most important part of recursion
// recursion function 
/*
<return type> function-name(arg1,..,..,..) // definition
{
    statment
}
function-name(perameter,..,..,..) // calling
*/

#include<stdio.h>
int recur(int n)
{
    printf("\n\t srart bulb %d ",n);
    if(n<3)
        recur(n+1);
    // else 
    //     return -1;
    // printf("\n\t Exit from %d ",n);
}
int main()
{
    printf("\n Before main ");
    recur(5);
    printf("\n After main ");
}
