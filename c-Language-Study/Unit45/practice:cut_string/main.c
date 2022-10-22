#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40] = "Alice's Adventures in Wonderland";
    
    char *tok = strtok(s1, " "); //strtok함수를 특정 문자를 기준으로 문자열을 자른다.
                                 //공백을 기준으로 s1을 자른다.
    while (tok != NULL) //문자열이 더 이상 나오지 않을 때까지 반복한다.
    {
        printf("%s\n", tok); //자른 문자열을 출력한다.
        tok = strtok(NULL, " "); //문자열을 자르고 그 뒤에 NULL문자가 들어가므로 다음 문자열은 NULL문자부터 시작하면 된다.
    }
    
    return 0;
}