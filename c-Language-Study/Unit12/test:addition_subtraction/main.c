#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;
    
    scanf("%f %f", &num1, &num2); //num1과 num2에 입력받은 실수를 저장한다.
    
    num3 = num1 + num2 - 4.5f; //입력받은 두 값을 더한 후 실수 4.5를 뺀 값을 num3에 저장한다.
    
    printf("%f", num3); //num3를 출력한다.
    
    return 0;
}
