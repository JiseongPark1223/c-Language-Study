#include <stdio.h>

void hello()
{
    printf("Hello, ");
}

void numberToString(int n, char *buffer)
{
    sprintf(buffer, "%d", n);
}

int main()
{
    void(*fp1)(); //반환값과 매개변수가 없는 함수 포인터 fp1을 선언한다.
    void(*fp2)(int, char *); //반환값이 없고 정수형 자료형과 char포인터 형을 매개변수로 하는 함수 포인터 fp2를 선언한다.
    char buffer[20];
    
    fp1 = hello; //hello함수의 메모리 주소를 함수 포인터 fp1에 저장
    fp2 = numberToString; //numberToString함수의 메모리 주소를 함수 포인터 fp2에 저장
    
    fp1(); //함수포인터로 hello함수를 호출한다.
    fp2(100, buffer); //함수포인터로 numberToString함수를 호출한다.
    printf("%s\n", buffer);
    
    return 0;
}