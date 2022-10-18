#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Pachebel Canon";
    char *s2 = "Pachebel Canon";
    
    int ret = strcmp(s1, s2); //strcmp함수는 두 문자열을 비교하여준다.
                              //크기가 같으면 0, 문자열 s2가 크면 -1, s1이 크면 1을 출력한다.
    printf("%d", ret);        //리눅스와 os에서는 s1에서 s2를 빼 양수와 음수로 크기를 구분한다.
    
    return 0;
}