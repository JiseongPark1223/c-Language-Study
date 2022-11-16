#include <stdio.h>

float sub(float a, float b) //매개변수 a와 b를 뺀 값을 반환하는 함수를 선언한다.
{
    return a - b;
}

int main()
{
    float num1;
    
    num1 = sub(1.0f, 0.1f); //함수를 실행한 값을 num1에 저장한다.
    
    printf("%f\n", num1); //num1을 출력한다.
    
    return 0;
}