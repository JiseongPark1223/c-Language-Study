#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[31];
    char s2[31];
    
    scanf("%s", s1); //입력받은 문자열을 s1에 저장시킨다.
    strcpy(s2, s1); //s1의 내용을 s2에 복사한다.
    
    printf("%s\n", s1);
    printf("%s\n", s2);
    
    return 0;
}