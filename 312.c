#include <stdio.h>
float a;     // 덧셈
float b;     // 뺄셈
float c;     // 곱셈
float d;     // 나눗셈
float e = 0; // 초기값
float result = 0;
float add(float d, float a);
float min(float d, float b);
float multiply(float d, float c);
float division(float e, float d);
int choice;
int flag = 1;

int main()
{
    do
    {
        printf("무엇을 선택하시겠습니까?\n");
        printf("덧셈(1),뺄셈(2),곱셈(3),나눗셈(4),종료(5)\n\n");
        scanf("%d", &choice);

        // printf("e: %f\n", e);

        if(choice >0 && choice<6)
        {
            switch (choice)
            {
            case 1:
                printf("더할 값을 입력하시오.\n:");
                scanf("%f", &a);
                e = add(e, a);
                printf("값은 %f입니다.\n\n", e);
                break;
            case 2:
                printf("뺄 값을 입력하시오.\n:");
                scanf("%f", &b);
                e = min(e, b);
                printf("값은 %f입니다.\n\n", e);
                break;
            case 3:
                printf("곱 값을 입력하시오.\n:");
                scanf("%f", &c);
                e = multiply(e, c);
                printf("값은 %f입니다.\n\n", e);
                break;
            case 4:
                printf("나눌 값을 입력하시오.\n:");
                scanf("%f", &d);
                if(d!=0)
                {
                e = division(e,d);
                printf("값은 %f입니다.\n\n", e);
                }
                else
                {
                    printf("0의 값은 나눌수 없습니다.\n");
                }
                break;
            case 5:
                printf("서비스를 종료합니다.\n");
                flag = 0;
                break;
            default:
                printf("잘못 입력 하셨습니다.\n");
                break;
            }
        }
        else 
        {
            printf("잘못 입력 하셨습니다.\n\n");
        }
    }
    while (flag!=0);
}

float add(float e, float a)
{
   // printf("e: %f\n", e);
    return e + a;
}
float min(float e, float b)
{
    // printf("e: %f\n", e);
    return e -= b;
}
float multiply(float e, float c)
{
    // printf("e: %f\n", e);
    return e *= c;
}
float division(float e, float d)
{
    // printf("e: %f\n", e);
    return e /= d;
}