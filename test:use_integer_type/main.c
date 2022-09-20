#include <stdio.h>
#include <stdint.h> //정수형 자료형이 크기별로 정리된 헤더파일

int main()
{
    int8_t num1 = INT8_MIN; //1byte 정수형의 최솟값, -128
    uint16_t num2 = UINT16_MAX; //2byte 부호가 없는 정수형의 최댓값, 65535
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX; //8byte 정수형의 죄댓값, 3223372036854775808
    
    printf("%d %u %d %lld\n", num1, num2, num3, num4);
    
    return 0;
}