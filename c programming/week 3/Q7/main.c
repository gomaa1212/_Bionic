#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Write a C program to calculate factorial of a number.
   int n;
   int fac=1;
   scanf("%d",&n);
   for (int i=1;i<=n;i++)
   {
       fac=fac*i;
   }
   printf("factorial of %d is %d\n",n,fac);
    return 0;
}
