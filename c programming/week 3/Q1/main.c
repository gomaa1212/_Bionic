#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
    */
        float a,b,c,d,e;
        printf("enter input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer\n");
        scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
        float perc=((a+b+c+d+e)/500)*100;
        if (a<=100&&b<=100&&c<=100&&d<=100&&e<=100)
           {
                  if (perc<=100&&perc>=90)
               {
                    printf("Grade A");
               }
                  else if (perc<90&&perc>=80)
               {
                    printf("Grade B");
               }
                  else if (perc<80&&perc>=70)
               {
                    printf("Grade c");
               }
                  else if (perc<70&&perc>=60)
               {
                    printf("Grade D");
               }
                  else if(perc<60&&perc>=40)
               {
                    printf("Grade E");
               }
                  else
               {
                    printf("Grade F");
               }
        }
           else
           {
               printf("Enter correct marks...each mark is 100 maximum");
           }
           printf("\n");




    return 0;
}
