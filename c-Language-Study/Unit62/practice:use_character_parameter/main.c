#include <stdio.h>

void printType(char type) //반환값은 없고 매개변수가 char형인 함수를 선언한다.
{
    printf("Type %c\n", type);
}

int main()
{
    printType('X'); //함수에 x를 넣어 값을 출력한다.
    
    return 0;
}