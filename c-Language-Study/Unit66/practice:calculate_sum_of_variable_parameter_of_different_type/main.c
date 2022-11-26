#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

long long getSum(char *type, ...) //고정매개변수로 가변인자의 약칭이 담긴 문자열을 받는 함수를 선언한다.
{
    va_list ap; //가변 인자의 메모리 주소를 저장하는 포인터 선언
    int i = 0; 
    long long result = 0; //값의 합을 저장하는 변수를 선언
    
    va_start(ap, type); //포인터를 가변 인자 시작 메모리 주소로 설정
    while (type[i] != '\0')
    {
        switch(type[i])
        {
            case 'i':
                result += va_arg(ap, int); //문자가 i이면 int형 변수를 더한다.
                break;
            case 's':
                result += atoi(va_arg(ap, char*)); //문자가 s이면 문자열을 int형으로 변환하여 더한다.
                break;
            default:
                break;
        }
        i++;
    }
    va_end(ap); //포인터를 NULL로 초기화한다.
    
    return result;
}

int main()
{
    printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
    printf("%lld\n", getSum("ssi", "150", "150", 100));
    
    return 0;
}