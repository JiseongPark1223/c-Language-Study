#include <stdio.h>

int main()
{
    char s1[30];
    float num1 = 98.415237f; //실수와 16진 정수를 선언한다.
    int num2 = 0x3fce1920;
    
    sprintf(s1, "%f 0x%x", num1, num2); //문자열 s1에 num1과 num2를 문자열로 만든 뒤 저장한다.
    
    printf("%s\n", s1);
    
    return 0;
}