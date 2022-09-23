#include <stdio.h>

int main()
{
    // const를 사용해 상수를 지정하면 선언할 때 할당한 값을 바꿀 수 없다.
    const unsigned long long con1 = 10;
    const float con2 = 3.200000;
    const char con3 = 't';
    
    printf("%llu %f %c", con1, con2, con3);
    
    return 0;
}

