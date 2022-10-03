#include <stdio.h>

int main()
{
    unsigned char flag1 = 1 << 7; //1000 0000
    unsigned char flag2 = 1 << 3; //0000 1000
    //4와 0이 출력되도록 하여라.
    flag1 |= 1 << 2; //flag |= mask를 통해 특정 비트를 켠다. 마스크란 플래그의 비트를 조작하거나 검사할 때 사용하는 숫자를 말한다.
                     //0000 0100을 or연산자를 통해 켜면 1000 0100이 된다.
    flag1 &= ~(1 << 7); //flag &= ~mask를 통해 특정 비트를 끈다. 비트를 끄면 0000 0100이 되므로 10진수로 4가 출력된다.
    flag2 ^= 1 << 3; //flag ^= mask를 통해 특정 비트가 켜져있으면 끄고 꺼져있으면 킨다. 
    
    printf("%u %u\n", flag1, flag2);
    
    return 0;
}