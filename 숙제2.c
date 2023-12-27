#include <stdio.h>

int main(void){
int a;
char grade;

printf("점수는?");
scanf("%d\n", &a);

printf("%d", a);

if(a>=90)
{
    grade ='A';

}
else if(a>=80)
{
    grade ='B';
}
else if(a>=70)
{
    grade ='C';
}
else
{
    grade= 'F';
}
printf(grade);

}