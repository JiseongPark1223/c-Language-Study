#include <stdio.h>
#include <string.h> //memset 함수를 포함한 헤더파일

struct Person { //구조체 Person를 선언한다.
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person p1;
    
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");
    
    memset(&p1, 0, sizeof(p1)); //저장된 인적정보를 삭제해야 하므로 멤버변수의 값을 0으로 설정해준다.
    
    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);
    
    return 0;
}