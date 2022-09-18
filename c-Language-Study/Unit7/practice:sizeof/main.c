#include <stdio.h>

int main()
{
    short num1; //short 자료형의 크기 2byte
    long long num2; //long long 자료형의 크기 8byte

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int)); //int 자료형의 크기 4byte, sizeof연산자는 자료형의 크기를 구해준다.

    return 0;
}