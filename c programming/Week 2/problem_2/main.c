#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to find maximum between three numbers using ternary operator
    int x,y,z;
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d",&x,&y,&z);
    int max=(x>=y&&x>=z?x:(y>=z?y:z));
    printf("Max = %d\n",max);
    return 0;
}
