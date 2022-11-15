#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName() //char 포인터를 반환하는 getName함수를 선언한다.
{
    char *str = malloc(sizeof(char) * 20); //str 포인터에 20byte크기의 메모리를 할당한다.
    
    strcpy(str, "Mars");  //str 포인터에 Mars를 저장하고 str포인터를 반환한다.
    
    return str;
}

int main()
{
    char *name;
    
    name = getName(); //name 포인터에 getName 함수의 리턴값을 저장한다.
    
    printf("%s\n", name); //name에 저장된 값을 출력한다.
    
    return 0;
}