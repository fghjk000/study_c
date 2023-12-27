#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    unsigned int b =20;
    short c = 32768;
    long d = 2;
    float e = 1.1;
    double f = 2.2;
    char g = 'a';
    bool h = false;

    printf("%d\n",a);
    printf("%u\n",b);
    printf("%d\n",c);
    printf("%ld\n",d);

    printf("%f\n",e);
    printf("%lf\n",f);

    printf("%c\n",g);

    printf("%d\n",h);

    return 0 ; 
}