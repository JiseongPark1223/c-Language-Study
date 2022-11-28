#include <stdio.h>
#include <stdarg.h>

int getSum(char *type, ...) //문자열을 받고 가변인자 중 정수의 합을 구하는 함수
{
    va_list ap; //가변인자목록 포인터를 선언;
    int i = 0;
    int result = 0; //정수 합을 구하는 변수
    
    va_start(ap, type); //가변인자부터 포인터를 위치
    while (type[i] != '\0')
    {
        switch(type[i])
        {
            case 'i': //문자가 'i'이면 정수형 자료형 크기만큼 값을 가지고 온다음 result에 더한다.
                result += va_arg(ap, int);
                break;
            case 's': //문자가 's'이면  char 포인터 자료형 크기만큼 값을 가지고 온다.
                va_arg(ap, char*);
                break;
            case 'd': //문자가 'd'이면 실수형 자료형 크기만큼 값을 가지고 온다.
                va_arg(ap, double);
                break;
            default:
                break;
        }
        i++;
    }
    va_end(ap); //포인터를 NULL로 초기화한다.
    
    return result; //정수합을 반환한다.
}

int main()
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("%d\n", getSum("isi", num1, "C", 10));
    printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
    printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
    printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));
    
    return 0;
}