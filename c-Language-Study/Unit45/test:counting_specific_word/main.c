#include <stdio.h>
#include <string.h> //strtok이 선언 되어 있는 헤더파일

int main()
{
    char s1[1001]; //길이 1000이하의 문자열
    int cnt = 0; //특정 문자의 개수를 세주는 변수
    
    scanf("%[^\n]s", s1);
    
    char *tok = strtok(s1, " .,"); //문자열에서 각각의 문자들로 나누어주기 위해 공백, 점, 컴마를 기준으로 문자열을 나눈다.
    
    while (tok != NULL) //문자열이 끝날때까지 반복한다.
    {
        if (strcmp(tok, "the") == 0) //나눈 문자열이 찾고자 하는 문자 "the"와 같다면
        {
            cnt++; //cnt를 1증가하여 개수를 구한다.
        }
        tok = strtok(NULL, " .,"); //동일한 조건으로 다음 문자도 찾는다.
    }
    
    printf("%d", cnt); //문자열에 들어간 특정 문자의 개수를 구한다.
    
    return 0;
}