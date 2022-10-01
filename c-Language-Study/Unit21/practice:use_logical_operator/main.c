#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 0;
    
    if (num1 && num1) //&&로 and 연산자를 표현한다. 두 값이 모두 참이여야 참이 나온다.
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    if (num1 || num2) //||로 or 연산자를 표현한다. 두 값 중 하나만 참이라도 참이 된다.
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    printf("%s\n", !num2 ? "참" : "거짓"); //!로 not 연산자를 표현한다. not은 참은 거짓으로 거짓은 참으로 나타낸다.
    
    return 0;
}