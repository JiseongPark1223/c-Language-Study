#include <stdio.h>
#include <string.h> //memcpy 함수를 포함한 헤더파일
#include <stdlib.h>

struct Person { //구조체 Person를 선언한다.
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    struct Person p2;
    
    strcpy(p1->name, "고길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 서초구 반포동"); //p1변수에 각 멤버변수의 값을 저장해준다.
    
    memcpy(&p2, p1, sizeof(struct Person)); //p1의 값을 p2에 복사한다.
    
    printf("이름: %s\n", p2.name);
    printf("나이: %d\n", p2.age);
    printf("주소: %s\n", p2.address);
    
    free(p1); //malloc 함수로 할당한 메모리를 해제한다.
    
    return 0;
}