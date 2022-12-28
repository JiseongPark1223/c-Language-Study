#include <string.h>
#include "append.h" //append함수가 선언되어 있는 append.h 헤더파일을 포함한다.

void append(DATA *data, char *s1, char *s2) //append함수를 선언하고 문자열을 이어붙인다.
{
    strcpy(data->string, s1);
    strcat(data->string, s2);
}