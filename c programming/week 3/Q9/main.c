#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main()
{
    //Write a C program to print Fibonacci series up to n terms.
    int n;
    scanf("%d",&n);
    printf("fibonacci = %d",fibonacci(n));



    return 0;
}
int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci (n-1)+fibonacci(n-2);
    }


}
