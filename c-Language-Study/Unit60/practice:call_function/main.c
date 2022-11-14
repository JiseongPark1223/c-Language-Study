#include <stdio.h>

void printName() //반환값이 없는 printName함수를 선언해준다.
{
    printf("Beethoven\n");
}

void printOrdinal() //반환값이 없는 printOrdinal함수를 선언해준다.
{
    printf("9th\n");
}

int main()
{
    printName(); //printName함수를 호출한다.
    printOrdinal(); //printOrdinal함수를 호출한다.
    
    return 0;
}