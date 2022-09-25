#include <stdio.h>

int main()
{
    float num1 = 1.97f; // float 숫자 뒤에는 f를 쓴다.
    long double num2 = 5.524218l; // long double 숫자 뒤에는 l을 쓴다.
    double num3 = 3.7928e+7; // 부동소수점 표현 방식을 사용, 더 큰 범위의 수를 표현할 수 있음.
    
    printf("%f %Lf %f\n", num1, num2, num3);
    
    return 0;
}