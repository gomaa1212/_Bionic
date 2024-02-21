#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to print all even numbers between 1 to 100. – using while loop.
    unsigned int i=0,sum=0;
    while (i<=100)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("sum = %d",sum);
    return 0;
}
