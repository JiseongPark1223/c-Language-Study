#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[31];
    int num1, num2;
    float num3;
    char *end;
    
    scanf("%[^\n]s", s1); //16진 정수, 10진 정수, 실수로 된 문자열을 입력받는다.
    
    num1 = strtol(s1, &end, 16); //16진 정수 문자열을 정수로 변환한다.
    num2 = strtol(end, &end, 10); //10진 정수로 입력된 문자열을 정수로 변환한다.
    num3 = strtof(end, NULL); //실수로 입력된 문자열을 실수로 변환한다.
    
    printf("0x%x\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);
    
    return 0;
}