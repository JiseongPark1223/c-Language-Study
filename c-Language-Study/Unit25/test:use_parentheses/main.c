#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    //1. num1과 num2를 더하기
    //2. 1번 결과에 10을 곱하기
    //3. 2번 결과에서 num3을 빼기 , 순서로 연산한 뒤 결과를 출력하라
    printf("%d\n", ((num1 + num2) * 10) - num3);
    
    return 0;
}