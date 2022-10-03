#include <stdio.h>

int main()
{
    unsigned char flag = 16;
    unsigned char num1, num2;
    
    scanf("%hhu %hhu", &num1, &num2);
    
    flag |= num1 << 3; //num1의 비트를 왼쪽으로 3번 이동한 값으로 flag 비트 켜기
    flag &= ~(num2 >> 2); //num2의 비트를 오른쪽으로 2번 이동한 값으로 flag 비트 끄기
    flag ^= 1 << 7; //flag의 첫 번째 비트 토글하기
    
    printf("%u\n", flag);
    
    return 0;
}