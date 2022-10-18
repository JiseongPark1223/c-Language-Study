#include <stdio.h>
#include <string.h>

int main()
{
    char s1[31], s2[31]; //길이가 30이하인 문자열 두 개를 선언한다.
    
    scanf("%s %s", s1, s2); //문자열 두 개를 입력받는다.
    
    printf("%d\n", strcmp(s1, s2)); //strcmp함수를 통해 두 문자열이 같은지 다른지 판단한다.
    
    return 0;
}