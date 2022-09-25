#include <stdio.h>

int main()
{
    unsigned short num1;
    unsigned int num2;
    char num3;
    
    num1 = 65536;
    num2 = 4294967296;
    num3 = 128;

    printf("%u %u %d\n", num1, num2, num3);

    return 0;
}