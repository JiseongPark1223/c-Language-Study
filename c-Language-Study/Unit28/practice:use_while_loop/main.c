#include <stdio.h>

int main()
{
    unsigned char i = 1;
    //1, 2, 4, 8, 16, 32, 64, 128을 출력하도록 만들어라
    while (i != 0) //비트 연산자 시프트를 이용하면 위 숫자가 차례대로 나온다.
    {              //128에서 왼쪽으로 1칸 더 이동하면 0이 되기 때문에 128까지 출력하려면 0이 아닐 때까지 출력한다.
        printf("%u\n", i);
        i <<= 1;
    }
    
    return 0;
}