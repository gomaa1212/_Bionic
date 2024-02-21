#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to count number of digits in a number using looping
    int i;
    int counter=1;
    scanf("%d",&i);
    while (i/10!=0)
    {
        counter++;
        i=i/10;
    }
    printf("%d",counter);
    return 0;
}
