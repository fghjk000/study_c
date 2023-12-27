#include <stdio.h>
main()
{
    int a= 3;
    printf("%d \n", &a);
    printf("%d %d \n",a,*&a);
    return 0 ;
}