#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Write a C program to input elements in array and print all unique elements in array.
    int freq[10000]={0};
    int arr[5];
    printf("enter element \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<5;i++)
    {
        if(freq[arr[i]]==1)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
