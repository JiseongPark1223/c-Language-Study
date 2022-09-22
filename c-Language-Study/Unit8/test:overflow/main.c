#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MAX; //float 실수의 최댓값
    
    num1 = num1 * 1000.0f; //실수 1000을 곱하여 overflow가 발생
    
    printf("%f\n", num1); //overflow가 되어서 inf로 출력
    
    return 0;
}