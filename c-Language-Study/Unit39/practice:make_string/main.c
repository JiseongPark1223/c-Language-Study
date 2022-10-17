#include <stdio.h>

int main()
{
    char *s1 = "Beethoven 9th Symphony"; //문자열은 1바이트 크기의 char에 저장할 수 없으므로 포인터 s1에 문자열의 주소를 저장한다.
                                         //포인터에 저장하면 메모리 주소는 읽기 전용이다.
                                        
    printf("%s\n", s1); 
    
    return 0;
}