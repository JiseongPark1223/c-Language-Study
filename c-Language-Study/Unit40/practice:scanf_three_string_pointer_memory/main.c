#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 10); //s1포인터에 10바이트 크기의 메모리를 할당한다.
    char *s2 = malloc(sizeof(char) * 10); //s2포인터에 10바이트 크기의 메모리를 할당한다.
    char *s3 = malloc(sizeof(char) * 10); //s3포인터에 10바이트 크기의 메모리를 할당한다.
    
    printf("문자열을 세 개 입력하세요: ");
    scanf("%s %s %s", s1, s2, s3); //문자열 세 개를 입력 받은 후 s1, s2, s3에 저장한다.
    
    printf("%s\n", s1); //각 문자열을 출력한다.
    printf("%s\n", s2);
    printf("%s\n", s3);
    
    free(s1); //각 문자열에 할당된 메모리를 해제한다.
    free(s2);
    free(s3);
    
    return 0;
}