#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to add two numbers using pointers
    int num1=4,num2=5;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("%d",*ptr1+*ptr2);

    return 0;
}
