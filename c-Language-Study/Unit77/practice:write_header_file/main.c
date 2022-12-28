#include "calc.h" //mul함수가 선언된 calc.h 헤더파일을 포함한다.
#include "print.h" //print함수가 선언된 print.h 헤더파일을 포함한다.

int main()
{
    CALC_DATA data;
    data.operand1 = 2;
    data.operand2 = 3; //각 멤버변수에 원하는 값을 저장한다.
    
    mul(&data); //함수에 data의 주솟값을 넣어 결과를 구한다.
    print(&data);
    
    return 0;
}