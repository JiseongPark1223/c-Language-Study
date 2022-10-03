#include <stdio.h>

int main()
{
    int i;
    
    for (i = 'a'; i <= 'z'; i++) //a부터 z까지 하나씩 증가하여 출력하는 for 함수이다.
    {
        printf("%c", i);
    }
    
    return 0;
}