#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to find largest and second largest element in an array.
    int arr[5];
    printf("enter element \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int swap;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    printf("largest element = %d\n",arr[0]);
    printf("second largest element = %d\n",arr[1]);

    return 0;

}
