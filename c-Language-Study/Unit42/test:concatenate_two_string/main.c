#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[40]; //길이가 40인 배열을 선언한다.
    
    scanf("%s", s1); //입력받은 문자열을 s1에 저장한다.
    
    strcat(s1, "th"); //문자열 s1뒤에 "th"를 이어 붙인다.
    
    printf("%s", s1);
    
    return 0;
}