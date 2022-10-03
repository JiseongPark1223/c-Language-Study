#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;
    int num3;
    
    num3 = (2 * ((1 << num1) + (2 >> num2))); //괄호를 사용하면 우선 순위로 연산이 된다.
    
    printf("%d\n", num3);
    
    return 0;
}