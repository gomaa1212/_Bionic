#include <stdio.h>
#include <stdlib.h>

int main()
{

   // Write a C program to print day of week name using switch case.
   int day;
   printf("enter number of day between 1 ..7 : ");
   scanf("%d",&day);
   switch (day)
   {
   case 1:
    printf("saterday");
    break;
   case 2:
    printf("sunday");
    break;
   case 3:
    printf("monday");
    break;
   case 4:
    printf("tuesday");
    break;
   case 5:
    printf("wednesday");
    break;
   case 6:
    printf("thursday");
    break;
   case 7:
    printf("friday");
    break;
   default:
    printf("invalid number");
    break;
   }
   printf("\n");
    return 0;
}
