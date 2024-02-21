#include <stdio.h>
#include <stdlib.h>
//Write a C program to find power of any number using functions.
int power(int p,int n);
int main()
{
    int n,p;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the power \n");
    scanf("%d",&p);
    printf("power= %d\n",power(p,n));
    return 0;
}
int power(int p,int n)
{
    int res=1;
    for (int i=1;i<=p;i++)
    {
        res=n*res;
    }
    return res;
}
