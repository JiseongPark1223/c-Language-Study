#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "안녕하세요.";
    
    FILE *fp = fopen("hello.txt", "w"); //hello.txt파일을 쓰기 모드로 파일 포인터에 저장한다.
    
    fputs(s1, fp); //s1변수에 저장되있는 문자열을 hello.txt파일에 저장한다.
    
    fclose(fp);
    
    return 0;
}