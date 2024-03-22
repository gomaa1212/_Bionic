#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to input elements in array and find frequency of each element in array.
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
        printf("%d--->%d\n",arr[i],freq[arr[i]]);
    }

    return 0;
}
