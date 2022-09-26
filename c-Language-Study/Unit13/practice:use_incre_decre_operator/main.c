#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 8;
    int num3;
    int num4;
    
    num1++; 
    num3 = --num1; //전위연산자는 증가연산이 먼저 이루어지고 할당이 이루어진다.
    
    --num2;
    num4 = num2++; //후위연산자는 할당이 먼저 이루어지고 증가연산이 이루어진다.
    
    printf("%d\n", num3);
    printf("%d\n", num4);
    
    return 0;
}
