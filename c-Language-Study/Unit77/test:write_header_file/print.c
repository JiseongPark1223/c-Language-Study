#include "print.h" //print함수가 선언된 print.h헤더파일을 포함한다.
#include <stdio.h> //printf함수가 있는 헤더파일을 포함한다.

void print(DATA *data)
{
    printf("%s\n", data->string);
}