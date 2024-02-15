#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to check whether a number is divisible by 5 and 11 or not
    int x;
    scanf("%d",&x);
    if (x%5==0&&x%11==0)
    {
        printf("divisible by 5 and 11\n");
    }
    else
    {
         printf(" Not divisible by 5 and 11\n");
    }

    return 0;
}
