#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = " 9th Symphony"; //s1과 s2에 문자열을 선언한다.
    char s2[40] = "Beethoven";
    
    strcat(s2, s1); //s1의 내용을 strcat함수를 이용에 s2에 이어 붙인다.
    
    printf("%s\n", s2);
    
    return 0;
}