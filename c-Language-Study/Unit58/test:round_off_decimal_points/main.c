#include <stdio.h>

int main()
{
    float num1;
    int num2;
    //소수점 이하를 버려라.
    scanf("%f", &num1);
    
    num2 = (int)num1; //float형 실수로 입력받은 변수를 int형으로 변환하면 소수점 이하가 버려진 후 정수형으로 저장된다.
    printf("%d\n", num2);
    
    return 0;
}