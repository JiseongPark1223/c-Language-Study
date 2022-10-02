#include <stdio.h>

int main()
{
    unsigned long long num;
    //입력된 정수를 왼쪽으로 20번, 오른쪽으로 4번 시프트 연산해라.
    scanf("%llu", &num);
    
    num = num << 20 >> 4; //왼쪽으로 20번 오른쪽으로 4번 시프트 연산한 결과를 num에 저장한다.
    
    printf("%llu", num);
    
    return 0;
}