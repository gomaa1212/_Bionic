#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter an integer \n");
    scanf("%d",&x);

    float y;
    printf("enter a float \n");
    scanf("%f",&y);

    long z;
    printf("enter a long \n");
    scanf("%ld",&z);

    char a;
    printf("enter a char \n");
    scanf(" %c",&a);

    double b;
    printf("enter a double \n");
    scanf("%lf",&b);

    long long c;
    printf("enter a long long \n");
    scanf("%lld",&c);

    unsigned int _x;
    printf("enter an unsigned integer \n");
    scanf("%u",&_x);

    signed short _y;
    printf("enter a signed short \n");
    scanf("%hd",&_y);

    short d;
    printf("enter a short integer \n");
    scanf("%hd",&d);
    printf("\n");

    printf("integer=%d\nfloat=%f\nlong=%ld\nchar=%c\ndouble=%lf\nlong long=%lld\nunsigned int=%u\nsigned short=%hd\nshort=%hd",x,y,z,a,b,c,_x,_y,d);

    return 0;
}
