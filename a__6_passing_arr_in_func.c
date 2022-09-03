// pass the array in function
// pass the value in function

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    void test(int []);  // function declaration
    test(a);                // function calling 
    printf("\n main : ");
    for(int i=0;i<5;i++)
        printf(" %6d",a[i]);
}
void test(int A[])  // function definition
{
    printf("\n test : ");
    for(int i=0;i<5;i++)
    {
        A[i]*=A[i];
        printf(" %6d",A[i]);
    }
}


// #include<stdio.h>
// int main()
// {
//     int a=10;
//     void test(int);  // function declaration
//     test(a);                // function calling 
//     printf(" %6d",a);
// }
// void test(int A)  // function definition
// {
//     printf("\n In test : ");
//     A*=A;
//     printf(" %6d",A);
// }

// in passing array --> pass address
// in passing value --> pass reference
