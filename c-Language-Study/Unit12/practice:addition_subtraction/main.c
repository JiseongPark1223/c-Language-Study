#include <stdio.h>

int main()
{
    int num1;
    int num2 = 5;
    
    num1 = 10 - num2; //10에서 num2를 뺀 값을 num1에 저장한다.
    
    num1 += 95; //num1 = num1 + 95와 같은 말이다.
    
    printf("%d\n", num1);
    
    return 0;
}