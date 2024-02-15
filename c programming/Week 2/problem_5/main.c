#include <stdio.h>
#include <stdlib.h>

int main()
{
           // Write a C Program to input two angles from user and find third angle of the triangle.
    float x,y,z;
    printf("enter first angle\n");
    scanf("%f",&x);
     printf("enter second angle\n");
    scanf("%f",&y);
    z=180-(x+y);
    printf("third angle = %.2f\n",z);



    return 0;
}
