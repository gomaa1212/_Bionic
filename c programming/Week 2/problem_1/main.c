#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to find maximum between three numbers using if condition

    int x,y,z;
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d",&x,&y,&z);
    if (x>=y&&x>=z)
    {
        printf("Max = %d",x);
    }
    else if(y>=z)
    {
        printf("Max = %d",y);
    }
    else
    {
        printf("Max = %d",z);
    }
       printf("\n");

    return 0;
}
