#include <stdio.h>

int main()
{
    unsigned char num1 = 32;
    //4가 되도록 출력하라.
    num1 = num1 >> 4 << 1; //0010 0000(32)에서 오른쪽으로 4번 시프트한다.
                           //0000 0010(2)가 된다.
    printf("%u\n", num1);  //왼쪽으로 1번 시프트하면 0000 0100(4)가 된다.
    
    return 0;
}