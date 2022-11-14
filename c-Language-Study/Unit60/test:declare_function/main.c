#include <stdio.h>

void printName(); //함수 원형을 선언한다.
void printOrdianl();

int main()
{
    printName(); //함수를 호출한다.
    printOrdianl();
    
    return 0;
}

void printName() //함수를 정의한다.
{
    printf("Beethoven\n");
}

void printOrdianl()
{
    printf("9th Symphony\n");
}