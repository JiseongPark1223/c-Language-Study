#include <stdio.h>

int main()
{
    char word;
    
    scanf("%c", &word);
    
    if (word == 'a') //입력받은 단어가 a이면 'a입니다'를 출력합니다.
    {
        printf("a입니다.\n");
    }
    else //a가 아닌 다른 조건은 'a가 아닙니다'로 출력합니다.
    {
        printf("a가 아닙니다.\n");
    }
    
    return 0;
}