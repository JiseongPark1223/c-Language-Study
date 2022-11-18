#include <stdio.h>
//10, 20, 30이 출력되게 하여라.
int getNumber(int *a, int *b) //int형 포인터 변수 2개를 매개변수로 받고 int형을 반환하는 함수를 선언
{
    *a = 10; //call by address형으로 주소값을 받아 변수의 값을 수정한다. 
    *b = 20;
    return 30; 반환값으로 30을 출력해 result에 30이 출력되도록 한다.
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    
    result = getNumber(&num1, &num2);
    
    printf("%d %d %d\n", num1, num2, result);
    
    return 0;
}