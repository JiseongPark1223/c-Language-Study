#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1 = "The Little Prince";
    char *s2 = malloc(sizeof(char) * 20); //s2에 복사될 문자열이 들어갈 메모리를 할당한다.
    
    strcpy(s2, s1); //문자열 s1을 s2에 복사한다.
    
    printf("%s\n", s2);
    
    free(s2); //메모리를 해제한다.
    
    return 0;
}