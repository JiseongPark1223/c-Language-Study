#include <stdio.h>

int main()
{
    unsigned char num1 = 256; // unsigned char 자료형의 크기 0 ~ 255, 256은 오버플로우
    unsigned short num2 = 65536; //unsigned short 자료형의 크기 0 ~ 65535, 65536은 오버플로우
    long long num3 = 9223372036854775808; //long long 자료형의 크기 -9223372036854775808 ~ 9223372036854775807, 9223372036854775808은 오버플로우

    printf("%u %u %lld\n", num1, num2, num3); //%u (unsigned decimal)10진수, %lld (long long decimal)

    return 0;
}