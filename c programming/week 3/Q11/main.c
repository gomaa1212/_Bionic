#include <stdio.h>
#include <stdlib.h>
void type(int);
int main()
{
    int n;
    scanf("%d",&n);
    type(n);
    return 0;
}
void type(int n)
{
    if (n%2==0)
        printf("even");
    else
        printf("odd");
}
