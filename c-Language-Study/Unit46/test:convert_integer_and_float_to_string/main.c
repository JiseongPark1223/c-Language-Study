#include <stdio.h>

int main()
{
    char s1[10], s2[20];
    int num1;
    float num2;
    
    scanf("%d %f", &num1, &num2); //정수와 실수를 입력받아 각각 num1과 num2에 저장한다.
    
    sprintf(s1, "%d", num1); //정수 num1을 문자열로 변환하여 s1에 저장한다.
    sprintf(s2, "%f", num2); //실수 num2를 문자열로 변환하여 s2에 저장한다.
    
    printf("%s\n", s1);
    printf("%s\n", s2);
    
    return 0;
}