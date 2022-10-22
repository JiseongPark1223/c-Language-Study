#include <stdio.h>
#include <string.h> //strtok이 선언 되어 있는 헤더파일

int main()
{
    char s1[61]; //60자 이하의 문자를 입력받는다.
    
    scanf("%s", s1);
    
    char *tok = strtok(s1, "."); //점을 기준으로 문자열을 분리하여 각 줄마다 출력한다.
    
    while (tok != NULL) //문자열이 끝날때까지 반복
    {
        printf("%s\n", tok);
        tok = strtok(NULL, "."); //첫번째 문자열이 분리되었으면 그 다음 문자열도 점을 기준으로 분리한다.
    }
    
    return 0;
}