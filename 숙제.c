#include <stdio.h>
int main(void) {
  int a;
  int b;
  int score;
  printf("a or b\n");
  scanf("%d%d",&a,&b);
if(a>b)
  scanf("%d",&score);
  printf("what your score?\n");
    if(100<=score)
        {
        printf("A");
        }
    if(90<=score) 
        {
        printf("B");
        }
    if(80<=score) 
        {
        printf("C");
        }
    else if(70>score) 
        {
        printf("F");
        }
    
if(a<b)
    {
        if(100<=score)
            {
                printf("수");
            }
        if(90<=score)
            {
                printf("우");
            }
        if(80<=score)
            {
                printf("미");
            }
        else if(70>score)
            {
                printf("양");
            }

    
}
}