#include <stdio.h>

int main()
{
    float num1;
    
    scanf("%f", &num1);
    
    int num2 = num1; //실수형에서 정수형으로 자료형 축소가 일어나면서 소수점에 손실이 일어난다.
    
    printf("%d", num2);
    
    return 0;
}