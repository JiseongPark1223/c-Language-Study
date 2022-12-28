#include "print.h" //print함수가 선언된 print.h헤더파일을 포함한다.
#include <stdio.h> //printf함수가 있는 헤더파일을 포함한다.

void print(CALC_DATA *data)
{
    printf("%d %c %d = %d", data->operand1, data->operator, data->operand2, data->result);
}