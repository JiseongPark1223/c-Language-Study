#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName() //s1의 메모리 주소를 반환하는 함수 getName를 선언한다.
{
    char *s1 = malloc(sizeof(char)* 20); //포인터 변수 s1에 20byte 크기의 메모리를 할당한다.
    
    strcpy(s1, "Neptune"); //Neptune을 s1에 저장한다.
    
    return s1;
}

int main()
{
    char *name;
    
    name = getName(); //메모리 주소값을 name에 저장한다.
    
    printf("%s\n", name); //name에 저장된 문자열을 출력한다.
    
    free(name); //malloc 함수로 할당한 메모리를 해제한다.
    
    return 0;
}