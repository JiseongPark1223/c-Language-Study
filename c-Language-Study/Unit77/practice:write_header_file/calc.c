#include "calc.h" //mul함수가 선언되어 있는 calc.h 헤더파일을 포함한다.

void mul(CALC_DATA *data) //mul함수를 선언하고 곱셈의 함수를 만든다.
{
    data->operator = '*';
    
    data->result = data->operand1 * data->operand2;
}