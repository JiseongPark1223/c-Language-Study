#include <stdio.h>
#include <string.h>

int main()
{
    char text[30];
    int length;
    int n = 4; //4 gram이기에 4단어씩 반복하여 출력한다.
               //n 이라는 변수에 4를 따로 할당한 이유는 이후 4gram이 아닌 n-gram으로 프로그램을 이용하기에 용이하게 하기 위해서 이다.    
    scanf ("%s", text);
    
    length = strlen(text);
    
    if (length < n) //문자열의 길이가 실행되는 n-gram 보다 작으면 wrong을 출력한다.
    {
        printf("wrong");
    }
    
    else
    {
        for (int i = 0; i < length - (n - 1); i++) //i가 i < length - (n - 1)인 이유는 n-gram에서 총 길이의 n - 1 을 뺀 배열까지 출력해야 null 및 오류가 아닌 마지막문자까지 정상적으로 출력될 수 있기 때문이다.
        {
            for (int j = 0; j < n; j++) //원하는 글자수 만큼 출력한다.
            {
                printf("%c", text[i + j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}