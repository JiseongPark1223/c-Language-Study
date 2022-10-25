#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
    int length, isPalindrome = 1;
    char *text = malloc(sizeof(char) * 31); //strcat에서 포인터 tok과 쓰기 위해 포인터로 선언 후 값을 저장해야 하므로 malloc으로 메모리를 할당해준다.
    
    scanf("%[^\n]s", text); //문자열을 입력받는다.
    
    char *tok = strtok(text, " "); //공백을 기준으로 문자열을 나눈다.
    
    text = tok; //text에 나눈 문자열을 저장한다.
    
    while (tok != NULL) //문자열 끝까지 while문을 반복한다.
    {
        tok = strtok(NULL, " "); //공백을 기준으로 문자열 나누엊준다.
        if (tok != NULL) //NULL문자열이 합쳐지면 출력이 안되기 때문에 NULL문자가 아닐때 합쳐준다.
        {
            strcat(text, tok); //띄어쓰기를 제외한 문자열을 합쳐 띄어쓰기를 없애준다.
        }
    }

    length = strlen(text); //띄어쓰기를 없엔 문자열의 길이를 구한다.
    
    for (int i = 0; i < length / 2; i++)
    {
        if (text[i] != text[length - 1 - i]) //회문을 판별하고 회문이 아니면 isPalindrome에 0을 저장한 후 for문을 빠져나온다.
        {
            isPalindrome = 0;
            break;
        }
    }
    
    printf("%d\n", isPalindrome);
    
    return 0;
}
