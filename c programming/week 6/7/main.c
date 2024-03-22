#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int l=strlen(s);
    int ct=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            ct=1;
        }
    }
    if(ct==1)
    {
        printf("not palindrome \n");
    }
    else
        printf("palindrome \n");
    return 0;
}
