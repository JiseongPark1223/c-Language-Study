#include <stdio.h>

int getPowerOf2()
{
    static int num1 = 1; //정적변수를 선언하여 변수가 사라지지 않고 유지되게 한다.
    num1 *= 2;
    
    return num1;
}

int main()
{
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());
    
    return 0;
}