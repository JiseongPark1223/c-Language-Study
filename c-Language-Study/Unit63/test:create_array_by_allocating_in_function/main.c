#include <stdio.h>
//성과 이름을 입력받고 성과 이름을 출력되게 만들어라.
void printfFullName(char *a, char *b) //매개변수로 문자열을 받을때는 포인터 변수를 선언한다.
{
    printf("%s%s\n", a, b); //입력받은 문자열을 출력한다.
}

int main()
{
    char familyName[31];
    char givenName[31];
    
    scanf("%s %s", familyName, givenName); //성과 이름을 입력받는다.
    
    printfFullName(familyName, givenName); //함수의 알맞은 값을 대입한다.
    
    return 0;
}