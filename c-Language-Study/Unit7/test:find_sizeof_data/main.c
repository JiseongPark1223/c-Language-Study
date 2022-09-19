#include <stdio.h>

int main()
{
    char num1; //1byte
    short num2; //2byte

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long)); //long long 자료형의 크기 8byte

    return 0;
}