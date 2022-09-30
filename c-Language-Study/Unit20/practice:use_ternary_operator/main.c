#include <stdio.h>

int main()
{
    float num1 = 1.2f;
    float num2;
    
    printf("%f\n", num1 > 2.0f ? 3.0f : 4.0f); //A > B ? 1 : 2 (A > B가 참이라면 1을 출력, 거짓이라면 2를 출력한다.)
                                               //삼항연산자
    return 0;
}