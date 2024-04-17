#include <stdio.h>
#include <stdlib.h>
void swap(int  *ptr1,int *ptr2);
int main()
{
    //C program to swap two numbers using call by reference
    int num1=4;
    int num2=6;
    printf("%d     %d\n",num1,num2);
    swap(&num1,&num2);
    printf("%d     %d\n",num1,num2);

    return 0;
}
void swap(int  *ptr1,int *ptr2)
{
    int sw;
    sw=*ptr1;
    *ptr1=*ptr2;
    *ptr2=sw;
}
