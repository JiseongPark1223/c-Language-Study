#include <stdio.h>
#include <string.h>

int add(int *a, int *b) //매개변수로 int형 포인터를 받고 사칙연산하는 함수들을 선언한다.
{
    return *a + *b;
}

int sub(int *a, int *b)
{
    return *a - *b;
}

int mul(int *a, int *b)
{
    return *a * *b;
}

int div(int *a, int *b)
{
    return *a / *b;
}

int main()
{
    char funcName[10];
    int num1, num2;
    scanf("%s %d %d", funcName, &num1, &num2);
    
    int(*fp)(int *, int *); //매개변수로 int형 포인터를 받고 반환값으로 int형 변수를 반환하는 포인터를 선언한다.
    
    if (strcmp(funcName, "add") == 0) //각 문자열에 해당하는 함수를 포인터에 저장한다.
    {
        fp = add;
    }
    else if (strcmp(funcName, "sub") == 0)
    {
        fp = sub;
    }
    else if (strcmp(funcName, "mul") == 0)
    {
        fp = mul;
    }
    else
    {
        fp = div;
    }
    
    printf("%d\n", fp(&num1, &num2)); //함수 포인터로 함수를 호출한다.
    
    return 0;
}