#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    printf("enter element \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("even element\n");
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    printf("odd element\n");
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
