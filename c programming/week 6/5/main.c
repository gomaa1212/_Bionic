#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter num of row and column of matrix 1\n");
    int rw1,cl1;
    scanf("%d%d",&rw1,&cl1);
    int matrix1[rw1][cl1];
    printf("enter the matrix\n");
    for(int i=0;i<rw1;i++)
    {
        for(int j=0;j<cl1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter num of row and column of matrix 2\n");
    int rw2,cl2;
    scanf("%d%d",&rw2,&cl2);
    int matrix2[rw2][cl2];
    printf("enter the matrix\n");
    for(int i=0;i<rw2;i++)
    {
        for(int j=0;j<cl2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("the result\n");
    if(rw1!=rw2&&cl1!=cl2)
    {
        printf("can't addition");
    }
    else
    {
        int sum[rw1][cl1];
        for(int i=0;i<rw1;i++)
        {
            for(int j=0;j<cl1;j++)
            {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
