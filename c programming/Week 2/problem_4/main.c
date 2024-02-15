#include <stdio.h>
#include <stdlib.h>

int main()
{
         //C program to check whether a character is alphabet or not
    char x;
    scanf("%c",&x);
    if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
            printf("Alphabet");
    else
        printf("isn't alphabet");


    return 0;
}
