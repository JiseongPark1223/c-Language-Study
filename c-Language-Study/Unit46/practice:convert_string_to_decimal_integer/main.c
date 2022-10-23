#include <stdio.h>
#include <stdlib.h> //atoi함수가 선언된 헤더파일이다.

int main()
{
    char *s1 = "20972"; //문자열을 s1에 선언해준다.
    int num1;
    
    num1 = atoi(s1); //atoi 함수를 이용해 문자를 10진 정수로 변환해준다.
    
    printf("%d\n", num1);
    
    return 0;
}