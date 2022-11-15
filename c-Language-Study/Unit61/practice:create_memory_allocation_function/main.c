#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
    char *ptr = malloc(sizeof(char) * 20);
    
    return ptr; //ptr포인터에 20byte크기의 메모리를 할당한 후 반환한다.
}

int main()
{
    char *s1;
    
    s1 = allocMemory(); //리턴값 ptr포인터에 저장된 메모리를 s1에 복사한다.
    
    strcpy(s1, "Uranus"); //s1에 Uranus를 저장한다.
    printf("%s\n", s1); //s1에 저장된 값을 출력한다.
    free(s1);
    
    return 0;
}