#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...) 
{
    int result = 0; //가변인자의 합을 저장할 변수를 선언한다.
    va_list ap; //가변인자의 메모리 주소를 저장하는 포인터를 선언한다.
    
    va_start(ap, args); //포인터를 가변인자의 시작지점으로 설정한다.

    for (int i = 0; i < args; i++)
    {
        result += va_arg(ap, int); //가변인자의 합을 구한다.
    }
    
    return result;
}

int main()
{
    int num1, num2, num3, num4, num5;
    
    scanf("%d %d", &num1, &num2);
    scanf("%d %d %d", &num3, &num4, &num5);
    
    printf("%d\n", sum(2, num1, num2));
    printf("%d\n", sum(3, num3, num4, num5));
    
    return 0;
}