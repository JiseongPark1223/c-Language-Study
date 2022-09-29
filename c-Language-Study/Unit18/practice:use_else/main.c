#include <stdio.h>

int main()
{
    unsigned long long num1 = 0;
    
    if (num1) //0은 거짓이고 나머지 숫자는 참으로 처리한다.
    {
        printf("참");
    }
    else
    {
        printf("거짓");
    }
    
    return 0;
}