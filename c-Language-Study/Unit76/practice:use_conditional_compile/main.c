#include <stdio.h>

#define DEBUG
#define DEBUG_LEVEL 2 //#if조건으로 DEBUG_LEVEL가 2 이상이고 DEBUG가 정의되어야 하기 때문에 매크로를 정의하고 선언한다.

struct Person {
    char name[20];
    int age;
    char address[100];
#if DEBUG_LEVEL >= 2 && defined DEBUG
    char residentRegistrationNumber[15];
#endif
};

int main()
{
    struct Person p1 = {
        "홍길동",
        30,
        "서울시 용산구 한남동",
#if DEBUG_LEVEL >= 2 && defined DEBUG_LEVEL
        "860821-1326821"
#endif
    };
    
#if DEBUG_LEVEL >= 2 && defined DEBUG_LEVEL
    printf("%s %d %s %s\n", p1.name, p1.age, p1.address, p1.residentRegistrationNumber);
#else
    printf("%s %d %s\n", p1.name, p1.age, p1.address);
#endif

    return 0;
}