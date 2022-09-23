#include <stdio.h>

int main()
{
    const long double con1 = -2.225074e-308;
    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;
    
    printf("%Le 0x%x %lld\n", con1, con2, con3); 
    //16진수는 앞에 0x를 붙히고 1 ~ 9 다음 A ~ F로 표현한다.
    return 0;
}

