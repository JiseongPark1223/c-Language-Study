#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("정수 세 개를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3); //정수 세 개를 입력받고 저장한다.
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    
    return 0;
}