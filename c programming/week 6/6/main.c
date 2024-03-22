#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    char _s[100];
    gets(s);
    int l=strlen(s);
    for(int i=l-1,j=0;i>=0,j<l;i--,j++)
    {
        _s[j]=s[i];

    }
    _s[l]='\0';
    printf("%s",_s);
    return 0;
}
