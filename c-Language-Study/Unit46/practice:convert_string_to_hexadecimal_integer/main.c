#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char *s1 = "0x1facefee"; //16진법으로 표기된 문자열을 s1에 선언해준다. 0x는 16진수로 표기되었다는 것을 나타내주는 것이다.
    int num1;
    
    num1 = strtol(s1, NULL, 16); //strtol함수를 통해 문자열, 끝포인터, 진법 순으로 입력하고 변환한다.
    
    printf("0x%x\n", num1);
    
    return 0;
}