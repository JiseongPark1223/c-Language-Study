#include <stdio.h>
#include <stdarg.h>

void printStrings(int args, ...) //문자열을 출력하는 가변인자 함수를 선언한다.
{
    va_list ap; //가변인자 목록 포인터를 선언한다. 가변인자의 메모리 주소를 저장하는 역할을 한다.
    
    va_start(ap, args); //고정매개변수가 아닌 가변인자를 가져올 수 있도록 포인터를 설정하는 역할을 한다.
    for (int i = 0; i < args; i++)
    {
        char *str = va_arg(ap, char*); //가변인자 포인터에서 특정 자료형의 크기만큼 값을 가져온다.
        printf("%s ", str);
    }
    va_end(ap); //포인터를 NULL로 만들어준다. 
    
    printf("\n");
}

int main()
{
    printStrings(2, "C", "Language");
    printStrings(3, "The", "Little", "Prince");
    
    return 0;
}