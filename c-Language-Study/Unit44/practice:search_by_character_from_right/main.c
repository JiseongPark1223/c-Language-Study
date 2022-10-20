#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "The Little Prince";
    
    char *ptr = strrchr(s1, 'i'); //문자열의 오른쪽부터 i로 시작하는 문자열을 찾아 포인터로 반환한다.
    
    printf("%s\n", ptr); //포인터에 저장 후 문자열을 출력한다.
    
    return 0;
}