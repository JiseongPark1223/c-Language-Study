#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(char *a, char *b) //문자열 변수 2개를 매개변수로 받고 반환값은 없는 함수를 선언한다.
{
    if(strcmp(a, b) == 0) //strcmp함수를 이용에 같으면 같음을 출력 다르면 다름을 출력한다.
    {
        printf("같음");
    }
    else
    {
        printf("다름");
    }
}

int main()
{
    char *s1 = malloc(sizeof(char) * 10); //포인터 변수 s1에 문자열이 들어갈 메모리를 할당한다.
    
    strcpy(s1, "Venus"); //s1에 Venus를 복사한다.
    
    compareString(s1, "Venus"); //s1에 들어간 문자와 Venus를 비교하는 함수에 넣는다.
    
    free(s1); //malloc함수로 선언한 메모리를 해제한다.
    
    return 0;
}