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
    while (flag)
    {
        printf("무엇을 선택하시겠습니까?\n");
        printf("덧셈(1),뺄셈(2),곱셈(3),나눗셈(4),종료(5)\n\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("더할 값을 입력하시오.\n:");
            scanf("%f", &a);
            printf("값은 %f입니다.\n\n", add(e, a));
            break;
        case 2:
            printf("뺄 값을 입력하시오.\n:");
            scanf("%f", &b);
            printf("값은 %f입니다.\n\n", min(e, a));
            break;
        case 3:
            printf("곱 값을 입력하시오.\n:");
            scanf("%f", &c);
            printf("값은 %f입니다.\n\n", multiply(e, b));
            break;
        case 4:
            printf("나눌 값을 입력하시오.\n:");
            scanf("%f", &d);
            printf("값은 %f입니다.\n\n", division(e, c));
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
}
float add(float e, float a)
{
    e = e += a;
    return e;
}
float min(float e, float b)
{
    e = e -= b;
    return e;
}
float multiply(float e, float c)
{
    e = e *= c;
    return e;
}
float division(float e, float d)
{
    e = e /= d;
    return e;
}