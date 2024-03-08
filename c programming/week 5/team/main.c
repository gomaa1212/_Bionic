#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,z,counter=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if((x+y+z)>1)
        {
            counter++;
        }

    }
    printf("%d",counter);
    return 0;
}
