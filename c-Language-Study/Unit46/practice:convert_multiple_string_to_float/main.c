#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char *s1 = "29.977213 4528.112305"; //문자열에 여러 개의 실수를 저장한다.
    float num1, num2;
    char *end; //이전 숫자의 끝포인터를 저장하기 위해 end포인터를 선언한다.
    
    num1 = strtof(s1, &end); //strtof 함수를 이용해 문자열, 끝포인터 순으로 입력한다.
    num2 = strtof(end, NULL); //&end가 끝포인터이었으므로 다음 문자열의 시작 주소는 end포인터이다.
    
    printf("%f\n", num1);
    printf("%f\n", num2);
    
    return 0;
}