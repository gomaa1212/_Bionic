#include <stdio.h>
#include <stdlib.h>
void fac(int *ptr);
int main()
{
    //C function to return factorial of number ,  function should take pointer and return void
    int num;
    printf("enter num\n");
    scanf("%d",&num);
    fac(&num);

    return 0;
}
void fac(int *ptr)
{
    int num=*ptr;
    int mul=1;
    for(int i=2;i<=num;i++)
    {
        mul*=i;
    }
    printf("%d",mul);
}
