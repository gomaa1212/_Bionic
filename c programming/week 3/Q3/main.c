#include <stdio.h>
#include <stdlib.h>

int main()
{

           //Write a C program to create Simple Calculator using switch case.

   float a;char b;float c;
   scanf("%f %c %f",&a,&b,&c);
   printf("=");
   switch (b)
   {
       case'+':
       printf("%.2f",a+c);
       break;
       case'-':
       printf("%.2f",a-c);
       break;
       case'*':
       printf("%.2f",a*c);
       break;
       case'/':
       printf("%.2f",a/c);
       break;
       default:
        printf("incorrect operation");
        break;

   }
    return 0;
}
