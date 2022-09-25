#include <stdio.h>

int main()
{
    unsigned short num1; //unsigned short(2byte) 자료형의 크기 0 ~ 65535
    unsigned int num2; //unsigned int(4byte) 자료형의 크기 0 ~ 4294967295
    char num3; //char(1byte) 자료형의 크기 -128 ~ 127

    num1 = 65536; 
    num2 = 4294967296;
    num3 = 128;

    printf("%u %u %d\n", num1, num2, num3);

    return 0;
}