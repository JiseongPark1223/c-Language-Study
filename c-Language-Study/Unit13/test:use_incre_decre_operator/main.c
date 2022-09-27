#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char c1;
    
    scanf("%d %f %c", &num1, &num2, &c1);
    
    num1++; //num1 값에 1을 더한다.
    num2++; //num2 값에 1.0을 더한다.
    c1--; //c1의 아스키 코드 값에 1을 뺴므로 순서 상 하나 전에 있는 문자가 출력된다.
    
    printf("%d %f %c", num1, num2, c1);
    
    return 0;
}