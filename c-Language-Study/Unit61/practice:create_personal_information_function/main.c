#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person { //Person구조체를 선언한다.
    char name[20];
    int age;
};

struct Person *allocPerson() //포인터 변수 p를 반환하는 구조체 함수를 선언한다.
{
    struct Person *p = malloc(sizeof(struct Person)); //포인터 변수 p에 Person구조체 크기의 메모리를 할당한다.
    
    strcpy(p->name, "Kayle");
    p->age = 22;
    
    return p; //멤버변수에 값을 저장하고 메모리 주소를 반환한다.
}

int main()
{
    struct Person *p1;
    
    p1 = allocPerson(); //포인터 변수 p1에 메모리 주소를 저장한다.
    
    printf("%s\n", p1->name);
    printf("%d\n", p1->age); //알맞은 값을 출력한다.
    
    free(p1); //malloc 함수로 할당한 메모리를 해제한다.
    
    return 0;
}