#include <stdio.h>
#include <stdlib.h>
int *fac(int num);
int main()
{
    //C function to return factorial of number ,  function should take integer and return pointer
    int num;
    printf("enter num\n");
    scanf("%d",&num);
    int *res=fac(num);
    printf("%d",*res);
    return 0;
}
int *fac(int num)
{
    int mul=1;
    for(int i=2;i<=num;i++)
    {
        mul*=i;
    }
    int *ptr=&mul;
    return ptr;
}
