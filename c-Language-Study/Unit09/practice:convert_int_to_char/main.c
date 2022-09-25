#include <stdio.h>

int main()
{
    char c1 = 2;
    char c2 = 5;

    printf("%c\n", c1 + 48); //%c는 문자형 자료의 서식지정자, + 48을 하지 않으면 아스키코드 상의 두번쨰인 STX가 출력됨.
    printf("%c\n", c2 + 48); //따라서 48을 더해주어 정수 2와 5를 출력;
    
    return 0;
}