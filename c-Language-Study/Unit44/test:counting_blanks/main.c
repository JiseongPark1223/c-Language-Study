#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001]; //길이가 1000이하인 문자열을 입력받는다.
    int count = 0; //공백의 개수를 나타낸다.
    
    scanf("%[^\n]s", s1); //문자열 s1을 입력받는다.
    
    char *ptr = strchr(s1, ' '); //공백으로 시작하는 문자열의 포인터를 반환한다.
    
    while (ptr != NULL) //NULL이 되기 전까지 WHILE문을 반복한다.
    {
        count++; //공백을 찾을때마다 1씩 증가시킨다.
        ptr = strchr(ptr + 1, ' '); //공백 다음문자부터 공백을 찾기 시작한다.
    }
    
    printf("%d\n", count); //공백의 개수를 출력한다.
    
    return 0;
}
