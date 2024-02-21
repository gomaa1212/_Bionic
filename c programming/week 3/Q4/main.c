#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to check whether an alphabet is vowel or consonant using switch case.
    char x;
    scanf(" %c",&x);
    switch (x)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf("vowel");
        break;
    default:
        printf("consonat");
        break;
    }
    return 0;
}
