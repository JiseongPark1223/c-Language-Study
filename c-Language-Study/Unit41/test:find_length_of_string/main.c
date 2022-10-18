#include <stdio.h>
#include <string.h>

int main()
{
    char s1[31]; //30이하의 문자열을 입력받으므로 null값을 포함해 크기가 31인 배열을 선언한다.
    
    scanf("%s", s1); //배열을 입력받는다.
    
    printf("%d\n", strlen(s1)); //입력받은 배열의 길이를 구한 후 출력한다.
    
    return 0;
}