#include <stdio.h>

int main()
{
    int *numPtr; //numPtr이라는 포인터 변수를 선언한다.
    int num1 = 10;
    int num2 = 20;
    
    numPtr = &num1; //num1변수의 메모리 주소를 numPtr에 저장한다.
    printf("%d\n", *numPtr); //역참조 연산자를 이용해 numPtr에 저장되어 있는 메모리 주소, 즉 num1의 메모리 주소에 접근해 값을 가져온다.
    
    numPtr = &num2; //num2변수의 메모리 주소를 numPtr에 저장한다. 
    printf("%d\n", *numPtr); //numPtr의 메모리 주소에 접근에 값을 가져온다.
    
    return 0;
}