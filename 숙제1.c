#include <stdio.h>
int main(void)
{
int a;
int b=1;
int score;
    printf ("what your score\n");
    scanf ("%d",&score);
    printf("Korea(1) or English(0)\n");
    scanf("%d",&a);
if(a>=b)
    {
        if(90<=score)
        {
            printf("수");
        }
        else if(80<=score)
        {
            printf("우");
        }
        else if(70<=score)
        {
            printf("미");
        }
        else
        {
            printf("양");
        }
    }
if(a<b)
    {
        if(90<=score)
        {
            printf("A");
        }
        else if(80<=score)
        {
            printf("B");
        }
        else if(70<=score)
        {
            printf("C");
        }
        else
        {
            printf("F");
        }
    }
}