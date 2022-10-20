#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Alice in Wonderland"; //길이가 30인 s1배열에 문자열을 입력받는다.
    
    char *ptr = strchr(s1, 'n'); //strchr함수를 이용해 문자열 s1 안에 'n'으로 시작하는 부분의 포인터를 ptr에 저장한다.
    
    while (ptr != NULL) //NULL이 나오기 전까지  while문을 반복한다.
    {
        printf("%s\n", ptr); //strchr함수로 n이 시작하는 부분을 출력한다.
        ptr = strchr(ptr + 1, 'n'); //그 다음배열부터 n으로 시작하는 부분을 찾아 출력한다.
    }
    
    return 0;
}