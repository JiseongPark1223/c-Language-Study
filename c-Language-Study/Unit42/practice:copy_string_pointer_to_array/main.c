#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "C Language"; //s1 포인터에 문자열을 선언해준다.
    char s2[20]; //크기가 20인 배열을 선언해준다.
    
    strcpy(s2, s1); //문자열 s1을 s2에 복사한다.
    
    printf("%s\n", s2); //문자열 s2를 출력한다.
    
    return 0;
}