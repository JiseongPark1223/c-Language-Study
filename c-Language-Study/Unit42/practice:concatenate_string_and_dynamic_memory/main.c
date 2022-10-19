#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1 = " Wonderland";
    char *s2 = malloc(sizeof(char) * 30); //s2 크기가 30바이트인 동적메모리를 할당한다.
    
    strcpy(s2, "Alice in"); //s2 문자열에 "Alice in"을 복사한다.
    
    strcat(s2, s1); //s2문자열 뒤에 s1 문자열을 이어 붙인다.
    
    printf("%s", s2);
    
    free(s2); //s2에 할당한 동적 메모리를 해제한다.
    
    return 0;
}